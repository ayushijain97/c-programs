//
//  main.c
//  blind loop
//
//  Created by Pushpa Jain on 30/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,c=0;
    printf("enter no");
    scanf("%d",&a);
    if(a==0)
    {
        c=1;
    }
    while(a)
    {
        a=a/10;
        c++;
        
    }
    printf("no of digit%d\n",c);
}
