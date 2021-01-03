//
//  main.c
//  counting with sign
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,b=1;
    printf("enter limit only upto %d", 100);
    scanf("%d",&a);
    while(b<=a)
    {
        if(b == 1)
        { // For this condition we don't want any sign.
            printf("%d", b);
        }
        else if(b%2==0)
        {
            printf("+%d",b);
        }
        else
        {
            printf("-%d",b);
        }
        b++;
    }
}
