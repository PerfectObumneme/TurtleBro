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

#include "Winscreen.h"

void Win(SDL_Plotter& g){

    drawRect(g, 0, 999, 0, 999, 0, 0, 0);
    DrawLetter(g, 100, 200, 'Y', 7, 255, 0, 0);
    DrawLetter(g, 200, 200, 'O', 7, 255, 0, 0);
    DrawLetter(g, 300, 200, 'U', 7, 255, 0, 0);

    DrawLetter(g, 480, 200, 'W', 7, 255, 255, 255);
    DrawLetter(g, 580, 200, 'I', 7, 255, 255, 255);
    DrawLetter(g, 680, 200, 'N', 7, 255, 255, 255);

    DrawLetter(g, 750, 200, '!', 7, 255, 0, 0);
    DrawLetter(g, 780, 200, '!', 7, 255, 0, 0);
    DrawLetter(g, 810, 200, '!', 7, 255, 0, 0);

    DrawLetter(g, 100, 450, 'T', 3, 255, 0, 0);
    DrawLetter(g, 140, 450, 'H', 3, 255, 0, 0);
    DrawLetter(g, 180, 450, 'A', 3, 255, 0, 0);
    DrawLetter(g, 220, 450, 'N', 3, 255, 0, 0);
    DrawLetter(g, 260, 450, 'K', 3, 255, 0, 0);
    DrawLetter(g, 300, 450, 'S', 3, 255, 0, 0);

    DrawLetter(g, 370, 450, 'F', 3, 255, 0, 0);
    DrawLetter(g, 410, 450, 'O', 3, 255, 0, 0);
    DrawLetter(g, 450, 450, 'R', 3, 255, 0, 0);

    DrawLetter(g, 530, 450, 'P', 3, 255, 0, 0);
    DrawLetter(g, 570, 450, 'L', 3, 255, 0, 0);
    DrawLetter(g, 610, 450, 'A', 3, 255, 0, 0);
    DrawLetter(g, 650, 450, 'Y', 3, 255, 0, 0);
    DrawLetter(g, 690, 450, 'I', 3, 255, 0, 0);
    DrawLetter(g, 730, 450, 'N', 3, 255, 0, 0);
    DrawLetter(g, 770, 450, 'G', 3, 255, 0, 0);
    DrawLetter(g, 815, 450, '!', 3, 255, 0, 0);
    DrawLetter(g, 840, 450, '!', 3, 255, 0, 0);

    DrawLetter(g, 300, 600, 'C', 3, 255, 0, 0);
    DrawLetter(g, 340, 600, 'R', 3, 255, 0, 0);
    DrawLetter(g, 380, 600, 'E', 3, 255, 0, 0);
    DrawLetter(g, 420, 600, 'A', 3, 255, 0, 0);
    DrawLetter(g, 460, 600, 'T', 3, 255, 0, 0);
    DrawLetter(g, 500, 600, 'E', 3, 255, 0, 0);
    DrawLetter(g, 540, 600, 'D', 3, 255, 0, 0);

    DrawLetter(g, 610, 600, 'B', 3, 255, 0, 0);
    DrawLetter(g, 650, 600, 'Y', 3, 255, 0, 0);
    DrawLetter(g, 680, 600, ':', 3, 255, 0, 0);

    drawRect(g, 650, 655, 0, 999, 255, 255, 255);

    DrawLetter(g, 50, 700, '.', 3, 255, 0, 0);
    DrawLetter(g, 90, 700, 'E', 2, 255, 0, 0);
    DrawLetter(g, 115, 700, 'S', 2, 255, 0, 0);
    DrawLetter(g, 140, 700, 'T', 2, 255, 0, 0);
    DrawLetter(g, 165, 700, 'E', 2, 255, 0, 0);
    DrawLetter(g, 190, 700, 'B', 2, 255, 0, 0);
    DrawLetter(g, 215, 700, 'A', 2, 255, 0, 0);
    DrawLetter(g, 240, 700, 'N', 2, 255, 0, 0);

    DrawLetter(g, 290, 700, 'O', 2, 255, 255, 255);
    DrawLetter(g, 315, 700, 'R', 2, 255, 255, 255);
    DrawLetter(g, 340, 700, 'O', 2, 255, 255, 255);
    DrawLetter(g, 365, 700, 'Z', 2, 255, 255, 255);
    DrawLetter(g, 390, 700, 'C', 2, 255, 255, 255);
    DrawLetter(g, 415, 700, 'O', 2, 255, 255, 255);

    DrawLetter(g, 50, 750, '.', 3, 255, 0, 0);
    DrawLetter(g, 90, 750, 'P', 2, 255, 0, 0);
    DrawLetter(g, 115, 750, 'E', 2, 255, 0, 0);
    DrawLetter(g, 140, 750, 'R', 2, 255, 0, 0);
    DrawLetter(g, 165, 750, 'F', 2, 255, 0, 0);
    DrawLetter(g, 190, 750, 'E', 2, 255, 0, 0);
    DrawLetter(g, 215, 750, 'C', 2, 255, 0, 0);
    DrawLetter(g, 240, 750, 'T', 2, 255, 0, 0);

    DrawLetter(g, 290, 750, 'O', 2, 255, 255, 255);
    DrawLetter(g, 315, 750, 'B', 2, 255, 255, 255);
    DrawLetter(g, 340, 750, 'U', 2, 255, 255, 255);
    DrawLetter(g, 365, 750, 'M', 2, 255, 255, 255);
    DrawLetter(g, 390, 750, 'N', 2, 255, 255, 255);
    DrawLetter(g, 415, 750, 'E', 2, 255, 255, 255);
    DrawLetter(g, 440, 750, 'M', 2, 255, 255, 255);
    DrawLetter(g, 465, 750, 'E', 2, 255, 255, 255);


    DrawLetter(g, 520, 700, '.', 3, 255, 0, 0);
    DrawLetter(g, 545, 700, 'T', 2, 255, 0, 0);
    DrawLetter(g, 570, 700, 'A', 2, 255, 0, 0);
    DrawLetter(g, 595, 700, 'Y', 2, 255, 0, 0);
    DrawLetter(g, 620, 700, 'L', 2, 255, 0, 0);
    DrawLetter(g, 645, 700, 'O', 2, 255, 0, 0);
    DrawLetter(g, 670, 700, 'R', 2, 255, 0, 0);

    DrawLetter(g, 720, 700, 'C', 2, 255, 255, 255);
    DrawLetter(g, 745, 700, 'A', 2, 255, 255, 255);
    DrawLetter(g, 770, 700, 'R', 2, 255, 255, 255);
    DrawLetter(g, 795, 700, 'L', 2, 255, 255, 255);
    DrawLetter(g, 820, 700, 'O', 2, 255, 255, 255);
    DrawLetter(g, 845, 700, 'S', 2, 255, 255, 255);
    DrawLetter(g, 870, 700, 'S', 2, 255, 255, 255);

    DrawLetter(g, 525, 750, '.', 3, 255, 0, 0);
    DrawLetter(g, 550, 750, 'J', 2, 255, 0, 0);
    DrawLetter(g, 575, 750, 'A', 2, 255, 0, 0);
    DrawLetter(g, 600, 750, 'K', 2, 255, 0, 0);
    DrawLetter(g, 625, 750, 'E', 2, 255, 0, 0);


    DrawLetter(g, 675, 750, 'A', 2, 255, 255, 255);
    DrawLetter(g, 700, 750, 'L', 2, 255, 255, 255);
    DrawLetter(g, 725, 750, 'L', 2, 255, 255, 255);
    DrawLetter(g, 750, 750, 'E', 2, 255, 255, 255);
    DrawLetter(g, 775, 750, 'N', 2, 255, 255, 255);

    DrawLetter(g, 300, 800, '.', 3, 255, 0, 0);
    DrawLetter(g, 350, 800, 'H', 2, 255, 0, 0);
    DrawLetter(g, 375, 800, 'E', 2, 255, 0, 0);
    DrawLetter(g, 400, 800, 'C', 2, 255, 0, 0);
    DrawLetter(g, 425, 800, 'T', 2, 255, 0, 0);
    DrawLetter(g, 450, 800, 'O', 2, 255, 0, 0);
    DrawLetter(g, 475, 800, 'R', 2, 255, 0, 0);

    DrawLetter(g, 525, 800, 'C', 2, 255, 255, 255);
    DrawLetter(g, 550, 800, 'A', 2, 255, 255, 255);
    DrawLetter(g, 575, 800, 'S', 2, 255, 255, 255);
    DrawLetter(g, 600, 800, 'T', 2, 255, 255, 255);
    DrawLetter(g, 625, 800, 'R', 2, 255, 255, 255);
    DrawLetter(g, 650, 800, 'O', 2, 255, 255, 255);

    DrawLetter(g, 200, 900, 'P', 2, 255, 0, 0);
    DrawLetter(g, 225, 900, 'R', 2, 255, 0, 0);
    DrawLetter(g, 250, 900, 'E', 2, 255, 0, 0);
    DrawLetter(g, 275, 900, 'S', 2, 255, 0, 0);
    DrawLetter(g, 300, 900, 'S', 2, 255, 0, 0);

    DrawLetter(g, 350, 900, 'S', 2, 255, 255, 255);
    DrawLetter(g, 375, 900, 'P', 2, 255, 255, 255);
    DrawLetter(g, 400, 900, 'A', 2, 255, 255, 255);
    DrawLetter(g, 425, 900, 'C', 2, 255, 255, 255);
    DrawLetter(g, 450, 900, 'E', 2, 255, 255, 255);

    DrawLetter(g, 500, 900, 'T', 2, 255, 0, 0);
    DrawLetter(g, 525, 900, 'O', 2, 255, 0, 0);

    DrawLetter(g, 575, 900, 'R', 2, 255, 0, 0);
    DrawLetter(g, 600, 900, 'E', 2, 255, 0, 0);
    DrawLetter(g, 625, 900, 'S', 2, 255, 0, 0);
    DrawLetter(g, 650, 900, 'T', 2, 255, 0, 0);
    DrawLetter(g, 675, 900, 'A', 2, 255, 0, 0);
    DrawLetter(g, 700, 900, 'R', 2, 255, 0, 0);
    DrawLetter(g, 725, 900, 'T', 2, 255, 0, 0);

}
