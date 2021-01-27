//
//  main.c
//  numerical series 18
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*   123454321
      1234321
       12321
        121
         1      */

void main()
{
    int limit, leftlimit, rightlimit;
    printf("enter limit");
    scanf("%d",&limit);
    leftlimit=limit;
    rightlimit=limit;
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=i-1; s++)
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
        leftlimit--;
        rightlimit--;
    }
}
