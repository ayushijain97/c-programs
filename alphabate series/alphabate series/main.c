//
//  main.c
//  alphabate series
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>


/*
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA  */

void main()
{
    int limit, leftlimit=1, rightlimit=1;
    printf("enter limit");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=limit-i; s++)
        {
            printf(" ");
        }
        for(int j=1; j<=leftlimit; j++)
        {
            printf("%c",j+64);
            
        }
        for(int k=rightlimit; k>=1; k--)
        {
            if(k==rightlimit)
                continue;
            printf("%c",k+64);
        }
        printf("\n");
        leftlimit++;
        rightlimit++;
    }
}
