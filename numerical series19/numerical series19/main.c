//
//  main.c
//  numerical series19
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*    123454321
       2345432
        34543
         454
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
        leftlimit++;
        rightlimit++;
    }
}
