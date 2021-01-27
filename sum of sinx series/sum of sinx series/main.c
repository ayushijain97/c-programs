//
//  main.c
//  sum of sinx series
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>

//x^1/1!-x^3/3!+x^5/5!-x^7/7!.........n

int factorial(int factorial)
{
    int f1=1;
    while(factorial>0)
    {
        f1=f1*factorial;
        factorial--;
    }
    return f1;
}
void main()
{
    int limit;
    int counter1=1,counter2=1;
    float sum=0,f2;
    printf("enter limit");
    scanf("%d",&limit);
    while(counter1<=limit)
    {
        f2=(float)factorial(counter2);
        if(counter1%2==0)
        {
            sum=sum-pow(limit,counter2)/f2;
        }
        else
        {
            sum=sum+pow(limit,counter2)/f2;
        }
        counter1++;
        counter2=counter2+2;
        
    }
    printf("%f\n",sum);
}
