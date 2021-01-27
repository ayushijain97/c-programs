//
//  main.c
//  HCF
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,b,t,counter;
    printf("enter 2 nos");
    scanf("%d%d",&a,&b);
    if(a>b)
        t=b;
    else
        t=a;
    counter=t;
    while(counter>=1)
    {
        if(a%counter==0&&b%counter==0)
        {
            printf("%d\n",counter);
            break;
        }
        counter--;
    
    }
}
