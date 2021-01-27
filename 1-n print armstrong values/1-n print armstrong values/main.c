//
//  main.c
//  1-n print armstrong values
//
//  Created by Pushpa Jain on 05/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

int checkArmstrong(int number)
{
    int remainder, sum=0;
    while(number>0)
    {
        remainder=number%10;
        sum=sum+(remainder*remainder*remainder);
        number=number/10;
    }
    return sum;
}

void main()
{
    int limit,counter=1,status;
    printf("enter limit");
    scanf("%d",&limit);
    printf("Armstrong values are\n");
    while(counter<=limit)
    {
        status=checkArmstrong(counter);
        if(status==counter)
        {
            printf("%d ",counter);
        }
        else
        {
            
        }
        counter++;
    }
    printf("\n");
}
