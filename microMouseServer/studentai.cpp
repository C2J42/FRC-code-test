
#include "micromouseserver.h"

char g_map[20][20] ;
int g_posX = 1 ;
int g_posY = 1 ;
char g_lastMove = 'n' ;
bool atEnd = false ;

void microMouseServer::studentAI()
{
    if (!atEnd) { intersectionManager(); }
    if (g_posX == 12 && g_posY == 8) // basically just telling the mouse where the end is
    {
        atEnd = true ;
        foundFinish() ;
    }
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
