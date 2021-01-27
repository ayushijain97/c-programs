//
//  main.c
//  majority element of array
//
//  Created by Pushpa Jain on 22/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[6],i,j,count=1,temp=0,k,size,flag=0;
    printf("Enter an array");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        count=1;
        for(j=i+1;j<6;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
                temp=a[i];
                for(k=j;k<6;k++)
                {
                    a[k]=a[k+1];
                }
            }
             }
        size=6;
        if(count>size/2)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
        
    }
    if(flag==1)
    {
    printf("majority element is %d",temp);
    printf("\n");
    }
    else
    {
    printf("no majority element");
    printf("\n");
    }
}
