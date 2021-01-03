//
//  main.c
//  palindrome or not using while
//
//  Created by Pushpa Jain on 31/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,a1,s1=0,t;
    printf("enter a value");
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        a1=a%10;
        s1=s1*10+a1;
        a=a/10;
    }
    if(s1==t)
    {
        printf("palidrome\n");
    }
    else
    {
        printf("not palidrome\n");
    }
}
