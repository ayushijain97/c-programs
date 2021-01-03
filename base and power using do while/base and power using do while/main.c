//
//  main.c
//  base and power using do while
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int base, power, s1=1,counter=1;
    printf("base and power is");
    scanf("%d%d",&base,&power);
    do
    {
        s1=s1*base;
        counter++;
    }while(counter<=power);
    printf("the value is %d",s1);
}
