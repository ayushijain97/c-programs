//
//  main.c
//  5^2.......using for loop
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit;
    float sum=0,a1;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        if(counter%2==0)
        {
            sum=sum+1/(float)counter;
        }
        else
        {
            a1= counter*counter;
            sum=sum+1/a1;
            
        }
    }
    printf("the sum is%f\n",sum);
}
