//
//  main.c
//  string same or not
//
//  Created by Pushpa Jain on 23/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char a[20],b[20];
    int i,flag=0;
    printf("Enter two string");
    scanf("%s%s",a,b);
    for(i=0;a[i]!=NULL&&b[i]!=NULL;i++)
    {
        if(a[i]==b[i])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("Same string");
    }
    else
    {
        printf("Not a same string");
    }
    printf("\n");
}
