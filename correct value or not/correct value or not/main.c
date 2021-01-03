//
//  main.c
//  correct value or not
//
//  Created by Pushpa Jain on 26/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int p,q,r,s;
    printf("Enter four values:-");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if(p%2==0&&r>0&&s>0)
    {
        if(q>r&&s>p)
        {
            if(r+s>p+q)
            {
                printf("correct values\n4");
            }
            else
            {
                printf("wrong values");
            }
        }
        else{
            printf("wrong values");
        }
        
    }
    else
    {
        printf("wrong value");
    }
}
