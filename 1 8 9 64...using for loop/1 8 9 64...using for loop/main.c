//
//  main.c
//  1 8 9 64...using for loop
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        if(counter%2==0)
        {
            printf("%d ",counter*counter*counter);
        }
        else
        {
            printf("%d ",counter*counter);
        }
    }
}
