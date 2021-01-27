//
//  main.c
//  copy string
//
//  Created by Pushpa Jain on 21/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char a[10], b[10];
    int i;
    printf("enter a string");
    scanf("%s",a);
    for(i=0; a[i]!=NULL; i++)
    {
        b[i]=a[i];
    }
    b[i]=NULL;
    printf("%s",b);
    printf("\n");
}
