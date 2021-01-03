//
//  main.c
//  1-n using for loop
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int limit;
    printf("enter a limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        printf("%d\n",counter);
    }
}
