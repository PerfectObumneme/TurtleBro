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


#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Point.h"
#include "Color.h"
#include "SDL_Plotter.h"
#include "Constants.h"

const int acc = 1;
struct Rectangle{
    Point p1, p2;
    Color c;
    int speed = 2;
    int speed_y = -10;

    Rectangle();
    Rectangle(Point a, Point b);
    Rectangle(Point a, Point b, Color clr);

    /*
     Precondition: A point exists
     Postcondition: The point remains unchanged
     Return: N/A
     Description: This function sets the first point in the rectangle
     */
    void setP1(Point p);
    /*
     Precondition: A point exists
     Postcondition: The point remains unchanged
     Return: N/A
     Description: The function sets the second point in the rectangle
     */
    void setP2(Point p);
    /*
     Precondition: A color exists
     Postcondition: The color remains unchanged
     Return: N/A
     Description: This function will set the color of a rectangle
     */
    void setColor(Color a);

    /*
     Precondition: An SDL_Plotter variable
     Postcondition: The Plotter variable is passed by
        reference so it could change
     Return: N/A
     Description: This function will draw a rectangle
     */
    void draw(SDL_Plotter& g);

    /*
     Precondition: An SDL_Plotter variable
     Postcondition: Erases a rectangle
     Return: none
     Description: This function will erase a rectangle
     */


    void erase(SDL_Plotter& g);

    /*
     Precondition: the two ints are valid
     Postcondition: shifts a rectangle by an x and y value
     Return: none
     Description: Shifts a rectangle by an x and y value
     */


    void translate(int shiftX, int shiftY);

    /*
     Precondition: the two ints are valid
     Postcondition: multiplies a rectangle by an x and y value
     Return: none
     Description: multiples a rectangle by an x and y value, making it larger
     */


    void scale(int growX, int growY);

        /*
     Precondition: the two ints are valid
     Postcondition: the rectangle is scaled down by an x and y value
     Return: none
     Description: divides a rectangle by an x and y value, making it smaller
     */


    void inverseScale(int shrinkX, int shrinkY);

    /*
     Precondition: the int is valid
     Postcondition: the rectangle's speed is set to the argument
     Return: none
     Description: set's the speed of a rectangle
     */


    void setSpeed(int s);
    /*
     Precondition: moves a rectangle left or right by it's speed
     Postcondition: the direction is valid
     Return: none
     Description: moves the rectangle
     */


    void moveLR(DIRECTIONS d);

      /*
     Precondition: none
     Postcondition: shifts a rectangle up by it's y_speed and left or right by
     it's x speed
     Return: none
     Description: moves the rectangle up and left or right
     */


    void jump();

      /*
     Precondition: none
     Postcondition: shifts a rectangle straight up
     Return: none
     Description: moves the rectangle up
     */

    void Verticaljump();

        /*
     Precondition: the int is valid
     Postcondition: set's the rectangles y speed
     Return: none
     Description: changes a rectangles y speed
     */


    void Updatevelocity();

        /*
     Precondition: the int is valid
     Postcondition: set's the rectangles y speed
     Return: none
     Description: changes a rectangles y speed
     */


    void setSpeed_y(int);
};



#endif // RECTANGLE_H_INCLUDED
