//
//  main.c
//  print star series
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

//Print ******....n
void main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        printf("*");
    }
    printf("\n");
}
