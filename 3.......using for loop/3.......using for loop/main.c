//
//  main.c
//  3.......using for loop
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit;
    float sum=0;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        sum=sum+1/(float)counter;
    }
    printf("%f\n",sum);
}
