//
//  main.c
//  print reverse string
//
//  Created by Pushpa Jain on 24/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void main()
{
    char a[10];
    int i,l;
    printf("enter string");
    scanf("%s",a);
    l= strlen(a);
    for(i=l-1; i>=0; i--)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    
}
