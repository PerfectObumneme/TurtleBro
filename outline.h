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

#ifndef OUTLINE_H_INCLUDED
#define OUTLINE_H_INCLUDED
#include "Rectangle.h"
class Platforms{
private:
    int x = 0, y = 0;

public:

    /*
     * description: Platforms is a default constructor
     * this will allow us to outline our platforms to
     * make bounds for each rectangle.
     * This is made by several arrays
     * return: nothing. This is a default constructor
     * precondition: the user must know the points they
     * would like to outline
     * postcondition: there will be an outline with
     * any color desired for from the user. It will
     * be used to create bounds.
     */

    Platforms();

    /*
     * description: This Platforms is a custom constructor
     * this will allow us to outline our platforms to
     * make bounds for each rectangle. wherever needed.
     * This is made by several arrays
     * return: nothing. This is a custom constructor, but it
     * will make an invisible box to bound our characters.
     * precondition: the user must know the points they
     * would like to outline
     * postcondition: there will be an outline with
     * any color desired for from the user. It will
     * be used to create bounds.
     */

    Platforms(int, int);

    /*
     * description: This Platforms is a custom constructor
     * this will allow us to outline our platforms to
     * make bounds for each rectangle. wherever needed.
     * This is made by several arrays
     * return: nothing. This is a custom constructor, but it
     * will make an invisible box to bound our characters.
     * precondition: the user must know the points they
     * would like to outline. The dummy variable does not
     * do anything (our last int)
     * postcondition: there will be an outline with
     * any color desired for from the user. It will
     * be used to create bounds SPECIFICALLY
     * for the middle platform we have
     */

    Platforms(int, int, int);

    /*
     * description: this function is used to create the header
     * in the game. This will plot Turtle and Score on the
     * top of our screen while the game runs
     * return: void
     * precondition: nothing. The user must only give the
     * SDL plotter to the function so it is placed on top
     * postcondition: using the SDL Plotter, a turtle name will be
     * plotted to the screen along with a score that will keep as
     * the game continues
     */

    Rectangle N_Plat[4];

    /*
     * description: this function is used to create the array
     * of size 4 for a specific platform. This array is created
     * by the rectangle function we have.
     * return: nothing. This just collects points in an array by
     * using rectangle function
     * precondition: nothing. The user must only give the
     * array the points that need to be covered by the rectangle
     * function. This was made specifically for each platform
     * excluding the middle platform
     * postcondition: each point of each platform excluding the
     * middle platform will have its ranges collected from
     * the rectangle range.
     */

    Rectangle M_Plat[4];

    /*
     * description: this function is used to create the array
     * of size 4 for the middle platform. This array is created
     * by the rectangle function we have.
     * return: nothing. This just collects points in an array by
     * using rectangle function
     * precondition: nothing. The user must only give the
     * array the points that need to be covered by the rectangle
     * function. This was made specifically for the middle
     * platform
     * postcondition: each point of the middle platform
     * will have its ranges collected from
     * the rectangle range.
     */

    void drawPlatform(SDL_Plotter& g, int n, int startX, int startY);



};


#endif // OUTLINE_H_INCLUDED
