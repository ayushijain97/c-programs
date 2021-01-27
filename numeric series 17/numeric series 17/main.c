//
//  main.c
//  numeric series 17
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
     5
    454
   34543
  2345432
 123454321    */

void main()
{
    int limit, leftlimit, rightlimit;
    printf("enter limit");
    scanf("%d",&limit);
    leftlimit=limit;
    rightlimit=limit;
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=limit-i; s++)
        {
            printf(" ");
        }
        for(int j=leftlimit; j<=limit; j++)
        {
            printf("%d",j);
        }
        for(int k=limit; k>=rightlimit; k--)
        {
           if(k==limit)
               continue;
            printf("%d",k);
        }
        printf("\n");
        leftlimit--;
        rightlimit--;
    }
}
