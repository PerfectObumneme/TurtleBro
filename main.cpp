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
/*
DATA ABSTRACTION: The necessary variables, outside of functions
are intitialized
INPUT: The user inputs commands by pressing keys. Each key having a
specific function.
PROCESS: The characters of the game are initialized and functions are
called to govern the interactions between the characters of the game.
OUTPUT: The background, title screen, and end screens are displayed at
various points. The characters are diplayed to the screen and moved
across the screen according to the inputs from the user.
ASSUMPTIONS:
- It is assumed that once game is over the user will not continue to
play unless the space bar is hit
- It is assumed the that more than 2 jump functions will not be used
in order
*/

#include <iostream>

#include <cstdlib>

#include <string>

#include <fstream>

#include "SDL_Plotter.h"

#include "Mario.h"

#include "Background.h"



#include "Enemy.h"
#include "Titlescreen.h"
#include "levelOne.h"

#include "outline.h"

#include <ostream>
#include <cstdlib>
#include <string>
#include <ctime>

#include "GameOver.h"
#include "Winscreen.h"
#include "TopScore.h"



Rectangle arrayT[100];



using namespace std;



int main(int argc, char ** argv)

{
int timeluigi = 0;
int timeMario = 50;
int timeWario = 100;
int timePlayer1 = 150;
int wincounter = 0;
    SDL_Plotter g(1000,1000); // size of our plotter...

    //char key;



    //Player mario;




    Player mario;
    Player luigi;
    Player wario;
    Player player1;

     plot_background(g);
     levelOne(g);


    int MaxJump = 75;

    bool col = false;
    bool col2 = false;

    Enemies turtle(500,550);

    Platforms topUpperRight(650,350),topUpperLeft(0,350),botLeft(0,735),botRight(650,735);
    Platforms Middle(200,550,0);
    g.initSound("media.io_Gameover.mp3.mp3");






    //topL, botL, botR;

    int startY, PrevSpeed;
    bool colR = false;
    bool colL = false;
    bool gameOver = false;
    bool falling = false, falling2 = false, falling3 = false, falling4 = false, falling5 = false, falling6 = false;
    bool fallingEnemy = false;   bool fallingEnemy2 = false;   bool fallingEnemy3 = false;   bool fallingEnemy4 = false;   bool fallingEnemy5 = false;   bool fallingEnemy6 = false;
    //mario counter
    int marioCount = 0;
    bool luigiDead = false, marioDead = false, warioDead = false, player1Dead = false;
    bool start;
    int delayJump = 0;

    while(!g.getQuit() && !start){

        Title(g);
        g.update();

        if (g.kbhit()){
            if(g.getKey() == SDL_SCANCODE_RETURN){
                start = true;
            }
        }
    }

    while (!g.getQuit()){





            //luigi.setToStart(200, 180, 44);

         falling  = turtle.colTop(550,200,800); // middle
         falling2 = turtle.colTop(350,650,999); //top right
         falling3 = turtle.colTop(350,0,350); // top left
         falling4 = turtle.colTop(735,0,350); //bottom right
         falling5  = turtle.colTop(735,650,999); // bottom left
         falling6 = turtle.colTop(930,0,998); // ground


         if(!falling && !falling2 && !falling3 && !falling4 && !falling5 && !falling6){
         for(int i = 0; i < 78; i++){
         turtle.enemy[i].setSpeed_y(5);
         turtle.enemy[i].translate(turtle.enemy[i].speed*0.5, turtle.enemy[i].speed_y);
         }
         turtle.drawEnemy(g,78,0,0,1,1);
         g.update();



         }

         if(turtle.KillEnemy(luigi.aR[0].p1.x, luigi.aR[0].p2.x, luigi.aR[0].p1.y) && !luigiDead){
             luigiDead = true;
             wincounter++;

         }
         if(turtle.KillEnemy(mario.aR[0].p1.x, mario.aR[0].p2.x, mario.aR[0].p1.y) &&!marioDead){
             marioDead = true;
             wincounter++;

         }
         if(turtle.KillEnemy(wario.aR[0].p1.x, wario.aR[0].p2.x, wario.aR[0].p1.y) &&!warioDead){
            warioDead = true;
            wincounter++;

         }
         if(turtle.KillEnemy(player1.aR[0].p1.x, player1.aR[0].p2.x, player1.aR[0].p1.y) &&!player1Dead){
            player1Dead = true;
            wincounter++;

         }

         if(luigi.killPlayer(turtle) || luigi.killPlayerLeft(turtle) && !luigiDead){
            gameOver = true;

         }
         if(mario.killPlayer(turtle) || mario.killPlayerLeft(turtle)&& !marioDead){
            gameOver = true;

         }
         if(wario.killPlayer(turtle) || wario.killPlayerLeft(turtle)&& !warioDead){
            gameOver = true;

         }
         if(player1.killPlayer(turtle) || player1.killPlayerLeft(turtle)&& !player1Dead){
            gameOver = true;

         }



        if (g.kbhit()){

            switch(g.getKey()){
                case ' ':
                    luigiDead = false;
                    marioDead = false;
                    warioDead = false;
                    player1Dead = false;
                    wincounter = 0;
                    gameOver = false;
                break;
                case RIGHT_ARROW: turtle.moveEnemy(RIGHT, 78, 6);
                    PrevSpeed = 6;
                    if(turtle.colRIGHTPipe(900,990,860,980)){
                        for(int i = 0; i < 78; i++){
                            turtle.enemy[i].translate(-650,-750);
                        }
                    }

                    //check for right screen bounds
                    if(turtle.colRIGHTPipe(990, 1000, 0, 999)){
                        for(int i = 0; i < 78; i++){
                            turtle.enemy[i].translate(-960, 0);
                        }
                    }

                    break;

                case LEFT_ARROW: turtle.moveEnemy(LEFT, 78, 6);
                    PrevSpeed = -6;
                    // MADE FUNCTION TO CHECK COLLISION ON PIPES,
                    // IT HAS AN X RANGE TO MAKE SURE IT HITS.
                    // NOTE RIGHTX1 IS THE RIGHTMOST EDGE AND RIGHTX2 IS WHERE IT STARTS.
                    if(turtle.colLeftPipe(120,0,860,980)){
                        for(int i = 0; i < 78; i++){
                            turtle.enemy[i].translate(630,-750);
                        }

                    }

                     //check for left screen bounds
                    if(turtle.colLeftPipe(10, 0, 0, 999)){
                        for(int i = 0; i < 78; i++){
                            turtle.enemy[i].translate(960, 0);
                        }
                    }

                    break;

                case UP_ARROW: if(delayJump < 100){
                    startY = turtle.enemy[0].p1.y;


                    for(int j =0; j < 78; j++){
                        turtle.enemy[j].setSpeed_y(-5);
                    }
                    for(int i = 0; (i < MaxJump) && (!col && !colL && !colR);i++){

                        turtle.jumpEnemy(78,startY, PrevSpeed);

                        //check for left screen bounds
                        if(turtle.colLeftPipe(10, 0, 0, 999)){
                            for(int i = 0; i < 78; i++){
                                turtle.enemy[i].translate(960, 0);
                            }
                        }
                        //check for right screen bounds
                        if(turtle.colRIGHTPipe(990, 1000, 0, 999)){
                            for(int i = 0; i < 78; i++){
                                turtle.enemy[i].translate(-960, 0);
                            }
                        }

                        col = turtle.colTop(350,650,999); //top right
                        col = turtle.colTop(350,0,350); // top left
                        col = turtle.colTop(735,0,350); //bottom right
                        col = turtle.colTop(735,650,999); // bottom left
                        col = turtle.colTop(550,200,800);// middle
                        col = turtle.colTop(230,0,999);
                        //PrevSpeed = turtle.enemy[0].speed;


                        // THIS IS THE GROUND COLLISION
                        col = turtle.colTop(930,0,998); // ground

                        turtle.colBot(385,650,999);// topright
                        turtle.colBot(385,0,350); // topleft
                        turtle.colBot(770,0,350); // bottom left
                        turtle.colBot(770,650,999); // bottom right
                        turtle.colBot(585,200,800); // middle


                        turtle.colRight(5,0,999); // Left bound

                        if(colL = turtle.colLeft(650, 350, 385)){
                        }
                        colL = turtle.colLeft(650, 350, 385); //top left
                        colL = turtle.colLeft(0, 735, 770); //bottom left
                        colL = turtle.colLeft(650, 735, 770); //bottom right
                        colL = turtle.colLeft(200, 550, 585); //middle

                        colR = turtle.colRight(998, 350, 385);//top right
                        colR = turtle.colRight(350, 350, 385); //top left
                        colR = turtle.colRight(350, 735, 770); //bottom left
                        colR = turtle.colRight(998, 735, 770);
                        colR = turtle.colRight(800, 550, 585);//bottom right
                        colR = turtle.colRight(800, 550, 585); //middle


                        turtle.drawEnemy(g,78,0,0,1,1);

                        g.update();
                        turtle.enemy[1].draw(g);


                    }
                    delayJump += 100;
                }
                    break;
                case DOWN_ARROW: if(delayJump < 100){
                    g.playSound("mario_jump.mp3.wav");

                    startY = turtle.enemy[0].p1.y;

                    for(int j =0; j < 78; j++){
                        turtle.enemy[j].setSpeed_y(-5);
                    }
                    for(int i = 0; (i < MaxJump) && (!col && !colL && !colR);i++){

                        turtle.jumpVerticalEnemy(78, startY);

                        col = turtle.colTop(350,650,999); //top right
                        col = turtle.colTop(350,0,350); // top left
                        col = turtle.colTop(735,0,350); //bottom right
                        col = turtle.colTop(735,650,999); // bottom left
                        col = turtle.colTop(550,200,800); // middle
                        col = turtle.colTop(230,0,999);



                        // THIS IS THE GROUND COLLISION
                        col = turtle.colTop(930,0,998); // ground

                        turtle.colBot(385,650,999);// topright
                        turtle.colBot(385,0,350); // topleft
                        turtle.colBot(770,0,350); // bottom left
                        turtle.colBot(770,650,999); // bottom right
                        turtle.colBot(585,200,800); // middle


                        turtle.colRight(5,0,999); // Left bound


                        colL = turtle.colLeft(650, 350, 385); //top left
                        colL = turtle.colLeft(0, 735, 770); //bottom left
                        colL = turtle.colLeft(650, 735, 770); //bottom right
                        colL = turtle.colLeft(200, 550, 585); //middle

                        colR = turtle.colRight(998, 350, 385);//top right
                        colR = turtle.colRight(350, 350, 385);//top left
                        colR = turtle.colRight(350, 735, 770); //bottom left
                        colR = turtle.colRight(998, 735, 770); //bottom right
                        colR = turtle.colRight(800, 550, 585); //middle


                        turtle.drawEnemy(g,78,0,0,1,1);

                        g.update();
                        turtle.enemy[1].draw(g);


                    }
                delayJump += 100;

                }
                    break;





            }

        }

        if(clock() > timeluigi && !luigiDead){
             luigi.movePlayer(RIGHT, 44, 1);
             fallingEnemy  = luigi.colTop(550,200,800); // middle
             fallingEnemy2 = luigi.colTop(350,650,999); //top right
             fallingEnemy3 = luigi.colTop(350,0,350); // top left
             fallingEnemy4 = luigi.colTop(735,0,350); //bottom right
             fallingEnemy5  = luigi.colTop(735,650,999); // bottom left
             fallingEnemy6 = luigi.colTop(930,0,998); // ground


         if(!fallingEnemy && !fallingEnemy2 && !fallingEnemy3 && !fallingEnemy4 && !fallingEnemy5 && !fallingEnemy6){
             for(int i = 0; i < 44; i++){

                luigi.aR[i].translate(1, 5);
             }


         g.update();

         }
         //check for left screen bounds
                        if(luigi.colRight(10, 0, 999)){

                            for(int i = 0; i < 44; i++){
                                luigi.aR[i].translate(945, 0);
                            }
                        }
                        //check for right screen bounds
                        if(luigi.colLeft(990, 0, 999)){

                            for(int i = 0; i < 44; i++){
                                 luigi.aR[i].translate(-945, 0);
                            }
                        }
                        //checks if hit right pipe
                         if(luigi.colRIGHTPipe(900,990,860,980)){
                        for(int i = 0; i < 78; i++){
                        luigi.aR[i].translate(-650,-750);
                        }
                    }
            timeluigi += 15;
        }
       fallingEnemy = false;    fallingEnemy2 = false;    fallingEnemy3 = false;    fallingEnemy4 = false;
         fallingEnemy5 = false;    fallingEnemy6 = false;


          if(marioCount >= 10 && !warioDead){
             wario.movePlayer(RIGHT, 44, 1);
             fallingEnemy  = wario.colTop(550,200,800); // middle
             fallingEnemy2 = wario.colTop(350,650,999); //top right
             fallingEnemy3 = wario.colTop(350,0,350); // top left
             fallingEnemy4 = wario.colTop(735,0,350); //bottom right
             fallingEnemy5  = wario.colTop(735,650,999); // bottom left
             fallingEnemy6 = wario.colTop(930,0,998); // ground


         if(!fallingEnemy && !fallingEnemy2 && !fallingEnemy3 && !fallingEnemy4 && !fallingEnemy5 && !fallingEnemy6){
             for(int i = 0; i < 44; i++){

                wario.aR[i].translate(1, 5);
             }


         g.update();

         }
         //check for left screen bounds
                        if(wario.colRight(10, 0, 999)){

                            for(int i = 0; i < 44; i++){
                                wario.aR[i].translate(945, 0);
                            }
                        }
                        //check for right screen bounds
                        if(wario.colLeft(990, 0, 999)){

                            for(int i = 0; i < 44; i++){
                                 wario.aR[i].translate(-945, 0);
                            }
                        }
                        //checks if hit right pipe
                         if(wario.colRIGHTPipe(900,990,860,980)){
                        for(int i = 0; i < 78; i++){
                            wario.aR[i].translate(-650,-750);
                        }
                    }
            timeWario += 50;
        }

        if(marioCount >= 5 && !marioDead){
             mario.movePlayer(RIGHT, 44, 1);
             fallingEnemy  = mario.colTop(550,200,800); // middle
             fallingEnemy2 = mario.colTop(350,650,999); //top right
             fallingEnemy3 = mario.colTop(350,0,350); // top left
             fallingEnemy4 = mario.colTop(735,0,350); //bottom right
             fallingEnemy5  = mario.colTop(735,650,999); // bottom left
             fallingEnemy6 = mario.colTop(930,0,998); // ground


         if(!fallingEnemy && !fallingEnemy2 && !fallingEnemy3 && !fallingEnemy4 && !fallingEnemy5 && !fallingEnemy6){
             for(int i = 0; i < 44; i++){

                mario.aR[i].translate(1, 5);
             }

         //luigi.drawNewPlayer(g, 44, 0, 0, 1.5, 1.5, LIGHTGREEN);
         g.update();

         }
         //check for left screen bounds
                        if(mario.colRight(10, 0, 999)){

                            for(int i = 0; i < 44; i++){
                                mario.aR[i].translate(945, 0);
                            }
                        }
                        //check for right screen bounds
                        if(mario.colLeft(990, 0, 999)){

                            for(int i = 0; i < 44; i++){
                                 mario.aR[i].translate(-945, 0);
                            }
                        }
                        //checks if hit right pipe
                         if(mario.colRIGHTPipe(900,990,860,980)){
                        for(int i = 0; i < 78; i++){
                            mario.aR[i].translate(-650,-750);
                        }
                    }
            timeMario += 50;
        }

         fallingEnemy = false;    fallingEnemy2 = false;    fallingEnemy3 = false;    fallingEnemy4 = false;
         fallingEnemy5 = false;    fallingEnemy6 = false;

        if(marioCount >= 15 && !player1Dead){
             player1.movePlayer(RIGHT, 44, 1);
             fallingEnemy  = player1.colTop(550,200,800); // middle
             fallingEnemy2 = player1.colTop(350,650,999); //top right
             fallingEnemy3 = player1.colTop(350,0,350); // top left
             fallingEnemy4 = player1.colTop(735,0,350); //bottom right
             fallingEnemy5  = player1.colTop(735,650,999); // bottom left
             fallingEnemy6 = player1.colTop(930,0,998); // ground


         if(!fallingEnemy && !fallingEnemy2 && !fallingEnemy3 && !fallingEnemy4 && !fallingEnemy5 && !fallingEnemy6){
             for(int i = 0; i < 44; i++){

                player1.aR[i].translate(1, 5);
             }


         g.update();

         }
         //check for left screen bounds
                        if(player1.colRight(10, 0, 999)){
                            for(int i = 0; i < 44; i++){
                                player1.aR[i].translate(945, 0);
                            }
                        }
                        //check for right screen bounds
                        if(player1.colLeft(990, 0, 999)){

                            for(int i = 0; i < 44; i++){
                                 player1.aR[i].translate(-945, 0);
                            }
                        }
                        //checks if hit right pipe
                         if(player1.colRIGHTPipe(900,990,860,980)){
                        for(int i = 0; i < 78; i++){
                            player1.aR[i].translate(-650,-750);
                        }
                    }
            timePlayer1 += 50;
        }

        fallingEnemy = false;    fallingEnemy2 = false;    fallingEnemy3 = false;    fallingEnemy4 = false;
         fallingEnemy5 = false;    fallingEnemy6 = false;





        col = false;
        colL = false;
        colR = false;
        falling = false;
        falling2 = false;
        falling3 = false;
        falling4 = false;
        falling5 = false;






        topUpperRight.drawPlatform(g,4,0,0);
        Middle.M_Plat[0].draw(g);
        Middle.M_Plat[1].draw(g);
        Middle.M_Plat[2].draw(g);
        Middle.M_Plat[3].draw(g);



        topUpperLeft.drawPlatform(g,4,0,0);

        botLeft.drawPlatform(g,4,0,0);

        botRight.drawPlatform(g,4,0,0);



        plot_background(g);
        levelOne(g);
        HeadText(g);
        if(wincounter == 0)
        {
            DrawLetter(g, 625, 25, '0', 2, 255, 255, 255);
        }

            if(wincounter == 1)
            {
                DrawLetter(g, 625, 25, 'Box', 2, 0, 0, 0);

                DrawLetter(g, 625, 25, '1', 2, 255, 255, 255);
            }

                if(wincounter == 2)
                {
                    DrawLetter(g, 625, 25, 'Box', 2, 0, 0, 0);

                    DrawLetter(g, 625, 25, '2', 2, 255, 255, 255);
                }

                    if(wincounter == 3)
                    {
                        DrawLetter(g, 625, 25, 'Box', 2, 0, 0, 0);

                        DrawLetter(g, 625, 25, '3', 2, 255, 255, 255);
                    }


        if(marioCount >= 0 && marioCount < 5){
            luigi.drawNewPlayer(g, 44, 0, 0, 1, 1, LIGHTGREEN);
        }
        else if(marioCount >= 5 && marioCount < 10){
            luigi.drawNewPlayer(g, 44, 0, 0, 1, 1, LIGHTGREEN);
            mario.drawPlayer(g, 44, 0, 0, 1, 1);
        }
        else if(marioCount >= 10 && marioCount < 15){
            luigi.drawNewPlayer(g, 44, 0, 0, 1, 1, LIGHTGREEN);
            wario.drawNewPlayer(g, 44, 0, 0, 1, 1, PURPLE);
            mario.drawPlayer(g, 44, 0, 0, 1, 1);
        }
        else if(marioCount >= 15){
            luigi.drawNewPlayer(g, 44, 0, 0, 1, 1, LIGHTGREEN);
            mario.drawPlayer(g, 44, 0, 0, 1, 1);
            wario.drawNewPlayer(g, 44, 0, 0, 1, 1, PURPLE);
            player1.drawNewPlayer(g, 44, 0, 0, 1, 1, PINK);
        }



        turtle.drawEnemy(g,78,0,0,1,1);

        //counter for marios
         if(clock() %50 == 0){
                marioCount += 1;
         }

        if(gameOver){
            Gameover(g);
            g.playSound("media.io_Gameover.mp3.mp3");
        }
        if(wincounter == 4){
            Win(g);

        }
        g.update();
        delayJump--;

    }

    Point a(0,0), b(999,999);









    return 0;

}
