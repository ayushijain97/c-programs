//
//  main.c
//  even odd through while loop
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,b=1;
    printf("enter a limit");
    scanf("%d",&a);
    while(b<=a)
    {
        if(b%2==0)
        {
            printf("%d\n",b);
        }
         b++;
    }
}
