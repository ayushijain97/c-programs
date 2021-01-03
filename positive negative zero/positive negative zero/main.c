//
//  main.c
//  positive negative zero
//
//  Created by Pushpa Jain on 27/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    switch(a>0)
    {
        case 0:
            printf("the value is negative\n");
             break;
        case 1:
            printf("the value is positive\n");
            break;
        
    }
}
