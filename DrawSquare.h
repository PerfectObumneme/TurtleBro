/*
Author:  Perfect Obumneme, 
This program run the game of Mario
where the turtle is trying to defeat the Marios.
Due Date: 12/3/2018
Date Created: 10/30/2018
Date Last Modified: 12/3/2018
*/


#ifndef DrawSquare_h
#define DrawSquare_h
#include "SDL_Plotter.h"
#include <iostream>
using namespace std;

/*
 * description: draws a square
 * return: none
 * precondition: the SDL_plotter, starting x position, starting y position,
 *  size of each side, and the red, green, and blue integer values are
 *  valid
 * postcondition: draws a square
 */

void drawSquare(SDL_Plotter& p, int , int , int, int, int, int);
#endif /* DrawSquare_h */
