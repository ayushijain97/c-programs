//
//  main.c
//  numeric series 22
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
   543212345
    5432345
     54345
      545
       5    */

void main()
{
    int limit, leftlimit, rightlimit;
    printf("enter limit");
    scanf("%d",&limit);
    leftlimit=1;
    rightlimit=1;
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=i-1; s++)
        {
            printf(" ");
        }
        for(int j=limit; j>=leftlimit; j--)
        {
            printf("%d",j);
        }
        for(int k=rightlimit; k<=limit; k++)
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
