//
//  main.c
//  e^x sum
//
//  Created by Pushpa Jain on 11/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/*  sum of e^x= 1+x^1/1!+x^2/2!+x^3/3!+x^4/4!......n   */
int factorial(int number)
{
    int factorial=1;
    while(number>0)
    {
        factorial =factorial*number;
        number--;
        }
    return factorial;
}

void main()
{
    int limit;
    float result,sum=1,power;
    printf("Enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit;counter++)
    {
        result=factorial(counter);
        power=pow(limit,counter);
        sum=sum+power/result;
        }
    printf("%f ",sum);
}
