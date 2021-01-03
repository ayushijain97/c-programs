//
//  main.c
//  sum of even and odd digit using while
//
//  Created by Pushpa Jain on 30/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,a1,s1=0,s2=0;
    printf("enter a no");
    scanf("%d",&a);
    while(a!=0)
    {
        a1=a%10;
        if(a1%2==0)
        {
            s1=a1+s1;
        }
        else
        {
            s2=a1+s2;
        }
        a=a/10;
    }
    printf("sum of even digit is%d\n sum of odd digit is%d\n",s1,s2);
}
