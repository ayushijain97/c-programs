//
//  main.c
//  star series and print k
//
//  Created by Pushpa Jain on 07/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
    *  *
    * *
    **
    *
    **
    * *
    *  *  */


void main()
{
    int limit,upper,lower;
    printf("enter limit");
    scanf("%d",&limit);
    upper=limit/2+1;
    lower=limit/2;
    for(int i=1;i<=upper;i++)
    {
        for(int j=1;j<=upper-i+1; j++)
        {
            if(j==upper-i+1||j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=lower;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            if(j==i+1||j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
