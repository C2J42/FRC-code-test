
#include "micromouseserver.h"

//directions: f=forward, l=left, r=right

int moveNum = 0 ;
char moves[400] ; //400 bc 400 total squares on maze

void microMouseServer::studentAI()
{
    testPaths() ;

    /* Wall hugging:
    if (!moveForward()) { turnRight() ; }
    if(!isWallLeft()) { turnLeft() ; }
    */
}

void microMouseServer::testPaths()
{
    checkIntersection() ;
    moveForward() ;
    moveNum++ ;
}

void microMouseServer::backtrack(char dir)
{
    switch (dir)
    {
    case 'f':
        break ;
    case 'l':
        break ;
    case 'r':
        break ;
    }
}

void microMouseServer::checkIntersection()
{
    int check = int(!isWallLeft()) + int(!isWallRight()) + int(!isWallForward()) ;
    switch (check) {
    case 0:
        //dead end
        moves[moveNum] = 'x' ;
        if (!hasoutputted)
        {
            printUI(moves) ;
            hasoutputted = true ;
        }
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
        //two turn options
        break ;
    case 3:
        //three turn options
        break ;
    }
}

void microMouseServer::twoTurns(char dir)
{
    if (isWallForward())
    {

    }
    switch (dir)
    {
    case 'f':
        break ;
    case 'l':
        break ;
    case 'r':
        break ;
    }
}

void microMouseServer::threeTurns(char dir)
{
    switch (dir)
    {
    case 'f':
        break ;
    case 'l':
        break ;
    case 'r':
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
