//
//  main.c
//  factorial using while
//
//  Created by Pushpa Jain on 30/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int b,p,i=1,res=1;
    printf("Enter base and power");
    scanf("%d%d",&b,&p);
    while(i<=p)
    {
        res=res*b;
        i++;
    }
    printf("the result is %d\n",res);

}
