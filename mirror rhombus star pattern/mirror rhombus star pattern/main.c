//
//  main.c
//  mirror rhombus star pattern
//
//  Created by Pushpa Jain on 12/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
 *****
  *****
   *****
    *****
     *****   */


void main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for(int s=1;s<=i-1;s++)
        {
            printf(" ");
        }
        for (int j=1;j<=limit;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
