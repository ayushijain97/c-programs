//
//  main.c
//  math series1
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
      1
     121
    12321
   1234321
  123454321 */

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
            printf("%d",j);
        
        }
        for(int k=rightlimit; k>=1; k--)
        {
            if(k==rightlimit)
            continue;
            printf("%d",k);
        }
        printf("\n");
        leftlimit++;
        rightlimit++;
    }
}
