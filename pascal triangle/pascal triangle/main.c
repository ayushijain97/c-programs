//
//  main.c
//  pascal triangle
//
//  Created by Pushpa Jain on 21/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[10][10],i,j,limit;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=1;i<limit;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1&&j==i)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}
