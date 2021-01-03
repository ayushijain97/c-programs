//
//  main.c
//  Functions
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>


/*int sum(int a, int b)
{
    int c = a + b;
    return c;
}*/

// This method will check if the number is even or odd
/*void isEvenOrOdd(int number)
{
    if(number % 2 == 0)
    {
        printf("\n %d is Even.", number);
    } else {
        printf("\n %d is Odd.", number);
    }
}*/

void main()
{
//    isEvenOrOdd(1);
//    isEvenOrOdd(2);
//    isEvenOrOdd(3);
//    isEvenOrOdd(4);
//    isEvenOrOdd(5);
//    isEvenOrOdd(6);
    
    // This is for loop example
//    for(int i=1;i<=100000;i++) {
//        isEvenOrOdd(i);
//    }
    
    // This is while loop example
    int counter = 2;
    while(counter <= 100)
    {
        printf("\n%d", counter);
        counter = counter + 2;
    }
}

