//
//  main.c
//  prime or not
//
//  Created by Pushpa Jain on 31/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

// This is a method definition
int checkIfPrimeOrNotWithoutFlag(int number)
{ // checkIfPrimeOrNot method start
    
    int counter = 2;
    while (counter < number)
    {
        if(number % counter == 0)
        {
            // I am not a prime number.
            return 0;
        }
        counter++;
    }
    // We are 100% sure this is now only a prime number.
    return 1;
    
} // checkIfPrimeOrNot method end

// This is another method definition
void checkIfPrimeOrNotWithFlag(int number)
{ // Method start
    
    // Our Assumption ---> 1 represent Prime Number, 0 represent Non-Prime Number
    // And we are also assuming every number is prime and then in the if block we
    // will validate that our assumption was correct or not.
    int flag = 1;
    
    int counter = 2;
    while (counter < number)
    {
        if(number % counter == 0)
        {
            // I am not a prime number.
            flag = 0;
            break;
        }
        counter++;
    }
    
    if(flag == 0)
    {
        printf("\n %d is not a prime number", number);
    }
    else
    {
        printf("\n %d is a prime number", number);
    }
    
} // Method end

// This is method definition
void main()
{ // main() Method Start
    
    /* Check if number is prime or not */
    int number;
    
    printf("Enter number to be checked if prime or not");
    scanf("%d", &number);
    
//    // This is a method calling.
//    int status = checkIfPrimeOrNotWithoutFlag(number);
//    
//    // Our Assumption ---> 1 represent Prime Number, 0 represent Non-Prime Number
//    if(status == 1)
//    {
//        printf("%d is a prime number", number);
//    }
//    else
//    {
//        printf(" %d is not a prime number", number);
//    }

    
//    checkIfPrimeOrNotWithFlag(number);
    
    int counter = 1;
    
    while (counter < number) {
        checkIfPrimeOrNotWithFlag(counter);
        counter++;
    }
    
} // main() Method end.
















