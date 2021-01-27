//
//  main.c
//  * series 6
//
//  Created by Pushpa Jain on 06/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*    *
     ***
    *****
   *******
  *********
   *******
    *****
     ***
      *       */

void main()
{
    int limit,u,l,temp;
    printf("enter limit");
    scanf("%d",&limit);
    u=limit/2+1;
    l=limit/2;
    temp=l;
    for(int i=1; i<=u; i++)
    {
        for(int s=1; s<=u-i; s++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=1; i<=l; i++)
    {
            for(int s=1; s<=i; s++)
            {
                printf(" ");
            }
            for(int j=1; j<=2*temp-1; j++)
            {
                printf("*");
            }
            temp--;
            printf("\n");
        }
    
}
