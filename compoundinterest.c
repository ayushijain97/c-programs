//
//  main.c
//  compound interest
//
//  Created by Pushpa Jain on 25/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>
void main()
{
    
    float p,r,t,ci,s,a;
    printf("enter principal,rate,time\t");
    scanf("%f%f%f",&p,&r,&t);
    s=(100+r)/100;
    a=pow(s,t);
    ci=p*a;
    printf("the compound interest is%f\n",ci);
}
