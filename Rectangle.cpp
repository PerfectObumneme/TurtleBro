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
#include "Rectangle.h"
#include <cmath>
Rectangle::Rectangle(){
    p1.x = 10;
    p1.y = 898;

    p2.x = 18;
    p2.y = 900;

    c = BROWN;
}
Rectangle::Rectangle(Point a, Point b){
    p1 = a;
    p2 = b;


}
Rectangle::Rectangle(Point a, Point b, Color clr){
    p1 = a;
    p2 = b;

    c = clr;
}

void Rectangle::setP1(Point p){
    p1 = p;
}
void Rectangle::setP2(Point p){
    p2 = p;
}
void Rectangle::setColor(Color a){
    c = a;
}

void Rectangle::draw(SDL_Plotter& g){
    for (int x = p1.x; x <= p2.x; x++){
        for (int y = p1.y; y <= p2.y; y++){
            g.plotPixel(x, y, c.R, c.G, c.B);
        }
    }
}

void Rectangle::erase(SDL_Plotter& g){
    for (int x = p1.x; x <= p2.x; x++){
        for (int y = p1.y; y <= p2.y; y++){
            g.plotPixel(x, y, 0, 0, 0);
        }
    }
}

void Rectangle::translate(int shiftX, int shiftY){
    p1.x += shiftX;
    p1.y += shiftY;
    p2.x += shiftX;
    p2.y += shiftY;
}
// If you scale by -1 it will flip the image
void Rectangle::scale(int growX, int growY){
    p1.x *= growX;
    p1.y *= growY;
    p2.x *= growX;
    p2.y *= growY;
}

void Rectangle::inverseScale(int shrinkX, int shrinkY){
    p1.x /= shrinkX;
    p1.y /= shrinkY;
    p2.x /= shrinkX;
    p2.y /= shrinkY;
}

void Rectangle::setSpeed(int s){
    speed = s;
}

void Rectangle::moveLR(DIRECTIONS d){
    switch(d){
        case RIGHT: speed = abs(speed);
            translate(speed, 0);
            break;
        case LEFT: speed = speed*-1;
            translate(speed, 0);
            break;
        case UP: translate(0,-speed);
            break;
            case DOWN: translate(0,speed);
            break;
    }
}
void Rectangle::setSpeed_y(int y){
    speed_y = y;

}
void Rectangle::jump(){
      translate(speed,speed_y);

}
void Rectangle::Verticaljump(){
    translate(0,speed_y);
}


