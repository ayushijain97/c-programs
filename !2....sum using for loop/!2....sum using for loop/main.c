//
//  main.c
//  !2....sum using for loop
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>

int getFactorial(int counter)
{
    int Factorial=1;
while(counter!=0)
{
    Factorial=Factorial*counter;
    counter--;
}
    return Factorial;
}

void main()
{
    int limit;
    float sum=1, Factorial;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        Factorial=getFactorial(counter);
        sum=sum+(float)pow(limit,counter)/Factorial;
    }
    printf("%f",sum);
}
