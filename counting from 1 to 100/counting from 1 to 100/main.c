//
//  main.c
//  counting from 1 to 100
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int i,a=70;
    
    printf("enter limit");
    scanf("%d",&i);
    while(a>=1)
    {
        printf("%d\n",a);
        a--;
    }
}
