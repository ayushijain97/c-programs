//
//  main.c
//  array error
//
//  Created by Pushpa Jain on 18/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int n,max=32767,i;
    printf("Enter limit");
    scanf("%d",&n);
    int a[n],freq[max];
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<max;i++)
    {
        //printf("\n %d", a[i]);
        freq[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
        freq[a[i]]=freq[a[i]]+1;
    }
    for(i=0;i<max;i++)
    {
        if(freq[i] >0) {
            printf("\n %d count is %d",i,freq[i]);
        }
    }
    
    }
