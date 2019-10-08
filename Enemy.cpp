/*
Author:  Perfect Obumneme, 
This program run the game of Mario
where the turtle is trying to defeat the Marios.
Due Date: 12/3/2018
Date Created: 10/30/2018
Date Last Modified: 12/3/2018
*/

#include "Enemy.h"
#include "Point.h"
Enemies::Enemies(){
    enemy[0] = Rectangle(Point(x, y-2), Point(x+1, y), GREY);
    enemy[1] = Rectangle(Point(x+1, y-1), Point(x+5, y), GREY);
    enemy[2] = Rectangle(Point(x+5, y-2), Point(x+6, y), GREY);
    enemy[3] = Rectangle(Point(x+7, y-4), Point(x+8, y), GREY);
    enemy[4] = Rectangle(Point(x+8, y-1), Point(x+13, y), GREY);
    enemy[5] = Rectangle(Point(x+13, y-2), Point(x+14, y), GREY);
    enemy[6] = Rectangle(Point(x+1, y-3), Point(x+7, y-2), GREY);
    enemy[7] = Rectangle(Point(x, y-6), Point(x+1, y-3), GREY);
    enemy[8] = Rectangle(Point(x+1, y-6), Point(x+7, y-5), GREY);
    enemy[9] = Rectangle(Point(x+7, y-7), Point(x+8, y-5), GREY);
    enemy[10] = Rectangle(Point(x+8, y-4), Point(x+10, y-3), GREY);
    enemy[11] = Rectangle(Point(x+9, y-5), Point(x+11, y-4), GREY);
    enemy[12] = Rectangle(Point(x+11, y-4), Point(x+12, y-3), GREY);
    enemy[13] = Rectangle(Point(x+12, y-3), Point(x+13, y-2), GREY);
    enemy[14] = Rectangle(Point(x+10, y-7), Point(x+11, y-5), GREY);
    enemy[15] = Rectangle(Point(x, y-13), Point(x+1, y-7), GREY);
    enemy[16] = Rectangle(Point(x+1, y-15), Point(x+2, y-13), GREY);
    enemy[17] = Rectangle(Point(x+8, y-12), Point(x+9, y-7), GREY);
    enemy[18] = Rectangle(Point(x+10, y-8), Point(x+12, y-7), GREY);
    enemy[19] = Rectangle(Point(x+10, y-12), Point(x+11, y-8), GREY);
    enemy[20] = Rectangle(Point(x+12, y-9), Point(x+13, y-8), GREY);
    enemy[21] = Rectangle(Point(x+12, y-10), Point(x+14, y-9), GREY);
    enemy[22] = Rectangle(Point(x+2, y-16), Point(x+3, y-15), GREY);
    enemy[23] = Rectangle(Point(x+3, y-17), Point(x+6, y-16), GREY);
    enemy[24] = Rectangle(Point(x+6, y-16), Point(x+8, y-15), GREY);
    enemy[25] = Rectangle(Point(x+7, y-15), Point(x+8, y-12), GREY);
    enemy[26] = Rectangle(Point(x+9, y-15), Point(x+10, y-12), GREY);
    enemy[27] = Rectangle(Point(x+14, y-11), Point(x+15, y-10), GREY);
    enemy[28] = Rectangle(Point(x+13, y-12), Point(x+15, y-11), GREY);
    enemy[29] = Rectangle(Point(x+11, y-15), Point(x+12, y-13), GREY);
    enemy[30] = Rectangle(Point(x+12, y-13), Point(x+13, y-12), GREY);
    enemy[31] = Rectangle(Point(x+11, y-16), Point(x+13, y-15), GREY);
    enemy[32] = Rectangle(Point(x+13, y-15), Point(x+14, y-14), GREY);
    enemy[33] = Rectangle(Point(x+14, y-14), Point(x+16, y-13), GREY);
    enemy[34] = Rectangle(Point(x+15, y-18), Point(x+16, y-14), GREY);
    enemy[35] = Rectangle(Point(x+13, y-18), Point(x+14, y-17), GREY);
    enemy[36] = Rectangle(Point(x+8, y-17), Point(x+9, y-15), GREY);
    enemy[37] = Rectangle(Point(x+7, y-21), Point(x+8, y-17), GREY);
    enemy[38] = Rectangle(Point(x+8, y-22), Point(x+9, y-21), GREY);
    enemy[39] = Rectangle(Point(x+9, y-23), Point(x+10, y-22), GREY);
    enemy[40] = Rectangle(Point(x+10, y-25), Point(x+11, y-20), GREY);
    enemy[41] = Rectangle(Point(x+11, y-26), Point(x+13, y-25), GREY);
    enemy[42] = Rectangle(Point(x+13, y-25), Point(x+14, y-23), GREY);
    enemy[43] = Rectangle(Point(x+14, y-23), Point(x+15, y-18), GREY);
    enemy[44] = Rectangle(Point(x+13, y-22), Point(x+14, y-19), BLACK);
    enemy[45] = Rectangle(Point(x+1, y-2), Point(x+5, y-1), PINK);
    enemy[46] = Rectangle(Point(x+10, y-4), Point(x+11, y-3), PINK);
    enemy[47] = Rectangle(Point(x+8, y-3), Point(x+12, y-2), PINK);
    enemy[48] = Rectangle(Point(x+8, y-2), Point(x+13, y-1), PINK);
    enemy[49] = Rectangle(Point(x+8, y-2), Point(x+13, y-1), PINK);
    enemy[50] = Rectangle(Point(x+8, y-21), Point(x+9, y-18), PINK);
    enemy[51] = Rectangle(Point(x+9, y-22), Point(x+10, y-18), PINK);
    enemy[52] = Rectangle(Point(x+10, y-20), Point(x+11, y-18), PINK);
    enemy[53] = Rectangle(Point(x+8, y-18), Point(x+12, y-17), PINK);
    enemy[54] = Rectangle(Point(x+9, y-17), Point(x+13, y-16), PINK);
    enemy[55] = Rectangle(Point(x+9, y-16), Point(x+11, y-15), PINK);
    enemy[56] = Rectangle(Point(x+10, y-15), Point(x+11, y-13), PINK);
    enemy[57] = Rectangle(Point(x+10, y-13), Point(x+12, y-12), PINK);
    enemy[58] = Rectangle(Point(x+11, y-12), Point(x+13, y-11), PINK);
    enemy[59] = Rectangle(Point(x+11, y-11), Point(x+14, y-10), PINK);
    enemy[60] = Rectangle(Point(x+11, y-10), Point(x+12, y-8), PINK);
    enemy[61] = Rectangle(Point(x+13, y-17), Point(x+14, y-15), PINK);
    enemy[62] = Rectangle(Point(x+14, y-18), Point(x+15, y-14), PINK);
    enemy[63] = Rectangle(Point(x+1, y-5), Point(x+7, y-3), LIGHTGREEN);
    enemy[64] = Rectangle(Point(x+7, y-5), Point(x+9, y-4), LIGHTGREEN);
    enemy[65] = Rectangle(Point(x+8, y-7), Point(x+10, y-5), LIGHTGREEN);
    enemy[66] = Rectangle(Point(x+9, y-12), Point(x+10, y-7), LIGHTGREEN);
    enemy[67] = Rectangle(Point(x+8, y-15), Point(x+9, y-12), LIGHTGREEN);
    enemy[68] = Rectangle(Point(x+1, y-7), Point(x+7, y-6), GREEN);
    enemy[69] = Rectangle(Point(x+1, y-12), Point(x+8, y-7), GREEN);
    enemy[70] = Rectangle(Point(x+1, y-13), Point(x+7, y-12), GREEN);
    enemy[71] = Rectangle(Point(x+2, y-15), Point(x+7, y-13), GREEN);
    enemy[72] = Rectangle(Point(x+3, y-16), Point(x+6, y-15), GREEN);
    enemy[73] = Rectangle(Point(x+11, y-25), Point(x+12, y-18), WHITEST);
    enemy[74] = Rectangle(Point(x+12, y-25), Point(x+13, y-17), WHITEST);
    enemy[75] = Rectangle(Point(x+13, y-23), Point(x+14, y-22), WHITEST);
    enemy[76] = Rectangle(Point(x+13, y-19), Point(x+14, y-18), WHITEST);
    enemy[77] = Rectangle(Point(x, y-26), Point(x+16, y), BLACK);
    //hitbox = Rectangle(Point(x, y-26), Point(x+16, y), WHITEST);
}

Enemies::Enemies(int startX, int startY){
    enemy[0] = Rectangle(Point(startX+x, startY+y-25), Point(startX+x+14, startY+y),BLACK);
    enemy[1] = Rectangle(Point(startX+x, startY+y-26), Point(startX+x+15, startY+y), BLACK);
    enemy[2] = Rectangle(Point(startX+x+1, startY+y-1), Point(startX+x+5, startY+y), GREY);
    enemy[3] = Rectangle(Point(startX+x+5, startY+y-2), Point(startX+x+6, startY+y), GREY);
    enemy[4] = Rectangle(Point(startX+x+7, startY+y-4), Point(startX+x+8, startY+y), GREY);
    enemy[5] = Rectangle(Point(startX+x+8, startY+y-1), Point(startX+x+13, startY+y), GREY);
    enemy[6] = Rectangle(Point(startX+x+13, startY+y-2), Point(startX+x+14, startY+y), GREY);
    enemy[7] = Rectangle(Point(startX+x+1, startY+y-3), Point(startX+x+7, startY+y-2), GREY);
    enemy[8] = Rectangle(Point(startX+x, startY+y-6), Point(startX+x+1, startY+y-3), GREY);
    enemy[9] = Rectangle(Point(startX+x+1, startY+y-6), Point(startX+x+7, startY+y-5), GREY);
    enemy[10] = Rectangle(Point(startX+x+7, startY+y-7), Point(startX+x+8, startY+y-5), GREY);
    enemy[11] = Rectangle(Point(startX+x+8, startY+y-4), Point(startX+x+10, startY+y-3), GREY);
    enemy[12] = Rectangle(Point(startX+x+9, startY+y-5), Point(startX+x+11, startY+y-4), GREY);
    enemy[13] = Rectangle(Point(startX+x+11, startY+y-4), Point(startX+x+12, startY+y-3), GREY);
    enemy[14] = Rectangle(Point(startX+x+12, startY+y-3), Point(startX+x+13, startY+y-2), GREY);
    enemy[15] = Rectangle(Point(startX+x+10, startY+y-7), Point(startX+x+11, startY+y-5), GREY);
    enemy[16] = Rectangle(Point(startX+x, startY+y-13), Point(startX+x+1, startY+y-7), GREY);
    enemy[17] = Rectangle(Point(startX+x+1, startY+y-15), Point(startX+x+2, startY+y-13), GREY);
    enemy[18] = Rectangle(Point(startX+x+8, startY+y-12), Point(startX+x+9, startY+y-7), GREY);
    enemy[19] = Rectangle(Point(startX+x+10, startY+y-8), Point(startX+x+12, startY+y-7), GREY);
    enemy[20] = Rectangle(Point(startX+x+10, startY+y-12), Point(startX+x+11, startY+y-8), GREY);
    enemy[21] = Rectangle(Point(startX+x+12, startY+y-9), Point(startX+x+13, startY+y-8), GREY);
    enemy[22] = Rectangle(Point(startX+x+12, startY+y-10), Point(startX+x+14, startY+y-9), GREY);
    enemy[23] = Rectangle(Point(startX+x+2, startY+y-16), Point(startX+x+3, startY+y-15), GREY);
    enemy[24] = Rectangle(Point(startX+x+3, startY+y-17), Point(startX+x+6, startY+y-16), GREY);
    enemy[25] = Rectangle(Point(startX+x+6, startY+y-16), Point(startX+x+8, startY+y-15), GREY);
    enemy[26] = Rectangle(Point(startX+x+7, startY+y-15), Point(startX+x+8, startY+y-12), GREY);
    enemy[27] = Rectangle(Point(startX+x+9, startY+y-15), Point(startX+x+10, startY+y-12), GREY);
    enemy[28] = Rectangle(Point(startX+x+14, startY+y-11), Point(startX+x+15, startY+y-10), GREY);
    enemy[29] = Rectangle(Point(startX+x+13,startY+y-12), Point(startX+x+15, startY+y-11), GREY);
    enemy[30] = Rectangle(Point(startX+x+11, startY+y-15), Point(startX+x+12, startY+y-13), GREY);
    enemy[31] = Rectangle(Point(startX+x+12, startY+y-13), Point(startX+x+13, startY+y-12), GREY);
    enemy[32] = Rectangle(Point(startX+x+11, startY+y-16), Point(startX+x+13, startY+y-15), GREY);
    enemy[33] = Rectangle(Point(startX+x+13, startY+y-15), Point(startX+x+14, startY+y-14), GREY);
    enemy[34] = Rectangle(Point(startX+x+14, startY+y-14), Point(startX+x+16, startY+y-13), GREY);
    enemy[35] = Rectangle(Point(startX+x+15, startY+y-18), Point(startX+x+16, startY+y-14), GREY);
    enemy[36] = Rectangle(Point(startX+x+13, startY+y-18), Point(startX+x+14, startY+y-17), GREY);
    enemy[37] = Rectangle(Point(startX+x+8, startY+y-17), Point(startX+x+9, startY+y-15), GREY);
    enemy[38] = Rectangle(Point(startX+x+7, startY+y-21), Point(startX+x+8, startY+y-17), GREY);
    enemy[39] = Rectangle(Point(startX+x+8, startY+y-22), Point(startX+x+9, startY+y-21), GREY);
    enemy[40] = Rectangle(Point(startX+x+9, startY+y-23), Point(startX+x+10, startY+y-22), GREY);
    enemy[41] = Rectangle(Point(startX+x+10, startY+y-25), Point(startX+x+11, startY+y-20), GREY);
    enemy[42] = Rectangle(Point(startX+x+11, startY+y-26), Point(startX+x+13, startY+y-25), GREY);
    enemy[43] = Rectangle(Point(startX+x+13, startY+y-25), Point(startX+x+14, startY+y-23), GREY);
    enemy[44] = Rectangle(Point(startX+x+14, startY+y-23), Point(startX+x+15, startY+y-18), GREY);
    enemy[45] = Rectangle(Point(startX+x+13, startY+y-22), Point(startX+x+14, startY+y-19), BLACK);
    enemy[46] = Rectangle(Point(startX+x+1, startY+y-2), Point(startX+x+5, startY+y-1), PINK);
    enemy[47] = Rectangle(Point(startX+x+10, startY+y-4), Point(startX+x+11, startY+y-3), PINK);
    enemy[48] = Rectangle(Point(startX+x+8, startY+y-3), Point(startX+x+12, startY+y-2), PINK);
    enemy[49] = Rectangle(Point(startX+x+8, startY+y-2), Point(startX+x+13, startY+y-1), PINK);
    enemy[50] = Rectangle(Point(startX+x+8, startY+y-2), Point(startX+x+13, startY+y-1), PINK);
    enemy[51] = Rectangle(Point(startX+x+8, startY+y-21), Point(startX+x+9, startY+y-18), PINK);
    enemy[52] = Rectangle(Point(startX+x+9, startY+y-22), Point(startX+x+10, startY+y-18), PINK);
    enemy[53] = Rectangle(Point(startX+x+10, startY+y-20), Point(startX+x+11, startY+y-18), PINK);
    enemy[54] = Rectangle(Point(startX+x+8, startY+y-18), Point(startX+x+12, startY+y-17), PINK);
    enemy[55] = Rectangle(Point(startX+x+9, startY+y-17), Point(startX+x+13, startY+y-16), PINK);
    enemy[56] = Rectangle(Point(startX+x+9, startY+y-16), Point(startX+x+11, startY+y-15), PINK);
    enemy[57] = Rectangle(Point(startX+x+10, startY+y-15), Point(startX+x+11, startY+y-13), PINK);
    enemy[58] = Rectangle(Point(startX+x+10, startY+y-13), Point(startX+x+12, startY+y-12), PINK);
    enemy[59] = Rectangle(Point(startX+x+11, startY+y-12), Point(startX+x+13, startY+y-11), PINK);
    enemy[60] = Rectangle(Point(startX+x+11, startY+y-11), Point(startX+x+14, startY+y-10), PINK);
    enemy[61] = Rectangle(Point(startX+x+11, startY+y-10), Point(startX+x+12, startY+y-8), PINK);
    enemy[62] = Rectangle(Point(startX+x+13, startY+y-17), Point(startX+x+14, startY+y-15), PINK);
    enemy[63] = Rectangle(Point(startX+x+14, startY+y-18), Point(startX+x+15, startY+y-14), PINK);
    enemy[64] = Rectangle(Point(startX+x+1, startY+y-5), Point(startX+x+7, startY+y-3), LIGHTGREEN);
    enemy[65] = Rectangle(Point(startX+x+7, startY+y-5), Point(startX+x+9, startY+y-4), LIGHTGREEN);
    enemy[66] = Rectangle(Point(startX+x+8, startY+y-7), Point(startX+x+10, startY+y-5), LIGHTGREEN);
    enemy[67] = Rectangle(Point(startX+x+9, startY+y-12), Point(startX+x+10, startY+y-7), LIGHTGREEN);
    enemy[68] = Rectangle(Point(startX+x+8, startY+y-15), Point(startX+x+9, startY+y-12), LIGHTGREEN);
    enemy[69] = Rectangle(Point(startX+x+1, startY+y-7), Point(startX+x+7, startY+y-6), GREEN);
    enemy[70] = Rectangle(Point(startX+x+1, startY+y-12), Point(startX+x+8, startY+y-7), GREEN);
    enemy[71] = Rectangle(Point(startX+x+1, startY+y-13), Point(startX+x+7, startY+y-12), GREEN);
    enemy[72] = Rectangle(Point(startX+x+2, startY+y-15), Point(startX+x+7, startY+y-13), GREEN);
    enemy[73] = Rectangle(Point(startX+x+3, startY+y-16), Point(startX+x+6, startY+y-15), GREEN);
    enemy[74] = Rectangle(Point(startX+x+11, startY+y-25), Point(startX+x+12, startY+y-18), WHITEST);
    enemy[75] = Rectangle(Point(startX+x+12, startY+y-25), Point(startX+x+13, startY+y-17), WHITEST);
    enemy[76] = Rectangle(Point(startX+x+13, startY+y-23), Point(startX+x+14, startY+y-22), WHITEST);
    enemy[77] = Rectangle(Point(startX+x+13, startY+y-19), Point(startX+x+14, startY+y-18), WHITEST);
    enemy[78] = Rectangle(Point(startX+x, startY+y-26), Point(startX+x+15, startY+y),BLACK);
    //hitbox = Rectangle(Point(x, y-26), Point(x+16, y), WHITEST);




}

void Enemies::drawEnemy(SDL_Plotter& g, int n, int startX, int startY, int szX, int szY){
    for (int i = 0; i < n; i++){
        enemy[i].scale(szX, szY);
        enemy[i].translate(startX, startY);
        enemy[i].draw(g);
        enemy[i].translate(-startX, -startY);
        enemy[i].inverseScale(szX, szY);
    }
}
void Enemies::setJumpstate(bool flag){
    jumping = flag;

}

void Enemies::moveEnemy(DIRECTIONS d, int n, int sp){
    for (int i = 0; i < n; i++){
        enemy[i].setSpeed(sp);
        enemy[i].moveLR(d);

    }
}
void Enemies::jumpEnemy(int n, int startY, int prevSpeed){
    if(enemy[0].p1.y == startY-250){
        for(int i = 0; i < n; i++){
            enemy[i].setSpeed_y(5);
        }
    }
    for(int i = 0; i < n; i++){

        if(prevSpeed > 0){
            enemy[i].setSpeed(2);
        }
        else{
            enemy[i].setSpeed(-2);
        }
        enemy[i].jump();



    }

}

void Enemies::jumpVerticalEnemy(int n, int startY){
    if(enemy[0].p1.y == startY- 250){
        for(int i = 0; i < n; i++){
            enemy[i].setSpeed_y(5);
        }
    }
    for(int i = 0; i < n; i++){
        enemy[i].setSpeed(0);
        enemy[i].jump();
    }

}

bool Enemies::colTop(int y_top, int x1, int x2){
    bool check = false;
    if(enemy[0].p2.y == y_top && enemy[0].p1.x >= x1 && enemy[0].p2.x <=x2){
        check = true;
        for(int i = 0; i < 78; i++){
            enemy[i].setSpeed_y(0);
            enemy[i].setSpeed(0);
        }
    }
    return check;

}


bool Enemies::colBot(int y_bot, int x1, int x2){
    bool check = false;
    if(enemy[0].p1.y == y_bot && enemy[0].p1.x >= x1 && enemy[0].p2.x <=x2){
        check = true;
        for(int i = 0; i < 78; i++){
            enemy[i].setSpeed_y(5);
            enemy[i].setSpeed(0);
        }
    }
    return check;

}

bool Enemies::colLeft(int left_x, int y1, int y2){
    bool check = false;
    if((enemy[0].p2.x == left_x) && ((enemy[0].p1.y >= y1 && enemy[0].p1.y <= y2) || (enemy[0].p2.y >= y1 && enemy[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            enemy[i].setSpeed_y(5);
            enemy[i].setSpeed(0);
        }
    }
    return check;

}

bool Enemies::colRight(int right_x, int y1, int y2){
    bool check = false;
    if((enemy[0].p1.x == right_x) && ((enemy[0].p1.y >= y1 && enemy[0].p1.y <= y2) || (enemy[0].p2.y >= y1 && enemy[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            enemy[i].setSpeed_y(5);
            enemy[i].setSpeed(0);
        }
    }
    return check;

}

bool Enemies::colLeftPipe(int rightx1, int rightX2, int y1, int y2){
    bool check = false;
    if((enemy[0].p1.x <= rightx1 && enemy[0].p1.x >= rightX2) && ((enemy[0].p1.y >= y1 && enemy[0].p1.y <= y2) || (enemy[0].p2.y >= y1 && enemy[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            enemy[i].setSpeed_y(5);
            enemy[i].setSpeed(0);
        }
    }
    return check;


}

bool Enemies::colRIGHTPipe(int LeftX1, int LeftX2, int y1, int y2){
    bool check = false;
    if((enemy[0].p2.x >= LeftX1 && enemy[0].p2.x <= LeftX2) && ((enemy[0].p1.y >= y1 && enemy[0].p1.y <= y2) || (enemy[0].p2.y >= y1 && enemy[0].p2.y <= y2))){
        check = true;
        for(int i = 0; i < 78; i++){
            enemy[i].setSpeed_y(5);
            enemy[i].setSpeed(0);
        }
    }
    return check;

}

bool Enemies::KillEnemy(int Left, int Right, int MarioTop){
    bool check = false;
    if(enemy[0].p2.y == MarioTop && ((enemy[0].p1.x <= Right && enemy[0].p1.x >= Left) || (enemy[0].p2.x <= Right && enemy[0].p2.x >= Left))){
        check = true;
    }
    return check;


}
