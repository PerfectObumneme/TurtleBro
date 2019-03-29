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
#ifndef Mario_h
#define Mario_h

#include "Point.h"
#include "Rectangle.h"
#include "SDL_Plotter.h"
#include "Enemy.h"

class Player{
    private:
    int n;
    int x = 200, y = 180;

    public:

    Rectangle aR[100];

    //*************************************************************
    // description: A default constructor for the player class.      *
    // return: N/A                                                   *
    // precondition: An enemy must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down.           *
    //****************************************************************
    Player();

    //***************************************************************
    // description: A constructor that declares a max array of
    // rectangles that will make the player.                         *
    // return: N/A                                                   *
    // precondition: An enemy must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down.           *
    //****************************************************************

    Player(int n, Rectangle a[100], int x, int y);

    /*
     Precondition: A SDL_Plotter variable exists along with
        an array of rectangles
     Postcondition: The SDL_Plotter variable can be changed but
        the array of rectangles will remain unchanged
     Return: N/A
     Description: This function will draw a player
     */

     //***************************************************************
    // description: A functions that draws the player based on a     *
    // location and number of rectangles and can also scale him to   *
    // a size.                                                       *
    // return: N/A                                                  *
    // precondition: An enemy must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down.           *
    //****************************************************************
    void drawPlayer(SDL_Plotter& g, int n, int startX, int startY, int szX, int szY);

     //***************************************************************
    // description: A functions that moves the player based on the   *
    // the direction and speed.                                      *
    // return: N/A                                                 *
    // precondition: A player must exist and have a speed.           *
    // postcondition: The player will be moved in accordance to the  *
    // direction and the speed.                                      *
    //****************************************************************
    void movePlayer(DIRECTIONS d, int n, int sp);


      //***************************************************************
    // description: A functions that draws the player based on a     *
    // location and number of rectangles and can also scale him to   *
    // a size.                                                       *
    // return: N/A                                                 *
    // precondition: A player object must exist.                     *
    // postcondition: The player will be drawn in accordance to user *
    // specification and color.                                      *
    //****************************************************************
    void drawNewPlayer(SDL_Plotter& g, int n, int startX, int startY, int szX, int szY, Color c);

    //***************************************************************
    // description: A setter functions that sets the players initial*
    // location.                                                     *
    // return: N/A                                                  *
    // precondition: A player object must exist.                     *
    // postcondition: The player will be drawn in accordance to user *
    // specification and color.                                      *
    //****************************************************************
    void setToStart(int startX, int startY, int n);

      //****************************************************************
    // description: A collision function that detects when the player *
    // has hit the bottom of a platform.                             *
    // return: bool                                                  *
    // precondition: An player must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The player's y speed will be set to positive so *
    // he bounces of the platform and starts falling down.           *
    //****************************************************************

    bool colTop(int top_y, int x1, int x2);


    //****************************************************************
    // description: A collision function that detects when the player*
    // has hit the top of a platform.                                *
    // return: bool                                                  *
    // precondition: An player must have been declared is moving     *
    // across the screen.                                            *
    // postcondition: The player's y speed will be set to 0 so       *
    // he bounces of the platform and starts falling down.           *
    //****************************************************************

        bool colBot(int bot_y, int x1, int x2);
    //****************************************************************
    // description: A collision function that detects when the player *
    // has hit the left side of a platform.                          *
    // return: bool                                                  *
    // precondition: An player must have been declared is moving      *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down and        *
    // his x speed to 0 so he stops moving in that direction.        *
    //****************************************************************

        bool colLeft(int left_x, int y1, int y2);
    //****************************************************************
    // description: A collision function that detects when the player *
    // has hit the right side of a platform.                          *
    // return: bool                                                  *
    // precondition: An player must have been declared is moving     *
    // across the screen.                                            *
    // postcondition: The enemy's y speed will be set to positive so *
    // he bounces of the platform and starts falling down and        *
    // his x speed to 0 so he stops moving in that direction.        *
    //****************************************************************

        bool colRight(int right_x, int y1, int y2);

    //****************************************************************
    // description: A collision function that detects when the player*
    // is inside the left pipe.                                      *
    // return: bool                                                  *
    // precondition: An player must have been declared is moving     *
    // left across the screen.                                       *
    // postcondition: The player will be moved to upper right pipe.  *
    //****************************************************************

        bool colLeftPipe(int rightX1, int rightX2, int y1, int y2);
    //****************************************************************
    // description: A collision function that detects when the player *
    // is inside the right pipe.                                      *
    // return: bool                                                   *
    // precondition: An player must have been declared is moving      *
    // right across the screen.                                       *
    // postcondition: The player will be moved to upper left pipe.    *
    //****************************************************************

        bool colRIGHTPipe(int LeftX1, int LefttX2, int y1, int y2);

    //****************************************************************
    // description: A collision that detects when the player kills   *
    // an enemy (turtle) by colliding with his right side.           *
    // return: bool                                                  *
    // precondition: An enemy class must exists and players.         *
    // postcondition: The game will enter a game over state.         *
    //****************************************************************


        bool killPlayer(Enemies turtle);

    //****************************************************************
    // description: A collision that detects when the player kills   *
    // an enemy (turtle) by colliding with his left side.            *
    // return: bool                                                  *
    // precondition: An enemy class must exists and players.         *
    // postcondition: The game will enter a game over state.         *
    //****************************************************************
        bool killPlayerLeft(Enemies turtle);
    };

#endif /* Mario_h */
