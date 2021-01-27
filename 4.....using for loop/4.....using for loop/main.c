//
//  main.c
//  4.....using for loop
//
//  Created by Pushpa Jain on 03/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit;
    float counter1,sum=0,counter2;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(float counter=1; counter<=limit; counter++ )
    {
        if((int)counter%2==0)
        {
            counter1=1/counter;
            sum=sum+counter1;
        }
        else
        {
            counter2=counter*counter;
            counter1=1/counter2;
            sum=sum+counter1;
        }
    }
    printf("the sum is %f\n",sum);
}
