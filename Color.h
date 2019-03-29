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

#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

struct Color{

    int R, G, B;
         /*
     * description: creates a color object
     * return: none
     * precondition: none
     * postcondition: creates a color object with default values of zero
     */

    Color (){
        R= G= B= 0;
    }
      /*
     * description: creates a custom color object
     * return: none
     * precondition: the three integers are valid
     * postcondition: creates a color object with custom values
     */

    Color (int r, int g, int b){
        R= r;
        G= g;
        B= b;
    }

    /*
     Precondition: A color c exists
     Postcondition: The color remains unchanged
     Return: N/A
     Description: This function will set the color of an object.
     */
    void setColor(Color c){
        R= c.R;
        G= c.G;
        B= c.B;
    }
};

const Color BLACK(0, 0, 0);
const Color RED(255, 0, 0);
const Color GREEN(0, 255, 0);
const Color BLUE(0, 0, 255);
const Color PURPLE(180, 0, 255);
const Color BROWN(110, 90, 60);
const Color SKIN(210, 160, 130);
const Color GREY(20, 20, 20);
const Color LIGHTGREEN(150, 255, 150);
const Color PINK(255, 150, 150);
const Color WHITEST(255, 255, 255);

#endif // COLOR_H_INCLUDED
