//
//  main.c
//  array
//
//  Created by Pushpa Jain on 13/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5], i;
    printf("enter an array");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    for(i=4; i>=0; i--)
    {
        printf("%d", a[i]);
    }
}
