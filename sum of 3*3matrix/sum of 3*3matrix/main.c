//
//  main.c
//  sum of 3*3matrix
//
//  Created by Pushpa Jain on 18/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][3],b[3][3], c[3][3],i,j;
    printf("enter matrix a values");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("enter matrix b values");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
        }
    }
    
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ",c[i][j]);
            }
            
            printf("\n");

        }
    
}


