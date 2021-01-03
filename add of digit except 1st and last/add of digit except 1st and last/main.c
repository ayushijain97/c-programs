//
//  main.c
//  add of digit except 1st and last
//
//  Created by Pushpa Jain on 31/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

 void main()
{
    int a,a1,s1=0;
    printf("enter a value");
    scanf("%d",&a);
    //we want to remove last digit
    
    a=a/10;
    while(a>9)
    {
        a1=a%10;
        s1=s1+a1;
        a=a/10;
    }
    printf("sum is%d\n",s1);
}
