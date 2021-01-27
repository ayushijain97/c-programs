//
//  main.c
//  merging of array
//
//  Created by Pushpa Jain on 16/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5], b[5],c[10],i,j,k;
    printf("enter 1st array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd array");
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0,j=0,k=0; k<10; k++)
    {
      if(a[i]>b[j])
      {
          c[k]=b[j];
          j++;
      }
        else
        {
            c[k]=a[i];
            i++;
        }
        if(i==5||j==5)
        {
            k++;
            break;
        }
    }
    while(i<5)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<5)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(i=0; i<10; i++)
    {
        printf("%d", c[i]);
    }
    
}
