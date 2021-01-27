//
//  main.c
//  search number in array
//
//  Created by Pushpa Jain on 16/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5],number,i;
    printf("Enter array values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number");
    scanf("%d",&number);
    for(i=0;i<5;i++)
    {
        if(number==a[i])
        {
            printf("%d",i+1);
            break;
        }
    }
    if(i==5)
    {
        printf("not found");
    }
}
