//
//  main.c
//  inverted hollow pyramid star pattern
//
//  Created by Pushpa Jain on 11/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
 * * * * * * * * *
   *           *
     *       *
       *   *
         *           */


void main()
{
    int limit,temp,temp1;
    printf("enter limit");
    scanf("%d", &limit);
    temp=limit;
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=i-1; s++)
        {
            printf("  ");
        }
        temp1=2*temp-1;
        for(int j=1; j<=temp1; j++)
        {
            if(j==1|| j==temp1|| i==1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }printf("\n");
        temp--;
    }
}
