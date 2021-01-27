//
//  main.c
//  numerical series 12
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//


#include <stdio.h>
/*
   123454321
   1234 4321
   123   321
   12     21
   1       1    */


void main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    
    int leftLimit = limit;
    int rightLimit = limit;
    int spaceCounter = 0;
    
    for(int i=1;i<=limit;i++)
    {
        // Left Part
        for(int j=1;j<=leftLimit;j++)
        {
            printf("%d",j);
        }
        
        // Space
        for(int s=1;s<=2*spaceCounter-1;s++)
        {
            printf(" ");
        }
        
        // Right Part
        for(int k=rightLimit;k>=1;k--)
        {
            if(i==1 && k==5)
                continue;
            printf("%d",k);
        }
        printf("\n");
        leftLimit--;
        rightLimit--;
        spaceCounter++;
    }
    
}



