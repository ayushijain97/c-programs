//
//  main.c
//  numerical series 16
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*    5
     545
    54345
   5432345
  543212345  */

void main()
{
    int limit,leftlimit, rightlimit;
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
        leftlimit--;
        rightlimit--;
    }
}
