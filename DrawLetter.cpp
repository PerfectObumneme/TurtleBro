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

#include <stdio.h>
#include "DrawLetter.h"

#include "DrawSquare.h"

void DrawLetter(SDL_Plotter &G, int x, int y, char l, int s, int r, int g, int b){

    int row = 14, col = 13;
    int dispLetter[row][col];

    switch(l)
    {
        case 'Box':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = Box[i][j];
                }
            }
            break;

        case 'A':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterA[i][j];
                }
            }
            break;

        case 'B':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterB[i][j];
                }
            }
            break;

        case 'C':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterC[i][j];
                }
            }
            break;
        case 'D':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterD[i][j];
                }
            }
            break;

        case 'E':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterE[i][j];
                }
            }
            break;

        case 'F':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterF[i][j];
                }
            }
            break;

        case 'G':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterG[i][j];
                }
            }
            break;

        case 'H':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterH[i][j];
                }
            }
            break;


        case 'I':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterI[i][j];
                }
            }
            break;


        case 'J':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterJ[i][j];
                }
            }
            break;

        case 'K':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterK[i][j];
                }
            }
            break;

        case 'L':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterL[i][j];
                }
            }
            break;


        case 'M':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterM[i][j];
                }
            }
            break;

        case 'N':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterN[i][j];
                }
            }
            break;


        case 'O':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterO[i][j];
                }
            }
            break;

        case 'P':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterP[i][j];
                }
            }
            break;

        case 'Q':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterQ[i][j];
                }
            }
            break;


        case 'R':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterR[i][j];
                }
            }
            break;

        case 'S':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterS[i][j];
                }
            }
            break;
        case 'T':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterT[i][j];
                }
            }
            break;
        case 'U':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterU[i][j];
                }
            }
            break;

        case 'V':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterV[i][j];
                }
            }
            break;

        case 'W':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterW[i][j];
                }
            }
            break;
        case 'X':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterX[i][j];
                }
            }
            break;

        case 'Y':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterY[i][j];
                }
            }
            break;

        case 'Z':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterZ[i][j];
                }
            }
            break;

        case '1':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter1[i][j];
                }
            }
            break;
        case '2':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter2[i][j];
                }
            }
            break;

        case '3':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter3[i][j];
                }
            }
            break;
        case '4':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter4[i][j];
                }
            }
            break;
        case '5':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter5[i][j];
                }
            }
            break;

        case '6':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter6[i][j];
                }
            }
            break;

        case '7':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter7[i][j];
                }
            }
            break;
        case '8':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter8[i][j];
                }
            }
            break;
        case '9':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter9[i][j];
                }
            }
            break;
        case '0':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letter0[i][j];
                }
            }
            break;

        case ':':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterCL[i][j];
                }
            }
            break;

        case '.':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = letterPeriod[i][j];
                }
            }
            break;
        case '!':
            for(int i = 0; i < row; i++){

                for(int j = 0; j < col; j++){

                    dispLetter[i][j] = LetterEx[i][j];
                }
            }
            break;

    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){

            if(dispLetter[i][j] == 1){
                drawSquare(G, x + (s * j), y +(s * i),s, r, g, b);
            }
        }
    }




}
