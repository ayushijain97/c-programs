//
//  main.c
//  reverse using do while
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int number,reverse=0,remainder;
    printf("the number is");
    scanf("%d",&number);
    do
    {
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    } while(number!=0);
    printf("the reverse is%d\n",reverse);

    
   
}
