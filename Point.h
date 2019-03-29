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

#ifndef Point_h
#define Point_h

struct Point{
    int x, y;

    /*
     * description: creates a point with default values
     * return: none
     * precondition: none
     * postcondition: creates a point object
     */

    Point();

    /*
     * description: creates a point with default values
     * return: none
     * precondition: none
     * postcondition: creates a point object
     */

    Point(int a, int b);
};

#endif /* Point_h */
