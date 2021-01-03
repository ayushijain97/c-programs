//
//  main.c
//  prime number using while loop1
//
//  Created by Pushpa Jain on 01/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int number,counter=2,flag=1,i=2;
    printf("the number limit is ");
    scanf("%d",&number);
    
    // This loop is to check every number from 1 to n
    while(counter<=number)
    {
        // Reset for every number.
        i = 2;
        flag = 1;
        // This is to check that if a number is prime or not
        // by checking the remainder of that number from 2 to n-1;
        while(i<counter)
        {
            if(counter%i==0)
            {
                flag=0;
                break;
            }
            i++;
        }
        if(flag==0)
        {
            printf("%d is not prime\n",counter);
        }
        else
        {
            printf("%d is prime\n",counter);
        }
        counter++;
    }
    
}
