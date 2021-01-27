//
//  main.c
//  3^2)....using for loop
//
//  Created by Pushpa Jain on 03/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>
/*     
   1^1/1^2+2/2^1/2+3^3/3^2+.......n  */

void main()
{
    int limit,power;
    float counter1,sum=0,counter2;
    printf("Enter a limit");
    scanf("%d",&limit);
    for (float counter=1; counter<=limit; counter++ )
    {
        if((int)counter%2==0)
        {
            counter1=counter/sqrt(counter);
            sum=sum+counter1;
        }
        else
        {
            power=pow(counter,counter);
            counter2=counter*counter;
            counter1=power/counter2;
            sum=sum+counter1;
            
        }
    }
    printf("the sum is %f",sum);
}
