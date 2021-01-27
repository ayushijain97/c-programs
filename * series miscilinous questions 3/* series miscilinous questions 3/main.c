//
//  main.c
//  * series miscilinous questions 3
//
//  Created by Pushpa Jain on 11/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
         * * * * *
       *       *
     *       *
   *       *
 * * * * *      */


void main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=limit-i; s++)
        {
            printf("  ");
        }
        for(int j=1; j<=limit; j++)
        {
           if(j==1|| j==limit|| i==1|| i==limit)
           {
               printf(" *");
           }
            else
            {
                printf("  ");
            }
            
        
        }
        printf("\n");
        
    }
}
