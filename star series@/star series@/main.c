//
//  main.c
//  star series@
//
//  Created by Pushpa Jain on 12/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit;
    printf("enter limit");
    scanf("%d", &limit);
    for(int i=1; i<=limit; i++)
    {
        for(int counter=1; counter<=2*limit-i-1; counter++)
        {
            printf("*");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            if(j%2==0)
            {
                printf("*");
            }
            else
            {
                printf("%d",i);
            }
        }
        for(int counter1=1; counter1<=2*limit-i-1; counter1++)
        {
            printf("*");
        }
        printf("\n");
    }
}
