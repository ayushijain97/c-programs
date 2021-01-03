//
//  main.c
//  add digit using while
//
//  Created by Pushpa Jain on 30/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,a1,s=0;
    printf("enter a no");
    scanf("%d",&a);
    while(a>0||a<0)
    {
        a1=a%10;
        s=a1+s;
        a=a/10;
    }
    printf("%d\n",s);
}
