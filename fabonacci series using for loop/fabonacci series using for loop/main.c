//
//  main.c
//  fabonacci series using for loop
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit,first=0,second=1,temp ;
    printf("Enter a limit");
    scanf("%d",&limit);
    printf("%d ",second);
    for(int counter=0; counter<limit; counter++)
    {
        temp=first;
        first=second;
        second=temp+second;
        printf("%d ",second);
    }
}
