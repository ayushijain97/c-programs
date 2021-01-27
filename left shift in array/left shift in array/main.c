//
//  main.c
//  left shift in array
//
//  Created by Pushpa Jain on 16/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5], temp,i;
    printf("enter an array");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=0; i<4; i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
    for(i=0; i<5; i++)
    {
        printf("%d",a[i]);
    }

    
}
