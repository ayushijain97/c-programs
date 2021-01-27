//
//  main.c
//  concatenate two string
//
//  Created by Pushpa Jain on 23/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char a[20],b[20];
    int i,j;
    printf("Enter two string");
    scanf("%s%s",a,b);
    for(i=0,j=0;b[j]!=NULL;i++)
    {
        if(a[i]==NULL)
        {
            a[i]=b[j];
            j++;
        }
    }
    a[i]=NULL;
    printf("%s",a);
    printf("\n");
    
}
