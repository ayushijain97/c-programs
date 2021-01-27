//
//  main.c
//  reverse a string
//
//  Created by Pushpa Jain on 24/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char a[10], temp;
    int i,l;
    printf("enter string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0; i<l/2; i++)
    {
        temp=a[l-i-1];
        a[l-i-1]=a[i];
        a[i]=temp;
    }
    printf("%s",a);
    printf("\n");
}
