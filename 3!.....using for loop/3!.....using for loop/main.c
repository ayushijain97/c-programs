//
//  main.c
//  3!.....using for loop
//
//  Created by Pushpa Jain on 03/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>
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
    int limit,factorial;
    float sum=0,factorial1;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(float counter=1; counter<=limit; counter++)
    {
        factorial=getFactorial(counter);
        factorial1=pow(limit,counter)/(float)factorial;
        sum=sum+factorial1;
    }
    printf("the sum is %f\n",sum);
}
