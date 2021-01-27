//
//  main.c
//  !3.....sum using for loop
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

int getfactorial(int counter)
{ int factorial=1;
    while(counter!=0)
    {
    factorial=factorial * counter;
        counter--;
    }
    return factorial;
}
void main()
{
    int limit;
    float sum=0,factorial;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        factorial =(float)getfactorial(counter);
        sum=sum+1/factorial;
    }
    printf("the sum is %f\n",sum);
}
