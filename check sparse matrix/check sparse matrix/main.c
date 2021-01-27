//
//  main.c
//  check sparse matrix
//
//  Created by Pushpa Jain on 22/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int a[3][3],i,j,count=0;
    printf("enter a matrix");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j]==0)
            {
                count=count+1;
            }
        }
    }
    i=3;
    j=3;
    if(count>i*j/2)
    {
        printf("the matrix is sparse");
    }
    
    else
    {
        printf("not sparse");
    }
    printf("\n");
}
