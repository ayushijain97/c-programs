//
//  main.c
//  n!).....using for loop
//
//  Created by Pushpa Jain on 03/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

/*     1/n!+2/n!+3/n!+4/n!+5/n!.......n/n!  */

void main()
{
    int limit,factorial=1;
    float counter2,sum=0;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(int counter1=1; counter1<=limit; counter1++)
    {
        factorial=factorial*counter1;
    }
    
    for(float counter=1; counter<=limit; counter++)
    {
        counter2=counter/factorial;
        sum=sum+counter2;
    }
    printf("the sum is %f\n",sum);
}
