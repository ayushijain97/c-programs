//
//  main.c
//  numeric series21
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*   543212345
      4321234
       32123
        212
         1    */


void main()
{
    int limit, leftlimit, rightlimit;
    printf("enter limit");
    scanf("%d",&limit);
    leftlimit=limit;
    rightlimit=5;
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=i-1; s++)
        {
            printf(" ");
        }
        for(int j=leftlimit; j>=1; j--)
        {
            printf("%d",j);
        }
        for(int k=1; k<=rightlimit; k++)
        {
            if(k==1)
                continue;
            printf("%d",k);
        }
        printf("\n");
        leftlimit--;
        rightlimit--;
    }
}

