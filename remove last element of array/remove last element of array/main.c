//
//  main.c
//  remove last element of array
//
//  Created by Pushpa Jain on 16/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
//remove last element of ARRAY ANd shift back again
void main()
{
    int a[10],position;
    printf("enter an array");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter position");
    scanf("%d",&position);
    for(int i=position; i<=9; i++ )
    {
        a[i-1]=a[i];
    }
    for(int i=0; i<10; i++)
    {
        printf("%d" , a[i]);
    }
}
