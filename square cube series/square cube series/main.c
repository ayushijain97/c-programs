//
//  main.c
//  square cube series
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,b=1;
    printf("enter the limit");
    scanf("%d",&a);
    while(b<=a)
    {
        if(b%2==0)
        {
            printf("Cube of %d is %d\n",b,b*b*b);
        }
        else
        {
           printf("Square of %d is %d\n",b,b*b);
        }
        b++;
    }
}
