//
//  main.c
//  hollow pyramid star pattern
//
//  Created by Pushpa Jain on 11/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*       *
       *   *
     *       *
   *           *
 * * * * * * * * *      */

void main()
{
    int limit, temp;
    printf("enter limit");
    scanf("%d", &limit);
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=limit-i; s++)
        {
            printf("  ");
        }
        temp=2*i-1;
        for(int j=1; j<=temp; j++)
        {
            if(j==1|| j==temp|| i==limit)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }printf("\n");
    }
}
