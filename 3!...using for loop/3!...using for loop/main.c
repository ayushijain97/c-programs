//
//  main.c
//  3!...using for loop
//
//  Created by Pushpa Jain on 03/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

int getFactorial(int number)
{
    int factorial=1;
    while(number>0)
    {
        factorial=factorial*number;
        number--;
    }
    return factorial;
    
}
void main()
{
    int limit,factorial=1;
    float counter1,sum=0;
    printf("Enter a limit");
    scanf("%d",&limit);
    for (int counter=1; counter<=limit; counter++)
    {
        factorial=getFactorial(counter);
        sum=sum+counter/(float)factorial;
    }
    printf("the sum is %f\n",sum);
}
