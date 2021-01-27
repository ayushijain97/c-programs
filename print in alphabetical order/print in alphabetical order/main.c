//
//  main.c
//  print in alphabetical order
//
//  Created by Pushpa Jain on 26/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<string.h>
/*
   Input:-deepak
   output:-adeekp  */

void main()
{
    int i,l,j;
    char a[20],temp;
    printf("Enter a string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
           if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
    }
    printf("%s",a);
    printf("\n");
    
}
