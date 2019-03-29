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
#include "outline.h"

Platforms::Platforms(){
    N_Plat[0] = Rectangle(Point(x,y-1), Point(x+350,y),BLUE); // top
    N_Plat[1] = Rectangle(Point(x,y), Point(x+1,y+35),BLUE); // side left
    N_Plat[2] = Rectangle(Point(x,y+35), Point(x+350,y+36),BLUE); // bottom
    N_Plat[3] = Rectangle(Point(x+349,y), Point(x+350,y+35),BLUE); // side right


}

 Platforms::Platforms(int startX, int startY){
    N_Plat[0] = Rectangle(Point(startX+x,startY+y-1), Point(startX+x+350,startY+y),BLUE); // top
    N_Plat[1] = Rectangle(Point(startX+x,startY+y), Point(startX+x+1,startY+y+35),BLUE); // side left
    N_Plat[2] = Rectangle(Point(startX+x,startY+y+35), Point(startX+x+350,startY+y+36),BLUE); // bottom
    N_Plat[3] = Rectangle(Point(startX+x+349,startY+y), Point(startX+x+350,startY+y+35),BLUE); // side right


 }

void Platforms::drawPlatform(SDL_Plotter& g, int n, int startX, int startY){
    for(int i = 0; i < n; i++){
        N_Plat[i].translate(startX, startY);
        N_Plat[i].draw(g);
        N_Plat[i].translate(-startX, -startY);
    }

}

Platforms::Platforms(int startX, int startY, int z){
    M_Plat[0] = Rectangle(Point(startX+x, startY+y-1), Point(startX+x+600,startY+y),BLUE); // TOP
    M_Plat[1] = Rectangle(Point(startX+x, startY+y), Point(startX+x+1,startY+y+35),BLUE); // SIDE LEFT
    M_Plat[2] = Rectangle(Point(startX+x, startY+y+35), Point(startX+x+600,startY+y+36),BLUE); // BOTTOM
    M_Plat[3] = Rectangle(Point(startX+x+599, startY+y), Point(startX+x+600,startY+y+35),BLUE); //RIGHT
    int shh = z;
}
