//
//  main.c
//  number series2
//
//  Created by Pushpa Jain on 06/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/* 1
2 3 4
5 6 7 8 9
0 1 2 3 4 5 6
7 8 9 0 1 2 3 4 5*/

void main()
{
    int num,counter=1;
    printf("enter no of rows");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=2*i-1; j++)
        {
            printf("%d ",counter);
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
