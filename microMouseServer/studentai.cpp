
#include "micromouseserver.h"

//directions: f=forward, l=left, r=right

int moveNum = 0 ;
char moves[400] ; //400 bc 400 total squares on maze
int intersections[100] ; //save moveNum value of where intersections were for backtrack purposes.

//need some way of marking intersections as "complete"
//need an isEnd() function to test if its the end

bool g_backtracking = false ;
int g_visit = 1 ;

void microMouseServer::studentAI()
{
    printUI(moves) ;
    if (g_backtracking==false)
    {
        moveHandler() ;
        moveForward() ;
    } else {
        backtrack() ;
    }
    /* Wall hugging:
    if (!moveForward()) { turnRight() ; }
    if(!isWallLeft()) { turnLeft() ; }
    */
}

void microMouseServer::backtrack()
{
    switch (moves[moveNum])
    {
    case 'f':
        turnLeft() ;
        turnLeft() ;
        moveForward() ;
        turnLeft() ;
        turnLeft() ;
        break ;
    case 'r':
        turnRight() ;
        turnRight() ;
        moveForward() ;
        turnRight() ;
        break ;
    case 'l':
        turnLeft() ;
        turnLeft() ;
        moveForward() ;
        turnLeft() ;
        break ;
    }
    moveNum-- ;
    int x = intersectionCheck() ;
    if (x>=2) // need to fix. Only works if dead end is immediatly after an intersection
    {
        g_backtracking = false ;
        if ((x+1) <= g_visit)
        {
            g_visit = 1 ;
        }
    }
}

void microMouseServer::moveHandler()
{
    int check = int(!isWallLeft()) + int(!isWallRight()) + int(!isWallForward()) ;
    switch (check) {
    case 0:
        //dead end
        g_visit++ ;
        g_backtracking = true ;
        break ;
    case 1: //single path
        if (!isWallRight()) {
            turnRight();
            moves[moveNum] = 'r' ;
        } else if (!isWallLeft()) {
            turnLeft();
            moves[moveNum] = 'l' ;
        } else {
            moves[moveNum] = 'f' ;
        }
        break ;
    case 2: //two turn intersection
        twoTurns() ;
        break ;
    case 3:
        threeTurns() ;
        break ;
    }
    moveNum++ ;
}

void microMouseServer::twoTurns()
{
    if (g_visit>=3)
    {
        g_visit = 1 ;
        g_backtracking = true ;
        return ;
    }
    //turn types: 1=> left/forward. 2=> right/forward. 3=> left/right.
    int type = NULL;
    char dir = NULL;
    if (isWallRight()) { type=1; }
    else if (isWallLeft()) { type=2; }
    else if (isWallForward()) {type=3; }
    switch (type)
    {
    case 1:
        if (g_visit==1) { dir='l'; }
        else if (g_visit==2) { dir='f'; }
        break ;
    case 2:
        if (g_visit==1) { dir='r'; }
        else if (g_visit==2) { dir='f'; }
        break ;
    case 3:
        if (g_visit==1) { dir='l'; }
        else if (g_visit==2) { dir='r'; }
        break ;
    }
    dirTurn(dir) ;
}

void microMouseServer::threeTurns()
{
    if (g_visit>=4)
    {
        g_visit = 1 ;
        g_backtracking = true ;
        return ;
    }
    char dir = NULL;
    switch(g_visit)
    {
    case 1:
        dir = 'l' ;
        break;
    case 2:
        dir = 'f' ;
        break ;
    case 3:
        dir = 'r' ;
        break ;
    }
    dirTurn(dir) ;
}

void microMouseServer::dirTurn(char dir)
{
    moves[moveNum] = dir ;
    switch (dir)
    {
    case 'f':
        break ;
    case 'l':
        turnLeft() ;
        break ;
    case 'r':
        turnRight() ;
        break ;
    }
}

int microMouseServer::intersectionCheck()
{
    int check = int(!isWallLeft()) + int(!isWallRight()) + int(!isWallForward()) ;
    switch (check) {
    case 0: // dead end
    case 1: // single path
        return 0 ;
        break ;
    case 2: // two turn intersection
        return 2 ;
        break ;
    case 3: // three turn intersection
        return 3 ;
        break ;
    default:
        return false ;
        break ;
    }
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
