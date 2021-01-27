//
//  main.c
//  palindrome or not
//
//  Created by Pushpa Jain on 23/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<string.h>

void main()
{
    char a[20];
    int l,i,flag=0;
    printf("Enter a string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]==a[l-i-1])
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
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    printf("\n");
}
