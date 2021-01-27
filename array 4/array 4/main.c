//
//  main.c
//  array 4
//
//  Created by Pushpa Jain on 14/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5],b[5],c[5],i;
    printf("Enter values of a");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter values of b");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The sum is:- ");
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}
