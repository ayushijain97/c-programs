//
//  main.c
//  print prime number from 1to n
//
//  Created by Pushpa Jain on 05/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

int checkPrimeOrNot(int number)
{
    int counter=2;
    while(counter<number)
    {
        if(number%counter==0)
        {
            return 0;
            break;
        }
        counter++;
    }
    return 1;
}
void main()
{
    int limit,cntr=2,status;
    printf("Enter a limit");
    scanf("%d",&limit);
    printf("prime numbers are:- ");
    while(cntr<=limit)
    {
        status=checkPrimeOrNot(cntr);
        if(status==0)
        {
            
        }
        else
        {
            printf("%d ",cntr);
        }
        cntr++;
    }
    printf("\n");
}
