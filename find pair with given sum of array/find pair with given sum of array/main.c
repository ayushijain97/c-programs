//
//  main.c
//  find pair with given sum of array
//
//  Created by Pushpa Jain on 22/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int i,j,a[6],sum;
    printf("Enter array values");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter sum");
    scanf("%d",&sum);
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[i]+a[j]==sum)
            {
            printf("The pairs are (%d,%d)",a[i],a[j]);
            printf("\n");
            }
        }
    }
}
