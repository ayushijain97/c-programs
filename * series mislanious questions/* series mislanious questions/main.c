//
//  main.c
//  * series mislanious questions
//
//  Created by Pushpa Jain on 11/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
   * * * * *
   *       *
   *       *
   *       *
   * * * * *      */


void main()
{
    int limit;
    printf("enter limit");
    scanf("%d", &limit);
    for(int i=1; i<=limit; i++)
    {
        for(int j=1; j<=limit; j++ )
        {
            if(i==1|| i==limit|| j==1|| j==limit)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
