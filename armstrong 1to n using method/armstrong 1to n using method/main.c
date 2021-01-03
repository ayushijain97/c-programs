//
//  main.c
//  armstrong 1to n using method
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void checkArmStrongOrNot(int number)
{
    int temp=number,counter1,s1=0;
    while(temp!=0)
    {
        counter1=temp%10;
        s1=s1+counter1*counter1*counter1;
        temp=temp/10;
        
    }
    if(s1==number)
    {
        printf("%d is armstrong\n",number);
    }
    else
    {
        printf("%d is not armstrong\n",number);
    }
}

void main()
{
    int limit,counter=0;
    printf("enter limit");
    scanf("%d",&limit);
    while(counter<limit)
    {
      checkArmStrongOrNot(counter);
        counter++;
    }
}
