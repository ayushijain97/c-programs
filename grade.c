//
//  main.c
//  error
//
//  Created by Pushpa Jain on 24/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
char g;
    printf("enter a grade");
    scanf("%c",&g);
    switch(g)
    {
        case 'e':
            printf("excellent");
            break;
        case 'v':
            printf("very good");
             break;
        case 'g':
            printf("good");
             break;
        case 'a':
            printf("average");
             break;
        case 'f':
            printf("fail");
             break;
        default:
            printf("sorry");
            break;
    }
    }
