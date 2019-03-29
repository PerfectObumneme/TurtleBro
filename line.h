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

#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include <ostream>
#include "point.h"
#include "SDL_Plotter.h"
#include "color.h"

using namespace std;

class line
{
private:
    Point p1, p2;
    Color c;

    /*
     * description: finds the slope of a line
     * return: boolean
     * precondition: line is valid and a double variable is passed
     * postcondition: edits the double given in the argument to the
     *  value of the slope and returns true if there is a slope, false if not
     */


    bool slope(double&);

     /*
     * description: returns the y-intercept value of the line
     * return: double
     * precondition: the line is valid
     * postcondition: returns y-intercept value
     */

    double y_inter();

public:

    /*
     * description: creates a line with default points
     * return: none
     * precondition: none
     * postcondition: a line object is created
     */


    line();

    /*
     * description: creates a line with custom points
     * return: none
     * precondition: the two points are valid
     * postcondition: a custom line object is created
     */

    line(Point, Point);


    /*
     * description: returns the first point of a line
     * return: point
     * precondition: the line is valid
     * postcondition: returns a point
     */

    Point getP1();

    /*
     * description: returns the second point of a line
     * return: point
     * precondition: the line is valid
     * postcondition: returns a point
     */

    Point getP2();

    /*
     * description: returns the color of a line
     * return: color
     * precondition: the line is valid
     * postcondition: returns a color
     */

    Color getColor();

    /*
     * description: sets the first point of a line to the given point
     * return: none
     * precondition: the point given is valid
     * postcondition: the first point of a line is changed
     */

    void setP1(Point);

     /*
     * description: sets the second point of a line to the given point
     * return: none
     * precondition: the point given is valid
     * postcondition: the second point of a line is changed
     */

    void setP2(Point);

     /*
     * description: sets the color of a line
     * return: none
     * precondition: the line is valid
     * postcondition: the line's color is changed
     */

    void setColor(Color);

     /*
     * description: draws a line to a stream
     * return: none
     * precondition: the line is valid
     * postcondition: the line is drawn
     */

    void draw(ostream&);

    /*
     * description: draws the line to an SDL plotter
     * return: none
     * precondition: the line and SDL plotter are valid
     * postcondition: the line is drawn
     *
     */

    void draw(SDL_Plotter&);

};

#endif // LINE_H_INCLUDED
