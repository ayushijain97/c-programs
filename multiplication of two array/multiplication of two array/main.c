//
//  main.c
//  multiplication of two array
//
//  Created by Pushpa Jain on 20/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][5],b[5][4],c[3][4],i,j,k;
    printf("enter a matrix values");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter b matrix values");
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //initializing matrix values to 0
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i][j]=0;
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0;k<5;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
                
            
        }
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
