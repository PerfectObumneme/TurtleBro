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

#ifndef GameOver_h
#define GameOver_h
#include "SDL_Plotter.h"
#include "DrawLetter.h"
#include "Rectfunct.h"
#include <iostream>

using namespace std;

/*
 * description: draws the game over overlay
 * return: none
 * precondition: SDL_Plotter is valid
 * postcondition: the game over text is drawn
 *
 */


void Gameover(SDL_Plotter& );

#endif /* GameOver_h */
