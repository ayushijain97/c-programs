//
//  main.c
//  number series3
//
//  Created by Pushpa Jain on 06/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int num,counter=1;
    printf("Enter no of rows");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int s=1;s<=num-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%d",counter);
            if(counter==9)
            {
                counter=0;
            }
            else
            {
                counter++;
            }
        }
        printf("\n");
    }
}
