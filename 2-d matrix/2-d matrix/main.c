//
//  main.c
//  2-d matrix
//
//  Created by Pushpa Jain on 18/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][3],i,j;
    printf("enter matrix no");
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
}
