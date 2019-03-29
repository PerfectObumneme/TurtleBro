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


#ifndef Rectfunct_h
#define Rectfunct_h
#include "SDL_Plotter.h"

/*
 * description: this function is used to create rectangles
 *the function will plot rectangles which will then appear
 *on our screen while the game runs
 * return: void
 * precondition: nothing. The user must know the exact x's
 *and y ranges to be able to construct a rectangle.
 * postcondition: using the SDL Plotter, a rectangle will be
 * plotted to the screen. In our case we used this to place
 * our platforms.
 *
 */

void drawRect(SDL_Plotter& p, int x, int x2, int y, int y2, int r, int g, int b); // function prototype

#endif /* Rectfunct_h */
