//
//  main.c
//  Determinant
//
//  Created by Pushpa Jain on 21/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[3][3],i,j,d=0,sum=0;
    printf("Enter values of matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(j=0;j<3;j++)
        {
            i=0;
        
            if(j==0)
            {
                d=a[i+1][j+1]*a[i+2][j+2]-a[i+1][j+2]*a[i+2][j+1];
            }
            else if(j==1)
            {
                d=a[i+1][j-1]*a[i+2][j+1]-a[i+1][j+1]*a[i+2][j-1];
            }
            else if(j==2)
            {
                d=a[i+1][j-2]*a[i+2][j-1]-a[i+1][j-1]*a[i+2][j-2];
                
            }
            sum=sum+d*a[0][j];
            
        }
    printf("the sum is %d",sum);
    printf("\n");
    
}
