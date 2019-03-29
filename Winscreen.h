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

#ifndef Winscreen_h
#define Winscreen_h
#include "SDL_Plotter.h"
#include "DrawLetter.h"
#include "Rectfunct.h"
#include <iostream>

using namespace std;

//************************************************************
// Description: This Function will display a congratulatory  *
//              to the player including a names of people who*
//              made the game.It also has a message displayed*
//              to tell the player to restart                *
// Return: Its Void                                          *
// Precondition: It takes SDL Grpahics as its argument       *
// Postcondition: It prints the desired graphics             *
//                                                           *
//************************************************************

void Win(SDL_Plotter& );

#endif /* Winscreen_h */
