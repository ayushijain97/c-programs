//
//  main.c
//  remove duplicate from array
//
//  Created by Pushpa Jain on 17/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
//remove duplicate number from array
void main()
{
    int n;
    printf("Enter the limit");
    scanf("%d", &n);
    int a[n],i,k,j, temp=n;
    printf("enter an array");
    for(i=0; i<n;i++)
        
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<temp; i++)
    {
        for(j=i+1; j<temp;)
        {
            if(a[i]==a[j])
            {
                for(k=j; k<temp-1; k++)
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
    }
    
    for(i=0; i<temp; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
}
