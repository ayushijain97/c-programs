//
//  main.c
//  ranges of datatypes
//
//  Created by Pushpa Jain on 25/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int i,c;
    float f;
    char ch;
    double d;
    printf("enter your choice from 0-3");
    scanf("%d",&c);
    switch(c)
    {
        case 0:
            printf("enter any integer value");
            scanf("%d",&i);
            printf("the range is from -32768 to +32767");
            break;
        case 1:
            printf("enter any float value");
            scanf("%f",&f);
            printf("the range is from 3.4e^-38 to 3.4e^+38");
            break;
        case 2:
            printf("enter any character value");
            scanf("%c",&ch);
            printf("the range is -128 to +127");
            break;
        
        case 3:
            printf("enter any double value");
            scanf("%lf",&d);
            printf("the range is from 1.7e^-308 to 1.7e^+308");
            break;
        default:
            printf("sorry");
            break;

    }
}

