//
//  main.c
//  sum of row and column
//
//  Created by Pushpa Jain on 21/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][3],i,j,sum=0,sum1=0;
    printf("Enter matrix values");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("the sum of row%dis %d",i,sum);
        printf("\n");
    }
    for(j=0;j<3;j++)
    {
        sum1=0;
        for(i=0;i<3;i++)
        {
            sum1=sum1+a[i][j];
        }
        printf("The sum of column%dis %d",j,sum1);
        printf("\n");
    }
    
}
