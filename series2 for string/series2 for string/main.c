//
//  main.c
//  series2 for string
//
//  Created by Pushpa Jain on 26/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
 computer
 omputer
 mputer
 puter
 uter
 ter
 er
 r
*/

void main()
{
    int i, j,l;
    char a[20];
    printf("enter string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        for(j=i; j<l; j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
}
