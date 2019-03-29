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
#include "Rectfunct.h"

void drawRect(SDL_Plotter& p, int x, int x2, int y, int y2, int r, int g, int b){
    for(int row = x; row <= x2; row++){
        for(int col = y; col <= y2; col++){
            p.plotPixel(col, row, r, g, b);
        }
    }
}
