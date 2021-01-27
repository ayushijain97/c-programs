//
//  main.c
//  mirrored half diamond star pattern
//
//  Created by Pushpa Jain on 11/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
       *
      **
     ***
    ****
   *****
    ****
     ***
      **
       *    */


void main()
{
    int limit,upperlimit, lowerlimit, temp;
    printf("enter limit");
    scanf("%d", &limit);
    upperlimit=limit/2+1;
    lowerlimit=limit/2;
    for(int i =1; i<=upperlimit; i++)
    {
        for(int s=1; s<=upperlimit-i; s++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    temp=lowerlimit;
        for(int i =1; i<=lowerlimit; i++)
        {
            for(int s=1; s<=i; s++)
            {
                printf(" ");
            }
            for(int j=1; j<=temp; j++)
            {
                printf("*");
            }
            printf("\n");
            temp--;
            
        }
}

