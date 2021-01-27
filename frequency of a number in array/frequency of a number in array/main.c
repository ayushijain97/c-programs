//
//  main.c
//  frequency of a number in array
//
//  Created by Pushpa Jain on 17/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int n;
    printf("enter your limit");
    scanf("%d",&n);
    int j,i,a[n],count,k,temp=n;
    printf("enter an array");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<temp; i++)
    {
        count=1;
        for(j=i+1; j<temp;)
        {
           if(a[i]==a[j])
           {
               count=count+1;
               for(k=j;k<temp-1;k++)
                   {
                       a[k]=a[k+1];
                   }
               temp--;
           }
            else
            {
                j++;
            }
        }
        printf("the frequecy of no %d is %d",a[i],count);
        printf("\n");
        
    }
}
