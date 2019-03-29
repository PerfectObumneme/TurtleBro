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


#ifndef Titlescreen_h
#define Titlescreen_h
#include "SDL_Plotter.h"
#include "DrawLetter.h"
#include "Rectfunct.h"


/*
 * description: this function is used to create and plot the title
 * screen of the game.
 * return: void (nothing)
 * precondition: nothing. The user must only give the
 * SDL plotter to the function so it is placed before starting the game
 * postcondition: using the SDL Plotter, a title screen will be
 * plotted to the screen.
 */

void Title( SDL_Plotter&g);

#endif /* Titlescreen_h */
