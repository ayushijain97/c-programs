//
//  main.c
//  first and last digit addition
//
//  Created by Pushpa Jain on 31/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int a,s1,a1,a2=0;
    printf("Enter a value");
    scanf("%d",&a);
    a1=a%10;
    a=a/10;
    while(a!=0)
    {
        a2=a%10;
        a=a/10;
    }
    s1=(a1+a2);
    printf("%d\n",s1);
}
