
#include "micromouseserver.h"

void microMouseServer::studentAI()
{
    //branches
    if ((isWallLeft() + isWallRight() + isWallForward()) <= 1)
    {
        if (isWallLeft()) //  |_
        {
            int dir = rand() % 2 ;
            if (dir==0) { turnRight(); }
        } else if (isWallRight()) { // _|
            int dir = rand() % 2 ;
            if (dir==0) { turnLeft(); }
        } else if (isWallForward()) { // =
            int dir = rand() % 2 ;
            if (dir==0) { turnLeft(); }
            else { turnRight(); }
        } else { // _|_
            int dir = rand() % 3 ;
            if(dir == 0) { turnRight(); }
            else if (dir == 1) { turnLeft(); }
        }
    }

    if(!isWallForward()) { moveForward(); }
    else { turnRight(); }

    /* Wall hugging:
    if (!moveForward()) { turnRight() ; }
    if(!isWallLeft()) { turnLeft() ; }
    */
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
