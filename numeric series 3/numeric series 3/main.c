//
//  main.c
//  numeric series 3
//
//  Created by Pushpa Jain on 07/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/* 7654321
    65432
     543
      4      */


void main()
{
    int limit;
    printf("the limit is");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=i-1; s++)
        {
            printf(" ");
        }
        for(int j=2*limit-i; j>=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
