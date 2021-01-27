//
//  main.c
//  array 3
//
//  Created by Pushpa Jain on 14/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5],i,sum=0;
    printf("Enter values in array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the sum of array:- ");
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    printf("\n");
}
