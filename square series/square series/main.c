//
//  main.c
//  square series
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,b=1;
    printf("enter limit");
    scanf("%d",&a);
    while(b<=a)
    {
        printf("%d\n",b*b);
        b++;
    }
}
