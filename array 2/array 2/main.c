//
//  main.c
//  array 2
//
//  Created by Pushpa Jain on 14/01/21.
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
    printf("the even values are:- ");
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
        {
        printf("%d ", a[i]);
        }
    }
    printf("\n");
    printf("The odd values are:- ");
    for (i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    printf("The even position values are:- ");
    for (i=0;i<5;i++)
    {
        if(i%2==0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    printf("The odd position values are:- ");
    for (i=0;i<5;i++)
    {
        if(i%2!=0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    printf("The values are:- ");
    for (i=0;i<5;i++)
    {
        if(i%2==0&&a[i]%2!=0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    printf("The values are:- ");
    for (i=0;i<5;i++)
    {
        if(i%2!=0&&a[i]%2==0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
