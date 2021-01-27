//
//  main.c
//  * series 10
//
//  Created by Pushpa Jain on 08/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
   *********
   **** ****
   ***   ***
   **     **
   *       *   */


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
            printf("*");
        }
        
        // Space
        for(int s=1;s<=2*spaceCounter-1;s++)
        {
            printf(" ");
        }
        
        // Right Part
        for(int k=1;k<=rightLimit;k++)
        {
            if(i==1 && k==1) continue;
            printf("*");
        }
        printf("\n");
        leftLimit--;
        rightLimit--;
        spaceCounter++;
    }
    
}
    


