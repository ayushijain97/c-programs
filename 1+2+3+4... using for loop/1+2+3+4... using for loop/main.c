//
//  main.c
//  1+2+3+4... using for loop
//
//  Created by Pushpa Jain on 03/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit,sum=0;
    printf("Enter a limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        sum=sum+counter;
    }
    printf("%d\n",sum);
}
