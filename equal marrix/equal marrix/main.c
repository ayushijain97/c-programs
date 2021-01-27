//
//  main.c
//  equal marrix
//
//  Created by Pushpa Jain on 22/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][3], b[3][3], i,j,flag=0;
    printf("enter matrix a");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("enter matrix b");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j]==b[i][j])
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
        printf("the matrix is equal");
    }
    
    else
    {
        printf("not equal");
    }
    
printf("\n");
}
