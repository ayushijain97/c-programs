//
//  main.c
//  array minimum
//
//  Created by Pushpa Jain on 16/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a[5], min;
    printf("enter an array");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(int i=1; i<5; i++ )
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("the min no is%d\n",min);
    
}
