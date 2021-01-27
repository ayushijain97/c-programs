//
//  main.c
//  2nd max values array
//
//  Created by Pushpa Jain on 18/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5], i,max, secondmax;
    printf("enter an array");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    secondmax=-1;
    for(i=1; i<5; i++)
    {
      if(a[i]<max)
      {
         if(a[i]>secondmax)
         {
             secondmax=a[i];
         }
      }
      else
      {
          secondmax=max;
          max=a[i];
      }
    }
    printf("%d",secondmax);
}
