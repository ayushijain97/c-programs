//
//  main.c
//  string length
//
//  Created by Pushpa Jain on 21/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char a[10];
    int i,l=0;
    printf("enter a string");
    scanf("%s",a);
    for(i=0; a[i]!=NULL; i++)
    {
        l=l+1;
    }
    printf("the length of string %d",l);
    printf("\n");
    
}
