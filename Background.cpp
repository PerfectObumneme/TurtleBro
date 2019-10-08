/*
Author:  Perfect Obumneme, 
This program run the game of Mario
where the turtle is trying to defeat the Marios.
Due Date: 12/3/2018
Date Created: 10/30/2018
Date Last Modified: 12/3/2018
*/
#include "Background.h"
#include "line.h"
#include "point.h"


void plot_background( SDL_Plotter&g){
    drawRect(g, 0,999,0,999, 0, 0, 0);
    drawRect(g, 930,999,0,999,215,100,30);
    drawRect(g, 960,969,0,999,0,0,0);

    drawRect(g, 930,969,30,39,0,0,0);
    drawRect(g, 930,969,99,108,0,0,0);
    drawRect(g, 930,969,168,177,0,0,0);
    drawRect(g, 930,969,237,246,0,0,0);
    drawRect(g, 930,969,306,315,0,0,0);
    drawRect(g, 930,969,375,384,0,0,0);
    drawRect(g, 930,969,444,453,0,0,0);
    drawRect(g, 930,969,513,522,0,0,0);
    drawRect(g, 930,969,582,591,0,0,0);
    drawRect(g, 930,969,651,660,0,0,0);
    drawRect(g, 930,969,720,729,0,0,0);
    drawRect(g, 930,969,789,798,0,0,0);
    drawRect(g, 930,969,858,867,0,0,0);
    drawRect(g, 930,969,927,936,0,0,0);

    drawRect(g, 969,999,60,69,0,0,0);
    drawRect(g, 969,999,129,138,0,0,0);
    drawRect(g, 969,999,198,207,0,0,0);
    drawRect(g, 969,999,267,276,0,0,0);
    drawRect(g, 969,999,336,345,0,0,0);
    drawRect(g, 969,999,405,414,0,0,0);
    drawRect(g, 969,999,474,483,0,0,0);
    drawRect(g, 969,999,543,552,0,0,0);
    drawRect(g, 969,999,612,621,0,0,0);
    drawRect(g, 969,999,681,690,0,0,0);
    drawRect(g, 969,999,750,759,0,0,0);
    drawRect(g, 969,999,819,828,0,0,0);
    drawRect(g, 969,999,888,897,0,0,0);
    drawRect(g, 969,999,957,966,0,0,0);


    //PIPE Bottom LEFT
    drawRect(g, 861,920,0,100,0,185,0);
    drawRect(g, 858,923,104,120,0,185,0);
    //details of the bottom left pipe
    drawRect(g, 865,868,0,100,255,255,255);
    drawRect(g, 898,918,0,100,0,100,0);

    drawRect(g, 868,872,104,120,255,255,255);
    drawRect(g, 897,920,104,120,0,100,0);


    // PIPE Bottom RIGHT
    drawRect(g, 861,920,899,999,0,185,0);
    drawRect(g, 858,923,879,895,0,185,0);

    //details of the bottom right pipe
    drawRect(g, 865,868,899,999,255,255,255);
    drawRect(g, 898,918,899,999,0,100,0);

    drawRect(g, 868,872,879,895,255,255,255);
    drawRect(g, 897,920,879,895,0,100,0);

    //up left pipe

    drawRect(g, 167,226,0,85,0,185,0);
    drawRect(g, 164,229,89,105,0,185,0);

    drawRect(g, 130,189,154,219,0,185,0);
    drawRect(g, 127,192,223,239,0,185,0);

    drawRect(g, 167,226,107,130,0,185,0);
    drawRect(g, 167,197,130,149,0,185,0);

    drawRect(g, 167,226,107,130,0,185,0);

    // fill in bottom
    drawRect(g, 197,225,130,132,0,185,0);
    drawRect(g, 197,223,131,132,0,185,0);
    drawRect(g, 197,221,132,133,0,185,0);
    drawRect(g, 197,219,133,135,0,185,0);
    drawRect(g, 197,217,134,136,0,185,0);
    drawRect(g, 197,215,130,138,0,185,0);
    drawRect(g, 197,212,130,140,0,185,0);
    drawRect(g, 197,210,130,141,0,185,0);
    drawRect(g, 197,208,130,142,0,185,0);
    drawRect(g, 197,207,130,143,0,185,0);
    drawRect(g, 197,206,130,144,0,185,0);
    drawRect(g, 197,205,130,145,0,185,0);

    // fill in top

    drawRect(g, 134,167,148,149,0,185,0);
    drawRect(g, 136,167,146,149,0,185,0);
    drawRect(g, 138,167,143,149,0,185,0);
    drawRect(g, 140,167,140,149,0,185,0);
    drawRect(g, 142,167,137,149,0,185,0);
    drawRect(g, 144,167,134,149,0,185,0);
    drawRect(g, 146,167,131,149,0,185,0);
    drawRect(g, 148,167,129,149,0,185,0);
    drawRect(g, 150,167,126,149,0,185,0);
    drawRect(g, 152,167,123,149,0,185,0);
    drawRect(g, 155,167,120,149,0,185,0);
    drawRect(g, 157,167,117,149,0,185,0);
    drawRect(g, 159,167,114,149,0,185,0);
    drawRect(g, 161,167,111,149,0,185,0);
    drawRect(g, 163,167,109,149,0,185,0);

    line lineOne(Point(107,167), Point(154,130));
    lineOne.setColor(GREEN);
    lineOne.draw(g);

    line lineTwo(Point(130,226), Point(154,189));
    lineTwo.setColor(GREEN);
    lineTwo.draw(g);

    //details
    drawRect(g, 173,179,0,85,255,255,255);
    drawRect(g, 200,220,0,85,0,100,0);

    //2nd part 1
    drawRect(g, 170,176,89,105,255,255,255);
    drawRect(g, 203,223,89,105,0,100,0);

    //ist part 2
    drawRect(g, 136,142,154,219,255,255,255);
    drawRect(g, 163,183,154,219,0,100,0);

    // 2nd part 2
    drawRect(g, 133,139,223,239,255,255,255);
    drawRect(g, 166,186,223,239,0,100,0);

    //middle part
    drawRect(g, 167,226,107,110,0,100,0);
    drawRect(g, 130,189,149,152,0,100,0);
    //drawRect(g, 146,221,130,133,0,100,0);

    drawRect(g, 167,173,111,149,255,255,255);
    drawRect(g, 185,190,111,149,0,100,0);


    //up right pipe

    drawRect(g, 167,226,914,999,0,185,0);
    drawRect(g, 164,229,894,910,0,185,0);

    drawRect(g, 130,189,780,845,0,185,0);
    drawRect(g, 127,192,758,776,0,185,0);

    drawRect(g, 167,226,869,892,0,185,0);

    line lineThree(Point(869,226), Point(845,189));
    lineThree.setColor(GREEN);
    lineThree.draw(g);

    line lineFour(Point(892,167), Point(845,130));
    lineFour.setColor(GREEN);
    lineFour.draw(g);


    // fill job
    drawRect(g, 167,189,845,892,0,185,0);
    drawRect(g, 189,191,845,892,0,185,0);
    drawRect(g, 191,192,847,892,0,185,0);
    drawRect(g, 193,194,849,892,0,185,0);
    drawRect(g, 195,196,850,892,0,185,0);
    drawRect(g, 196,199,851,892,0,185,0);
    drawRect(g, 198,200,852,892,0,185,0);
    drawRect(g, 200,203,853,892,0,185,0);
    drawRect(g, 202,205,855,892,0,185,0);
    drawRect(g, 204,207,856,892,0,185,0);
    drawRect(g, 206,209,858,892,0,185,0);
    drawRect(g, 208,211,860,892,0,185,0);
    drawRect(g, 210,213,861,892,0,185,0);
    drawRect(g, 212,215,862,892,0,185,0);
    drawRect(g, 214,217,863,892,0,185,0);
    drawRect(g, 216,219,864,892,0,185,0);
    drawRect(g, 218,221,865,892,0,185,0);
    drawRect(g, 220,223,867,892,0,185,0);


    drawRect(g, 132,167,845,847,0,185,0);
    drawRect(g, 133,167,847,849,0,185,0);
    drawRect(g, 134,167,849,851,0,185,0);
    drawRect(g, 135,167,851,853,0,185,0);
    drawRect(g, 136,167,853,855,0,185,0);
    drawRect(g, 138,167,855,857,0,185,0);
    drawRect(g, 140,167,857,859,0,185,0);
    drawRect(g, 141,167,859,861,0,185,0);
    drawRect(g, 143,167,861,863,0,185,0);
    drawRect(g, 145,167,863,865,0,185,0);
    drawRect(g, 147,167,865,867,0,185,0);
    drawRect(g, 149,167,867,869,0,185,0);
    drawRect(g, 151,167,869,871,0,185,0);
    drawRect(g, 153,167,871,873,0,185,0);
    drawRect(g, 155,167,873,876,0,185,0);
    drawRect(g, 157,167,875,878,0,185,0);
    drawRect(g, 159,167,877,880,0,185,0);
    drawRect(g, 161,167,879,883,0,185,0);
    drawRect(g, 163,167,882,887,0,185,0);
    drawRect(g, 165,167,885,889,0,185,0);

    // details
    drawRect(g, 173,179,914,999,255,255,255);
    drawRect(g, 200,220,914,999,0,100,0);

    //2nd part 2
    drawRect(g, 170,176,894,910,255,255,255);
    drawRect(g, 203,223,894,910,0,100,0);

    //ist part 3
    drawRect(g, 136,142,780,843,255,255,255);
    drawRect(g, 163,183,780,843,0,100,0);

    // 2nd part 2
    drawRect(g, 133,139,758,776,255,255,255);
    drawRect(g, 166,186,758,776,0,100,0);

    //detailing middle of uppermost right pipe
    // 2nd part 2
    drawRect(g, 130,189,843,846,0,100,0);
    drawRect(g, 167,226,890,893,0,100,0);

    drawRect(g, 167,173,846,891,255,255,255);
    drawRect(g, 185,190,846,891,0,100,0);

}
