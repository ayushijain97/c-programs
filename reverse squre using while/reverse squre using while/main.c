//
//  main.c
//  reverse squre using while
//
//  Created by Pushpa Jain on 31/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,a1,a2,a3,s1=0,s2=0,t;
    printf("enter a value");
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        a1=a%10;
        s1=s1*10+a1;
        a=a/10;
    }
    a2=s1*s1;
    while(a2!=0)
    {
        a3=a2%10;
        s2=s2*10+a3;
        a2=a2/10;
    }
    if(s2==(t*t))
    {
        printf("the no is same\n");
    }
    else
    {
        printf("not same\n");
    }
        
}
