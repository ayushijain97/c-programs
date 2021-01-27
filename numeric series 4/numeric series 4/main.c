//
//  main.c
//  numeric series 4
//
//  Created by Pushpa Jain on 07/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/* 33333
    222
     1    */


void main()
{
    int limit, temp;
    printf("enter limit");
    scanf("%d",&limit);
    temp=limit;
    for(int i=limit; i>=1; i--)
    {
        for(int s=1; s<=limit-i; s++)
        {
            printf(" ");
        
        }
        
        for(int j=1; j<=2*temp-1; j++)
        {
            printf("%d",i);
        }
        temp--;
        printf("\n");
    }
}
