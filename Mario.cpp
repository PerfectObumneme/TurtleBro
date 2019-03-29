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
#include "Mario.h"


Player::Player(){
    aR[0] = Rectangle(Point(x-2, y-35), Point(x+24, y), BLACK);
    aR[1] = Rectangle(Point(x, y-2), Point(x+8, y), BROWN);
    aR[2] = Rectangle(Point(x+2, y-4), Point(x+8, y-2), BROWN);
    aR[3] = Rectangle(Point(x+16, y-2), Point(x+24, y), BROWN);
    aR[4] = Rectangle(Point(x+16, y-4), Point(x+22, y-2), BROWN);
    aR[5] = Rectangle(Point(x+4, y-8), Point(x+10, y-4), BLUE);
    aR[6] = Rectangle(Point(x+6, y-10), Point(x+10, y-8), BLUE);
    aR[7] = Rectangle(Point(x+14, y-8), Point(x+20, y-4), BLUE);
    aR[8] = Rectangle(Point(x+14, y-10), Point(x+18, y-8), BLUE);
    aR[9] = Rectangle(Point(x+8, y-18), Point(x+10, y-12), BLUE);
    aR[10] = Rectangle(Point(x+14, y-18), Point(x+16, y-12), BLUE);
    aR[11] = Rectangle(Point(x+10, y-14), Point(x+14, y-6), BLUE);
    aR[12] = Rectangle(Point(x+6, y-12), Point(x+10, y-10), PURPLE);
    aR[13] = Rectangle(Point(x+14, y-12), Point(x+18, y-10), PURPLE);
    aR[14] = Rectangle(Point(x, y-10), Point(x+6, y-8), SKIN);
    aR[15] = Rectangle(Point(x, y-12), Point(x+4, y-10), SKIN);
    aR[16] = Rectangle(Point(x+18, y-10), Point(x+24, y-8), SKIN);
    aR[17] = Rectangle(Point(x+20, y-12), Point(x+24, y-10), SKIN);
    aR[18] = Rectangle(Point(x+2, y-16), Point(x+4, y-12), RED);
    aR[19] = Rectangle(Point(x+4, y-18), Point(x+8, y-12), RED);
    aR[20] = Rectangle(Point(x+10, y-18), Point(x+14, y-14), RED);
    aR[21] = Rectangle(Point(x+16, y-18), Point(x+20, y-12), RED);
    aR[22] = Rectangle(Point(x+20, y-16), Point(x+22, y-12), RED);
    aR[23] = Rectangle(Point(x+6, y-20), Point(x+18, y-18), SKIN);
    aR[24] = Rectangle(Point(x+6, y-22), Point(x+14, y-20), SKIN);
    aR[25] = Rectangle(Point(x+4, y-26), Point(x+6, y-22), SKIN);
    aR[26] = Rectangle(Point(x+8, y-26), Point(x+10, y-24), SKIN);
    aR[27] = Rectangle(Point(x+10, y-26), Point(x+16, y-22), SKIN);
    aR[28] = Rectangle(Point(x+10, y-28), Point(x+14, y-26), SKIN);
    aR[29] = Rectangle(Point(x+18, y-24), Point(x+22, y-22), SKIN);
    aR[30] = Rectangle(Point(x+16, y-26), Point(x+20, y-24), SKIN);
    aR[31] = Rectangle(Point(x+16, y-28), Point(x+20, y-26), SKIN);
    aR[32] = Rectangle(Point(x+10, y-30), Point(x+20, y-28), SKIN);
    aR[33] = Rectangle(Point(x+2, y-22), Point(x+6, y-20), BROWN);
    aR[34] = Rectangle(Point(x+2, y-28), Point(x+4, y-22), BROWN);
    aR[35] = Rectangle(Point(x+6, y-24), Point(x+10, y-22), BROWN);
    aR[36] = Rectangle(Point(x+6, y-26), Point(x+8, y-24), BROWN);
    aR[37] = Rectangle(Point(x+4, y-28), Point(x+10, y-26), BROWN);
    aR[38] = Rectangle(Point(x+2, y-30), Point(x+10, y-28), BROWN);
    aR[39] = Rectangle(Point(x+2, y-34), Point (x+24, y-30), RED);
    aR[40] = Rectangle(Point(x+2, y-35), Point(x+16, y-34), RED);
    aR[41] = Rectangle(Point(x+14, y-28), Point(x+16, y-26), BLACK);
    aR[42] = Rectangle(Point(x+16, y-24), Point(x+18, y-22), BLACK);
    aR[43] = Rectangle(Point(x+14, y-22), Point(x+20, y-20), BLACK);
}

Player::Player(int n, Rectangle a[100], int startX, int startY){
    Point p1;
    x = startX;
    y = startY;

    for (int i = 0; i < n; i++){
        aR[i] = a[i];
    }
}

void Player::drawPlayer(SDL_Plotter& g, int n, int startX, int startY, int szX, int szY){
    for (int i = 0; i < n; i++){
        aR[i].scale(szX, szY);
        aR[i].translate(startX, startY);
        aR[i].draw(g);
        aR[i].translate(-startX, -startY);
        aR[i].inverseScale(szX, szY);
    }
}

void Player::movePlayer(DIRECTIONS d, int n, int sp){
    for (int i = 0; i < n; i++){
        aR[i].setSpeed(sp);
        aR[i].moveLR(d);
    }
}
void Player::drawNewPlayer(SDL_Plotter& g, int n, int startX, int startY, int szX, int szY, Color clr){
    for (int i = 17; i <=  22; i++){
        aR[i].setColor(clr);
    }
    for (int i = 39; i <= 40; i++){
        aR[i].setColor(clr);
    }
    for (int i = 0; i < n; i++){
        aR[i].scale(szX, szY);
        aR[i].translate(startX, startY);
        aR[i].draw(g);
        aR[i].translate(-startX, -startY);
        aR[i].inverseScale(szX, szY);
    }
}
void Player::setToStart(int startX, int startY, int n){
    for (int i = 0; i < n; i++){
        x = startX;
        y = startY;
    }
}

bool Player::colTop(int y_top, int x1, int x2){
    bool check = false;
    if(aR[0].p2.y == y_top && aR[0].p1.x >= x1 && aR[0].p2.x <=x2){
        check = true;
        for(int i = 0; i < 78; i++){
            aR[i].setSpeed_y(0);
            aR[i].setSpeed(0);
        }
    }
    return check;

}


bool Player::colBot(int y_bot, int x1, int x2){
    bool check = false;
    if(aR[0].p1.y == y_bot && aR[0].p1.x >= x1 && aR[0].p2.x <=x2){
        check = true;
        for(int i = 0; i < 78; i++){
            aR[i].setSpeed_y(5);
            aR[i].setSpeed(0);
        }
    }
    return check;

}

bool Player::colLeft(int left_x, int y1, int y2){
    bool check = false;
    if((aR[0].p2.x == left_x) && ((aR[0].p1.y >= y1 && aR[0].p1.y <= y2) || (aR[0].p2.y >= y1 && aR[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            aR[i].setSpeed_y(5);
            aR[i].setSpeed(0);
        }
    }
    return check;

}

bool Player::colRight(int right_x, int y1, int y2){
    bool check = false;
    if((aR[0].p1.x == right_x) && ((aR[0].p1.y >= y1 && aR[0].p1.y <= y2) || (aR[0].p2.y >= y1 && aR[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            aR[i].setSpeed_y(5);
            aR[i].setSpeed(0);
        }
    }
    return check;

}

bool Player::colLeftPipe(int rightx1, int rightX2, int y1, int y2){
    bool check = false;
    if((aR[0].p1.x <= rightx1 && aR[0].p1.x >= rightX2) && ((aR[0].p1.y >= y1 && aR[0].p1.y <= y2) || (aR[0].p2.y >= y1 && aR[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            aR[i].setSpeed_y(5);
            aR[i].setSpeed(0);
        }
    }
    return check;


}

bool Player::colRIGHTPipe(int LeftX1, int LeftX2, int y1, int y2){
    bool check = false;
    if((aR[0].p2.x >= LeftX1 && aR[0].p2.x <= LeftX2) && ((aR[0].p1.y >= y1 && aR[0].p1.y <= y2) || (aR[0].p2.y >= y1 && aR[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            aR[i].setSpeed_y(5);
            aR[i].setSpeed(0);
        }
    }
    return check;

}

        bool Player::killPlayer(Enemies Turtle){
                bool check = false;
            if(aR[0].p2.x == Turtle.enemy[0].p1.x &&
                ((Turtle.enemy[0].p1.y <= aR[0].p2.y && Turtle.enemy[0].p1.y >= aR[0].p1.y)
            || (Turtle.enemy[0].p2.y <= aR[0].p2.y && Turtle.enemy[0].p2.y >= aR[0].p1.y))){
                check = true;

            }

                return check;
        }

        bool Player::killPlayerLeft(Enemies Turtle){
            bool check = false;
            if(aR[0].p1.x == Turtle.enemy[0].p2.x &&
                ((Turtle.enemy[0].p1.y >= aR[0].p1.y && Turtle.enemy[0].p1.y <= aR[0].p2.y)
            || (Turtle.enemy[0].p2.y >= aR[0].p1.y && Turtle.enemy[0].p2.y <= aR[0].p2.y))){
                check = true;

        }
        return check;
        }
