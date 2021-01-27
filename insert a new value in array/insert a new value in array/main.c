//
//  main.c
//  insert a new value in array
//
//  Created by Pushpa Jain on 16/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

//  insert a new value in an array by user and position will also be given by user

void main()
{
    int a[10], n,p;
    printf("enter an array");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter a no and position");
    scanf("%d%d",&n,&p);
    for(int i=9; i>=p; i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=n;
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}



