//
//  main.c
//  stars series1
//
//  Created by Pushpa Jain on 10/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*    
    * * * * * * *
    * *       * *
    *   *   *   *
    *     *     *
    *   *   *   *
    * *       * *
    * * * * * * *    */

void main()
{
    int limit;
    printf("enter limit");
    scanf("%d", &limit);
    for(int i=1; i<=limit; i++)
    {
        for(int j=1; j<=limit; j++)
        {
            if(i==1||j==1||i==limit||j==limit||j==i||j==limit-i+1)
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
