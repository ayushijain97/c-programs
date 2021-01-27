//
//  main.c
//  2d array diagonal
//
//  Created by Pushpa Jain on 18/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

//2d array diagonal and triangle
void main()
{
    int a[3][3],i,j;
    printf("enter matrix values");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("for diagonal");
    printf("\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
         if(i==j)
         {
             printf("%d",a[i][j]);
         }
            
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("for non diagonal");
    printf("\n");
    //for non diagonal
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i!=j)
            {
                printf("%d",a[i][j]);
            }
            
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
        printf("\n");
        printf("for off diagonal");
        printf("\n");
        
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(i+j==2)
                {
                    printf("%d",a[i][j]);
                }
                
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    printf("\n");
    printf("for upper tringle");
    printf("\n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<=j)
            {
                printf("%d",a[i][j]);
            }
            
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("for lower tringle");
    printf("\n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i>=j)
            {
                printf("%d",a[i][j]);
            }
            
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }


    
}
