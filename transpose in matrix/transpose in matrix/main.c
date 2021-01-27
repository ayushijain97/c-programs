//
//  main.c
//  transpose in matrix
//
//  Created by Pushpa Jain on 19/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][3],i,j;
    printf("enter the values");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("reverse in column");
    printf("\n");
    //reverse in column
    for(i=0; i<3; i++)
    {
        for(j=2; j>=0; j--)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("reverse in row");
    printf("\n");
    //reverse in row
    for(i=2; i>=0; i--)
    {
        for(j=0; j<3; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("reverse in both");
    printf("\n");
    //reverse in both
    for(i=2; i>=0; i--)
    {
        for(j=2; j>=0; j--)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    }
