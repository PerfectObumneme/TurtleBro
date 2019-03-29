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


#ifndef TopScore_h
#define TopScore_h
#include "SDL_Plotter.h"
#include "DrawLetter.h"

/*
 * description: this function is used to create the header
 * in the game. This will plot Turtle and Score on the
 * top of our screen while the game runs
 * return: void
 * precondition: nothing. The user must only give the
 * SDL plotter to the function so it is placed on top
 * postcondition: using the SDL Plotter, a turtle name will be
 * plotted to the screen along with a score that will keep as
 * the game continues
 */

void HeadText( SDL_Plotter&g);

#endif /* TopScore_h */
