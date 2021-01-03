//
//  main.c
//  tringle
//
//  Created by Pushpa Jain on 24/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter sides of tringle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c)
        printf("the tringle is equilateral\n");
        else if((a==b&&a!=c) || (a==c&&a!=b) || (b==c&&b!=a))
            printf("the tringle is isoceles\n");
            else
                printf("the tringle is scalene\n");
}

