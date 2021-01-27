//
//  main.c
//  transpose a matrix
//
//  Created by Pushpa Jain on 19/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int i,j,a[3][3], b[3][3];
    printf("enter values in matrix");
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
            b[i][j]=a[j][i];
            }
        }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            a[i][j]=b[i][j];
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
