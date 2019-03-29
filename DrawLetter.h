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


#ifndef DrawLetter_h
#define DrawLetter_h
#include "SDL_Plotter.h"
#include "Letters.h"
#include "DrawSquare.h"

/*
 * description: draws a square
 * return: none
 * precondition: the SDL_plotter, starting x position, starting y position,
 *  size of each side, and the red, green, and blue integer values are
 *  valid
 * postcondition: draws a square
 */


void DrawLetter(SDL_Plotter &g, int, int, char, int, int, int, int);

#endif /* DrawLetter_h */
