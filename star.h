#ifndef STAR_H_INCLUDED
#define STAR_H_INCLUDED

  int x = 50, y = 500;









    Rectangle star[100];

    star[0] = Rectangle(Point(x,y),Point(x+12,y+2),BLACK);

    star[1] = Rectangle(Point(x+10,y-4),Point(x+12,y+2),BLACK);

    star[2] = Rectangle(Point(x+12,y-8),Point(x+14,y-4),BLACK);

    star[3] = Rectangle(Point(x+14,y-12),Point(x+18,y-8),BLACK);

    star[4] = Rectangle(Point(x+18,y-8),Point(x+20,y-4),BLACK);

    star[5] = Rectangle(Point(x+20,y-4),Point(x+22,y),BLACK);

    star[6] = Rectangle(Point(x+22,y),Point(x+34,y+2),BLACK);

    star[7] = Rectangle(Point(x+30,y+2),Point(x+32,y+4),BLACK);

    star[8] = Rectangle(Point(x+28,y+4),Point(x+30,y+6),BLACK);

    star[9] = Rectangle(Point(x+26,y+6),Point(x+28,y+10),BLACK);

    star[10] = Rectangle(Point(x+28,y+10),Point(x+30,y+14),BLACK);

    star[11] = Rectangle(Point(x+30,y+14),Point(x+32,y+18),BLACK);

    star[12] = Rectangle(Point(x+32,y+18),Point(x+34,y+22),BLACK);

    star[13] = Rectangle(Point(x+26,y+18),Point(x+32,y+20),BLACK);

    star[14] = Rectangle(Point(x+22,y+16),Point(x+26,y+18),BLACK);

    star[15] = Rectangle(Point(x+18,y+14),Point(x+22,y+16),BLACK);

    star[16] = Rectangle(Point(x+14,y+16),Point(x+18,y+18),BLACK);

    star[17] = Rectangle(Point(x+10,y+18),Point(x+14,y+20),BLACK);

    star[18] = Rectangle(Point(x+6,y+20),Point(x+10,y+22),BLACK);

    star[19] = Rectangle(Point(x+2,y+2),Point(x+4,y+4),BLACK);

    star[20] = Rectangle(Point(x+4,y+4),Point(x+6,y+6),BLACK);

    star[21] = Rectangle(Point(x+6,y+6),Point(x+8,y+10),BLACK);

    star[22] = Rectangle(Point(x+4,y+10),Point(x+6,y+14),BLACK);

    star[23] = Rectangle(Point(x+2,y+14),Point(x+4,y+18),BLACK);

    star[24] = Rectangle(Point(x,y+18),Point(x+2,y+22),BLACK);

    star[25] = Rectangle(Point(x+12,y+4),Point(x+14,y+10),BLACK);

    star[26] = Rectangle(Point(x+18,y+4),Point(x+20,y+10),BLACK);

    for(int i = 0; i <= 26; i++){

        star[i].draw(g);

    }

    /*

     Rectangle mushroom[100];

     mushroom[0] = Rectangle(Point(x,y),Point(x+2,y+10),BLACK);

     mushroom[1] = Rectangle(Point(x+2,y-6),Point(x+4,y),BLACK);

     mushroom[2] = Rectangle(Point(x+4,y-8),Point(x+6,y-6),BLACK);

     mushroom[3] = Rectangle(Point(x+6,y-10),Point(x+20,y-8),BLACK);

     mushroom[4] = Rectangle(Point(x+20,y-8),Point(x+24,y-6),BLACK);

     mushroom[5] = Rectangle(Point(x+24,y-6),Point(x+26,y-4),BLACK);

     mushroom[6] = Rectangle(Point(x+26,y-4),Point(x+28,y+10),BLACK);



     for(int i = 0; i <= 20;i++){

     mushroom[i].draw(g);

     }





     int startAx = 245, startAy = 235;

     int startRx = 337, startRy = 200;

     int startIx = 435, startIy = 200;

     int startOx = 485, startOy = 230;

     */


#endif // STAR_H_INCLUDED
