//
//  main.c
//  factorial
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
    int number,factorial;
    printf("Enter a number");
    scanf("%d",&number);
    factorial= getFactorial(number);
    printf("%d\n",factorial);
    
    
}
