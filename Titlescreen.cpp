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

#include "Titlescreen.h"

void Title( SDL_Plotter&g){

    drawRect(g, 0, 999, 0, 999, 100, 70, 50);


    drawRect(g, 0, 50, 0, 999, 0, 0, 0);
    drawRect(g, 949, 999, 0, 999, 0, 0, 0);
    drawRect(g, 0, 999, 0, 50, 0,0,0);
    drawRect(g, 0, 999, 949, 999,0,0,0);


    drawRect(g, 200, 300, 200, 300, 0, 0, 0);
    drawRect(g, 200, 300, 699, 799, 0, 0, 0);

    drawRect(g, 699, 799, 200, 300, 0, 0, 0);
    drawRect(g, 699, 799 ,699,799, 0, 0, 0);


    drawRect(g, 241, 250, 0, 999, 0, 0, 0);
    drawRect(g, 0, 999, 241, 250, 0, 0, 0);
    drawRect(g, 0, 999, 739, 748, 0, 0, 0);
    drawRect(g, 739, 748, 0, 999, 0, 0, 0);

    //Huge black box

    drawRect(g, 350, 650, 100, 899, 0, 0, 0);

    /*
     drawRect(g, 50, 100, 50, 949, 205, 205, 205);
     drawRect(g, 899, 949, 50,949, 205, 205, 205);
     drawRect(g, 100, 949, 50, 100,205, 205, 205);
     drawRect(g, 100, 949, 899, 949,205,205, 205);
     */

    // This displays turtle bro as the title screen

    DrawLetter(g, 150, 400, 'T' , 4, 255, 0, 0);
    DrawLetter(g, 202, 400, 'U' , 4, 255, 0, 0);
    DrawLetter(g, 252, 400, 'R' , 4, 255, 0, 0);
    DrawLetter(g, 302, 400, 'T' , 4, 255, 0, 0);
    DrawLetter(g, 352, 400, 'L' , 4, 255, 0, 0);
    DrawLetter(g, 402, 400, 'E' , 4, 255, 0, 0);
    DrawLetter(g, 452, 400, 'B' , 4, 255, 255, 255);
    DrawLetter(g, 502, 400, 'R' , 4, 255, 255, 255);
    DrawLetter(g, 552, 400, 'O' , 4, 255, 255, 255);

    DrawLetter(g, 652, 400, '2' , 4, 255, 0, 0);
    DrawLetter(g, 702, 400, '0' , 4, 255, 0, 0);
    DrawLetter(g, 752, 400, '1' , 4, 255, 0, 0);
    DrawLetter(g, 802, 400, '8' , 4, 255, 0, 0);


    //The fate twist
    DrawLetter(g, 202, 475, 'T' , 3, 255, 0, 0);
    DrawLetter(g, 240, 475, 'H' , 3, 255, 0, 0);
    DrawLetter(g, 280, 475, 'E' , 3, 255, 0, 0);

    DrawLetter(g, 340, 475, 'F' , 3, 255, 0, 0);
    DrawLetter(g, 380, 475, 'A' , 3, 255, 0, 0);
    DrawLetter(g, 420, 475, 'T' , 3, 255, 0, 0);
    DrawLetter(g, 460, 475, 'E' , 3, 255, 0, 0);

    DrawLetter(g, 520, 475, 'T' , 3, 255, 0, 0);
    DrawLetter(g, 560, 475, 'W' , 3, 255, 0, 0);
    DrawLetter(g, 600, 475, 'I' , 3, 255, 0, 0);
    DrawLetter(g, 640, 475, 'S' , 3, 255, 0, 0);
    DrawLetter(g, 680, 475, 'T' , 3, 255, 0, 0);

    DrawLetter(g, 250, 600, 'P' , 2, 255, 0, 0);
    DrawLetter(g, 275, 600, 'R' , 2, 255, 0, 0);
    DrawLetter(g, 300, 600, 'E' , 2, 255, 0, 0);
    DrawLetter(g, 325, 600, 'S' , 2, 255, 0, 0);
    DrawLetter(g, 350, 600, 'S' , 2, 255, 0, 0);

    DrawLetter(g, 400, 600, 'E' , 2, 255, 255, 255);
    DrawLetter(g, 425, 600, 'N' , 2, 255, 255, 255);
    DrawLetter(g, 450, 600, 'T' , 2, 255, 255, 255);
    DrawLetter(g, 475, 600, 'E' , 2, 255, 255, 255);
    DrawLetter(g, 500, 600, 'R' , 2, 255, 255, 255);


    DrawLetter(g, 550, 600, 'T' , 2, 255, 0, 0);
    DrawLetter(g, 575, 600, 'O' , 2, 255, 0, 0);

    DrawLetter(g, 625, 600, 'S' , 2, 255, 0, 0);
    DrawLetter(g, 650, 600, 'T' , 2, 255, 0, 0);
    DrawLetter(g, 675, 600, 'A' , 2, 255, 0, 0);
    DrawLetter(g, 700, 600, 'R' , 2, 255, 0, 0);
    DrawLetter(g, 725, 600, 'T' , 2, 255, 0, 0);
}
