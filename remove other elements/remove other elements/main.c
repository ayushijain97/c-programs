//
//  main.c
//  remove other elements
//
//  Created by Pushpa Jain on 27/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>


void main()
{
    char a[10];
    int i,j,count=0;
    printf("Enter array values");
    for(i=0;i<10;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if((a[i]>=65&&a[i]<=90) || (a[i]>=97&&a[i]<=122))
        {
            count++;
            
        }
        else
        {
            printf("invalid value is %c\n", a[i]);
            for(j=i;j<10;j++)
            {
                a[j]=a[j+1];
                //a[i]=a[j];
            }
        }
    }
    
        for(i=0;i<count;i++)
        {
            printf("%c",a[i]);
        }
    printf("\n");

}
