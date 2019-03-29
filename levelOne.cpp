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

#include "levelOne.h"

void levelOne( SDL_Plotter&g){

    // bottom left platform
    drawRect(g, 735,770,0,350,255,255,255);
    drawRect(g, 735,737,0,350,200,200,200);
    drawRect(g, 768,770,0,350,200,200,200);
    drawRect(g, 750,755,0,350,0,0,0);
    drawRect(g, 756,768,0,350,200,0,0);
    drawRect(g, 738,750,0,30,200,0,0);
    drawRect(g, 738,750,30,35,0,0,0);
    //drawRect(g, 738,750,35,65,255,255,255);
    drawRect(g, 738,750,66,70,0,0,0);
    drawRect(g, 738,750,71,101,200,0,0);
    drawRect(g, 738,750,102,106,0,0,0);
    //drawRect(g, 738,750,107,137,255,255,255);
    drawRect(g, 738,750,138,142,0,0,0);
    drawRect(g, 738,750,143,173,200,0,0);
    drawRect(g, 738,750,173,177,0,0,0);
    //drawRect(g, 738,750,177,217,255,255,255);
    drawRect(g, 738,750,218,222,0,0,0);
    drawRect(g, 738,750,223,253,200,0,0);
    drawRect(g, 738,750,254,258,0,0,0);
    drawRect(g, 738,750,290,294,0,0,0);
    drawRect(g, 738,750,295,325,200,0,0);
    drawRect(g, 738,750,325,329,0,0,0);

    //bottom right pipe
    drawRect(g, 735,770,649,999,255,255,255);
    drawRect(g, 735,737,649,999,200,200,200);
    drawRect(g, 768,770,649,999,200,200,200);
    drawRect(g, 750,755,649,999,0,0,0);
    drawRect(g, 756,768,649,999,200,0,0);

    drawRect(g, 738,750,969,999,200,0,0);
    drawRect(g, 738,750,964,968,0,0,0);
    drawRect(g, 738,750,929,933,0,0,0);
    drawRect(g, 738,750,898,928,200,0,0);
    drawRect(g, 738,750,893,897,0,0,0);
    drawRect(g, 738,750,858,862,0,0,0);
    drawRect(g, 738,750,827,857,200,0,0);
    drawRect(g, 738,750,822,826,0,0,0);
    drawRect(g, 738,750,786,790,0,0,0);
    drawRect(g, 738,750,755,785,200,0,0);
    drawRect(g, 738,750,750,754,0,0,0);
    drawRect(g, 738,750,716,720,0,0,0);
    drawRect(g, 738,750,685,715,200,0,0);

    // uppermost pipe
    drawRect(g, 350,385,0,350,255,255,255);
    drawRect(g, 350,352,0,350,200,200,200);
    drawRect(g, 383,385,0,350,200,200,200);
    drawRect(g, 365,370,0,350,0,0,0);
    drawRect(g, 371,382,0,350,200,0,0);

    drawRect(g, 352,365,0,30,200,0,0);
    drawRect(g, 352,365,31,35,0,0,0);
    drawRect(g, 352,365,67,71,0,0,0);
    drawRect(g, 352,365,72,102,200,0,0);
    drawRect(g, 352,365,103,107,0,0,0);
    drawRect(g, 352,365,139,143,0,0,0);
    drawRect(g, 352,365,144,174,200,0,0);
    drawRect(g, 352,365,174,178,0,0,0);
    drawRect(g, 352,365,210,214,0,0,0);
    drawRect(g, 352,365,215,245,200,0,0);
    drawRect(g, 352,365,246,250,0,0,0);
    drawRect(g, 352,365,282,286,0,0,0);
    drawRect(g, 352,365,287,317,200,0,0);
    drawRect(g, 352,365,318,322,0,0,0);

    // uppermost RIGHT PLATFORM 2
    drawRect(g, 350,385,649,999,255,255,255);
    drawRect(g, 350,352,649,999,200,200,200);
    drawRect(g, 383,385,649,999,200,200,200);
    drawRect(g, 365,370,649,999,0,0,0);
    drawRect(g, 371,382,649,999,200,0,0);

    drawRect(g, 352,365,969,999,200,0,0);
    drawRect(g, 352,365,964,968,0,0,0);
    drawRect(g, 352,365,929,933,0,0,0);
    drawRect(g, 352,365,898,928,200,0,0);
    drawRect(g, 352,365,893,897,0,0,0);
    drawRect(g, 352,365,858,862,0,0,0);
    drawRect(g, 352,365,827,857,200,0,0);
    drawRect(g, 352,365,822,826,0,0,0);
    drawRect(g, 352,365,786,790,0,0,0);
    drawRect(g, 352,365,755,785,200,0,0);
    drawRect(g, 352,365,750,754,0,0,0);
    drawRect(g, 352,365,716,720,0,0,0);
    drawRect(g, 352,365,685,715,200,0,0);

    //middle platform
    
    
    drawRect(g, 550,585,200,799,255,255,255);
    drawRect(g, 565,570,200,799,0,0,0);
    drawRect(g, 571,582,200,799,200,0,0);
    drawRect(g, 583,585,200,799,200,200,200);
    drawRect(g, 550,552,200,799,200,200,200);
    drawRect(g, 553,565,231,235,0,0,0);
    drawRect(g, 553,565,236,266,200,0,0);
    drawRect(g, 553,565,267,271,0,0,0);
    drawRect(g, 553,565,303,307,0,0,0);
    drawRect(g, 553,565,308,338,200,0,0);
    drawRect(g, 553,565,338,342,0,0,0);
    drawRect(g, 553,565,374,378,0,0,0);
    drawRect(g, 553,565,379,409,200,0,0);
    drawRect(g, 553,565,410,414,0,0,0);
    drawRect(g, 553,565,446,450,0,0,0);
    drawRect(g, 553,565,451,481,200,0,0);
    drawRect(g, 553,565,482,486,0,0,0);
    drawRect(g, 553,565,518,522,0,0,0);
    drawRect(g, 553,565,523,553,200,0,0);
    drawRect(g, 553,565,554,558,0,0,0);
    drawRect(g, 553,565,590,594,0,0,0);
    drawRect(g, 553,565,595,625,200,0,0);
    drawRect(g, 553,565,626,628,0,0,0);
    drawRect(g, 553,565,660,664,0,0,0);
    drawRect(g, 553,565,665,695,200,0,0);
    drawRect(g, 553,565,696,700,0,0,0);
    drawRect(g, 553,565,732,736,0,0,0);
    drawRect(g, 553,565,737,767,200,0,0);
    drawRect(g, 553,565,768,772,0,0,0);
    

}
