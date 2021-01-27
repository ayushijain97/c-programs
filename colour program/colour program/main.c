//
//  main.c
//  colour program
//
//  Created by Pushpa Jain on 11/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include <ncurses.h>
int main()
{
    initscr();
    int i,j;
    for(i=1,j=1;i<25;i++)
    {
        move(j,i);
//        beep();
//        sound(rand());
//        textcolor(rand());
        printf("*");
    }
    for( ;i>1;i--,j++)
    {
        move(j,i);
//        beep();
        printf("*");
    }
    for( ;i<25;i++,j++)
    {
        move(j,i);
//        beep();
        printf("*");
    }
//    for( ;i>1;i--,j++)
//    {
//        move(j,i);
//        delay_output(10);
//        sound(rand());
//        textcolor(rand());
//        cprintf("*");
//    }
//    for( ;i<25;i++)
//    {
//        move(j,i);
//        delay_output(10);
//        sound(rand());
//        textcolor(rand());
//        cprintf("*");
//    }
//    for( ;i>1;i--,j--)
//    {
//        move(j,i);
//        delay_output(10);
//        sound(rand());
//        textcolor(rand());
//        cprintf("*");
//    }
//    for( ;i<25;i++,j--)
//    {
//        move(j,i);
//        delay_output(10);
//        sound(rand());
//        textcolor(rand());
//        cprintf("*");
//    }
//    for( ;i>1;i--,j--)
//    {
//        move(j,i);
//        delay_output(10);
//        sound(rand());
//        textcolor(rand());
//        cprintf("*");
//    }
    return 0;
}
