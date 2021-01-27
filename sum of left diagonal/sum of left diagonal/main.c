//
//  main.c
//  sum of left diagonal
//
//  Created by Pushpa Jain on 21/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][3], i, j, sum=0;
    printf("enter values");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==i)
            {
                sum=sum+a[i][j];
            }
        }
        
    }
    printf("the sum of diagonal %d", sum);
    printf("\n");
}
