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
#include "line.h"


line::line()
{
    p1.x = 0;
    p1.y = 0;
    p2.x = 1;
    p2.y = 1;
}

line::line(Point a, Point b)
{
    p1 = a;
    p2 = b;
}

bool line::slope(double& m)
{
    bool flag;

    flag = p1.x != p2.x;

    if(flag)
    {
        m = static_cast<double>(p1.y-p2.y)/(p1.x-p2.x);
    }

    return flag;
}

double line::y_inter()
{
    double m;
    slope(m);
    return p1.y - m*p1.x;
}

void line::draw(ostream& output)
{
    // Print y = mx + b
    // Need to find m and b

    double m, b;
    bool hasSlope;

    hasSlope = slope(m);
    if(hasSlope)
    {
        b = y_inter();
        output << "y = " << m << "x + " << b;
    }

    else
    {
        output << "x = " << p1.x;
    }
}

void line::draw(SDL_Plotter& g)
{
    double m, b;
    int y;
    if(slope(m))
    {
        b = y_inter();
        for(double x = min(p1.x, p2.x); x <= max(p1.x, p2.x); x+=0.001)
        {
            y = m*x + b;
            g.plotPixel(x,y,c.R,c.G,c.B);
        }
    }
    else
    {
        for(double y = min(p1.y, p2.y); y <= max(p1.y, p2.y); y+=0.001)
        {
            g.plotPixel(p1.x,y,c.R,c.G,c.B);
        }
    }
}

Point line::getP1()
{
    return p1;
}

Point line::getP2()
{
    return p2;
}

Color line::getColor()
{
    return c;
}

void line::setP1(Point p)
{
    p1 = p;
}

void line::setP2(Point p)
{
    p2 = p;
}

void line::setColor(Color a)
{
    c = a;
}
