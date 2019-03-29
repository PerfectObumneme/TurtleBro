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
#include "TopScore.h"

void HeadText( SDL_Plotter&g){

     DrawLetter(g, 25, 25, 'T' , 2, 255, 0, 0);
     DrawLetter(g, 55, 25, 'U' , 2, 255, 0, 0);
     DrawLetter(g, 85, 25, 'R' , 2, 255, 0, 0);
     DrawLetter(g, 110,25, 'T' , 2, 255, 0, 0);
     DrawLetter(g, 140,25, 'L' , 2, 255, 0, 0);
     DrawLetter(g, 165,25, 'E' , 2, 255, 0, 0);


    DrawLetter(g, 450, 25, 'S', 2, 255, 255, 255);
    DrawLetter(g, 480, 25, 'C', 2, 255, 255, 255);
    DrawLetter(g, 510, 25, 'O', 2, 255, 255, 255);
    DrawLetter(g, 540, 25, 'R', 2, 255, 255, 255);
    DrawLetter(g, 570, 25, 'E', 2, 255, 255, 255);
    DrawLetter(g, 595, 25, ':', 2, 255, 255, 255);

}
