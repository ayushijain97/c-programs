//
//  main.c
//  convert string in upper or lower case
//
//  Created by Pushpa Jain on 21/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char a[10];
    int i;
    printf("Enter a string");
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
    printf("\n");
}
