//
//  main.c
//  3^2....using for loop
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>

void main()
{
    int limit;
    float sum=0,a1,a2,a3,a4;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        if(counter%2==0)
        {
            
            a3=(float)sqrt(counter);
            a2=(float)counter/a3;
            sum=sum+a2;
        }
        else
        {
            a4=counter*counter;
            a1=(float)pow(counter,counter)/a4;
            sum=sum+a1;
        }
    }
    printf("%f\n",sum);
}
