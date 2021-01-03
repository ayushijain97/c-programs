//
//  main.c
//  1-n sum using for loop
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit,sum=0;
    printf("enter a limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        sum=sum+counter;
    }
    printf("the sum is%d\n",sum);
}
