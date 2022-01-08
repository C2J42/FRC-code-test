
#include "micromouseserver.h"

char g_map[20][20] ;
int g_posX = 1 ;
int g_posY = 1 ;
char g_lastMove = 'n' ;
bool g_atEnd = false ;

int g_lastFourCoords[4][2] ;
char g_lastFourTurns[4] ;

void microMouseServer::studentAI()
{
    if (!endCheck()) { intersectionManager(); }
    else { foundFinish(); }
    printUI(g_lastFourTurns);
}

bool microMouseServer::endCheck()
{
    char posCombos[8][4] = {{'n','e','s','w'},{'n','w','s','e'},{'s','w','n','e'},{'s','e','n','w'},{'w','n','e','s'},{'w','s','e','n'},{'e','n','w','s'},{'e','s','w','n'}} ;
    for (int i=0; i<8; i++)
    {
        bool match = true ;
        for (int x=0; x<4; x++)
        {
            if (posCombos[i][x] != g_lastFourTurns[x]) {match=false;}
        }
        if (match==true) {printUI("cool"); return true;}
    }
    return false ;
    /*bool conditionMatch = true ;
    int nLoc ;
    for (int i=0; i<4; i++)
    {
        if (g_lastFourTurns[i] == 'n')
        {
            nLoc = i ;
        }
    }
    switch(nLoc)
    {
    case 0:
    {
        if (g_lastFourTurns[2] != 's') { conditionMatch = false; }
        if (!((g_lastFourTurns[1] == 'w' && g_lastFourTurns[3] == 'e') || (g_lastFourTurns[1] == 'e' && g_lastFourTurns[3] == 'w'))) { conditionMatch = false; }
    }
    case 1:
    {
        if (g_lastFourTurns[3] != 's') { conditionMatch = false; }
        if (!((g_lastFourTurns[2] == 'w' && g_lastFourTurns[0] == 'e') || (g_lastFourTurns[2] == 'e' && g_lastFourTurns[0] == 'w'))) { conditionMatch = false; }
    }
    case 2:
    {
        if (g_lastFourTurns[0] != 's') { conditionMatch = false; }
        if (!((g_lastFourTurns[1] == 'w' && g_lastFourTurns[3] == 'e') || (g_lastFourTurns[1] == 'e' && g_lastFourTurns[3] == 'w'))) { conditionMatch = false; }
    }
    case 3:
    {
        if (g_lastFourTurns[1] != 's') { conditionMatch = false; }
        if (!((g_lastFourTurns[2] == 'w' && g_lastFourTurns[0] == 'e') || (g_lastFourTurns[2] == 'e' && g_lastFourTurns[0] == 'w'))) { conditionMatch = false; }
    }
    default:
        conditionMatch = false ;
        break ;
    }
    if (conditionMatch == true)
    {
        printUI("cool") ;
    }
    return conditionMatch ;*/
}

void moveLog(char dir)
{
    g_lastFourTurns[0] = g_lastFourTurns[1] ;
    g_lastFourTurns[1] = g_lastFourTurns[2] ;
    g_lastFourTurns[2] = g_lastFourTurns[3] ;
    g_lastFourTurns[3] = dir ;
}

void microMouseServer::intersectionManager()
{
    int check = int(!isWallNorth()) + int(!isWallEast()) + int(!isWallSouth()) + int(!isWallWest()) ;
    switch (check)
    {
    case 1: //dead end
        g_map[g_posX][g_posY] = 'x' ;
        if (!isWallNorth()) { north(); }
        else if (!isWallEast()) { east(); }
        else if (!isWallSouth()) { south(); }
        else if (!isWallWest()) { west(); }
        break ;
    case 2: //through path
        if (g_lastMove != 's' && !isWallNorth()) { north(); }
        else if (g_lastMove != 'w' && !isWallEast()) { east(); }
        else if (g_lastMove != 'n' && !isWallSouth()) { south(); }
        else if (g_lastMove != 'e' && !isWallWest()) { west(); }
        break ;
    case 3: //3 way intersection
    {
        char posMoves[2] ;
        int q = 0 ;
        if (g_lastMove != 's' && !isWallNorth()) { posMoves[q] = 'n'; q++; }
        if (g_lastMove != 'w' && !isWallEast()) { posMoves[q] = 'e'; q++; }
        if (g_lastMove != 'n' && !isWallSouth()) { posMoves[q] = 's'; q++; }
        if (g_lastMove != 'e' && !isWallWest()) { posMoves[q] = 'w'; q++; }
        char toDo = posMoves[(rand()%2)] ;
        if (toDo=='n') { north(); }
        else if (toDo=='e') { east(); }
        else if (toDo=='s') { south(); }
        else if (toDo=='w') { west(); }
        break ;
    }
    case 4: //4 way intersection
    {
        char posMoves[3] ;
        int q = 0 ;
        if (g_lastMove != 's' && !isWallNorth()) { posMoves[q] = 'n'; q++; }
        if (g_lastMove != 'w' && !isWallEast()) { posMoves[q] = 'e'; q++; }
        if (g_lastMove != 'n' && !isWallSouth()) { posMoves[q] = 's'; q++; }
        if (g_lastMove != 'e' && !isWallWest()) { posMoves[q] = 'w'; q++; }
        char toDo = posMoves[(rand()%3)] ;
        if (toDo=='n') { north(); }
        else if (toDo=='e') { east(); }
        else if (toDo=='s') { south(); }
        else if (toDo=='w') { west(); }
        break ;
    }
    }
    moveLog(g_lastMove) ;
}

void microMouseServer::north()
{
    g_posY++ ;
    moveForward() ;
    g_lastMove = 'n' ;
}
void microMouseServer::east()
{
    g_posX++ ;
    turnRight() ;
    moveForward() ;
    turnLeft() ;
    g_lastMove = 'e' ;
}
void microMouseServer::south()
{
    g_posY-- ;
    turnRight() ;
    turnRight() ;
    moveForward() ;
    turnLeft() ;
    turnLeft() ;
    g_lastMove = 's' ;
}
void microMouseServer::west()
{
    g_posX-- ;
    turnLeft() ;
    moveForward() ;
    turnRight() ;
    g_lastMove = 'w' ;
}

bool microMouseServer::isWallNorth()
{
    bool isX = false ;
    if (g_map[g_posX][g_posY+1] == 'x') { isX = true; }
    return (isWallForward() || isX) ;
}
bool microMouseServer::isWallEast()
{
    bool isX = false ;
    if (g_map[g_posX+1][g_posY] == 'x') { isX = true; }
    return (isWallRight() || isX) ;
}
bool microMouseServer::isWallSouth()
{
    bool isX = false ;
    if (g_map[g_posX][g_posY-1] == 'x') { isX = true; }
    turnRight() ;
    bool temp = isWallRight() ;
    turnLeft() ;
    return (temp || isX) ;
}
bool microMouseServer::isWallWest()
{
    bool isX = false ;
    if (g_map[g_posX-1][g_posY] == 'x') { isX = true; }
    return (isWallLeft() || isX) ;
}

/*
 * The following are the eight functions that you can call. Feel free to create your own fuctions as well.
 * Remember that any solution that calls moveForward more than once per call of studentAI() will have points deducted.
 *
 *The following functions return if there is a wall in their respective directions
 *bool isWallLeft();
 *bool isWallRight();
 *bool isWallForward();
 *
 *The following functions move the mouse. Move forward returns if the mouse was able to move forward and can be used for error checking
 *bool moveForward();
 *void turnLeft();
 *void turnRight();
 *
 * The following functions are called when you need to output something to the UI or when you have finished the maze
 * void foundFinish();
 * void printUI(const char *mesg);
*/
