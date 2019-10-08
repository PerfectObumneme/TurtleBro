/*
Author:  Perfect Obumneme, 
This program run the game of Mario
where the turtle is trying to defeat the Marios.
Due Date: 12/3/2018
Date Created: 10/30/2018
Date Last Modified: 12/3/2018
*/
#include "DrawSquare.h"

void drawSquare(SDL_Plotter& p, int x, int y, int size, int r, int g, int b){

    for(int d = 0; d < size && x + d < p.getCol(); d++){

        for(int i = 0; i < size && y + i < p.getRow(); i++){
            p.plotPixel(x + d, y + i, r, g , b);
        }
    }

}
