//
//  main.c
//  check upper triangle matrix
//
//  Created by Pushpa Jain on 20/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int i,j,a[3][3],flag=1;
    printf("enter matrix values");
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
            if(i<=j&&a[i][j]!=0)
            {
                flag=1;
            }
            else if(j<i&&a[i][j]==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("upper traingle matrix");
    }
    
    else
    {
        printf("not an upper triangle");
    }
    printf("\n");
}
