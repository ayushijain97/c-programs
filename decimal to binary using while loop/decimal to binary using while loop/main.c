//
//  main.c
//  decimal to binary using while loop
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>

void main()
{
    long int number,remainder,i=0,sum=0;
    printf("the no is");
    scanf("%ld",&number);
    
    while(number!=0)
    {
        
            remainder=number%2;
        sum=sum+remainder*pow(10,i);
             number=number/2;
        i++;
    }
    printf("%ld\n",sum);
    
    
}
