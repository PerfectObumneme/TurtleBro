/*
Author: Taylor Carloss, Perfect Obumneme, Esteban Orozco,
Hector Castro, Jake Allen
Assignment Title: Mario Final Project
Assignment Desription: This program run the game of Mario
where the turtle is trying to defeat the Marios.
Due Date: 12/3/2018
Date Created: 10/30/2018
Date Last Modified: 12/3/2018
*/
#ifndef Enemy_h
#define Enemy_h

#include "Rectangle.h"
#include "Constants.h"

class Enemies{
    private:
        int x = 0, y = 0;
        bool jumping = false;
        bool y_velocity;
    public:
        Rectangle enemy[100];
    //************************************************************
    // description: Default constructor                          *
    // return: N/A                                               *
    // precondition: An enemy must have been declared            *
    // postcondition: The enemy class will be filled with an     *
    // array of rectangles that make up the design of the enemy. *
    //************************************************************
        Enemies();
    //************************************************************
    // description: Constructor that takes initial coordinates as*
    // objects.                                                  *
    // return: N/A                                               *
    // precondition: An enemy must have been declared along      *
    // with two arguments.                                       *
    // postcondition: The enemy class will be filled with an     *
    // array of rectangles that make up the design of the enemy. *
    //************************************************************
        Enemies(int, int);

        void setJumpstate(bool);

    //************************************************************
    // description: Function that draws the enemy and allows the *
    // user to place initial coordinates as well as a size scale.*
    // return: N/A                                               *
    // precondition: An enemy must have been declared..          *
    // postcondition: The enemy will be drawn in the SDL Plotter *
    //************************************************************
        void drawEnemy(SDL_Plotter& g, int n, int startX, int startY, int szX, int szY);
    //***************************************************************
    // description: Function that allows the user to move the       *
    // enemy based on the direction (determine by the arrow key)    *
    // the number of rectangles contain in the enemy and the speed  *
    // at which you want the enemy to move.                         *
    // return: N/A                                                  *
    // precondition: An enemy must have been declared. And an arrow *
    // key must be hit.                                             *
    // postcondition: The enemy will move in the direction pressed. *
    //***************************************************************
        void moveEnemy(DIRECTIONS d, int n, int sp);

        void jumpEnemy(int n, int startY, int prevSpeed);
    //***************************************************************
    // description: Jump function that allows the user to make the  *
    // enemy class jump, based on how many rectangles, a variable   *
    // used to key hold of the initial y- coordinate of the enemy   *
    // and its previous speed.                                      *
    // return: N/A                                                  *
    // precondition: An enemy must have been declared and the up    *
    // arrow must have been pressed.                                *
    // postcondition: The enemy will jump across the SDL Plotter    *
    //***************************************************************

        void jumpVerticalEnemy(int n, int startY);
    //***************************************************************
    // description: Jump function that allows the user to make the  *
    // enemy class jump vertically following the same specifications*
    // as the jumpEnemy function, except it has a lower y-max range *
    // return: N/A                                                  *
    // precondition: An enemy must have been declared and the down  *
    // arrow must have been pressed.                                *
    // postcondition: The enemy will jump up and down in            *
    // the SDL Plotter                                              *
    //***************************************************************

    //****************************************************************
    // description: A collision function that detects when the enemy *
    // has hit the top of a platform.                                *
    // return: bool                                                  *
    // precondition: An enemy must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy will stop if it has hit the top of a *
    // platform.                                                     *
    //****************************************************************


        bool colTop(int top_y, int x1, int x2);


    //****************************************************************
    // description: A collision function that detects when the enemy *
    // has hit the bottom of a platform.                             *
    // return: bool                                                  *
    // precondition: An enemy must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down.           *
    //****************************************************************

        bool colBot(int bot_y, int x1, int x2);
    //****************************************************************
    // description: A collision function that detects when the enemy *
    // has hit the left side of a platform.                          *
    // return: bool                                                  *
    // precondition: An enemy must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down and        *
    // his x speed to 0 so he stops moving in that direction.        *
    //****************************************************************

        bool colLeft(int left_x, int y1, int y2);
    //****************************************************************
    // description: A collision function that detects when the enemy *
    // has hit the right side of a platform.                          *
    // return: bool                                                  *
    // precondition: An enemy must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down and        *
    // his x speed to 0 so he stops moving in that direction.        *
    //****************************************************************

        bool colRight(int right_x, int y1, int y2);

    //****************************************************************
    // description: A collision function that detects when the enemy *
    // is inside the left pipe.                                      *
    // return: bool                                                  *
    // precondition: An enemy must have been declared is moving      *
    // left across the screen.                                       *
    // postcondition: The enemy will be moved to upper right pipe.   *
    //****************************************************************

        bool colLeftPipe(int rightX1, int rightX2, int y1, int y2);
    //****************************************************************
    // description: A collision function that detects when the enemy *
    // is inside the right pipe.                                     *
    // return: bool                                                  *
    // precondition: An enemy must have been declared is moving      *
    // right across the screen.                                      *
    // postcondition: The enemy will be moved to upper left pipe.    *
    //****************************************************************

        bool colRIGHTPipe(int LeftX1, int LefttX2, int y1, int y2);

    //****************************************************************
    // description: A collision that detects when the turtle kills   *
    // a player                                                      *
    // return: bool                                                  *
    // precondition: An enemy class must exists and players.         *
    // postcondition: The player will stop moving and the score will *
    // be updated.                                                   *
    //****************************************************************

        bool KillEnemy(int Left, int Right, int MarioTop);



};
#endif /* Enemy_h */
