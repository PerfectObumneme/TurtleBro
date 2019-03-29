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

#include "GameOver.h"

void Gameover(SDL_Plotter& g){

    for(int i = 0; i < 4; i++){
        DrawLetter(g, 250, 400,'G', 8, 255, 0, 0);
        DrawLetter(g, 375, 400,'A', 8, 255, 0, 0);
        DrawLetter(g, 500, 400,'M', 8, 255, 0, 0);
        DrawLetter(g, 625, 400,'E', 8, 255, 0, 0);

        DrawLetter(g, 250, 600,'O', 8, 255, 0, 0);
        DrawLetter(g, 375, 600,'V', 8, 255, 0, 0);
        DrawLetter(g, 500, 600,'E', 8, 255, 0, 0);
        DrawLetter(g, 625, 600,'R', 8, 255, 0, 0);

        DrawLetter(g, 200, 850,'P', 2, 255, 0, 0);
        DrawLetter(g, 225, 850,'R', 2, 255, 0, 0);
        DrawLetter(g, 250, 850,'E', 2, 255, 0, 0);
        DrawLetter(g, 275, 850,'S', 2, 255, 0, 0);
        DrawLetter(g, 300, 850,'S', 2, 255, 0, 0);

        DrawLetter(g, 350, 850,'S', 2, 255, 255, 255);
        DrawLetter(g, 375, 850,'P', 2, 255, 255, 255);
        DrawLetter(g, 400, 850,'A', 2, 255, 255, 255);
        DrawLetter(g, 425, 850,'C', 2, 255, 255, 255);
        DrawLetter(g, 450, 850,'E', 2, 255, 255, 255);

        DrawLetter(g, 500, 850,'T', 2, 255, 0, 0);
        DrawLetter(g, 525, 850,'O', 2, 255, 0, 0);

        DrawLetter(g, 575, 850,'T', 2, 255, 0, 0);
        DrawLetter(g, 600, 850,'R', 2, 255, 0, 0);
        DrawLetter(g, 625, 850,'Y', 2, 255, 0, 0);

        DrawLetter(g, 675, 850,'A', 2, 255, 0, 0);
        DrawLetter(g, 700, 850,'G', 2, 255, 0, 0);
        DrawLetter(g, 725, 850,'A', 2, 255, 0, 0);
        DrawLetter(g, 750, 850,'I', 2, 255, 0, 0);
        DrawLetter(g, 775, 850,'N', 2, 255, 0, 0);



    }
}
