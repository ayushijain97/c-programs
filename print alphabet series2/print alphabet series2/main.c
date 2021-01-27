//
//  main.c
//  print alphabet series2
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

/*    print A
            BB
            CCC
            DDDD */

void main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        for(int counter1=1; counter1<=counter; counter1++)
        {
            printf("%c",64+counter);
        }
        printf("\n");
    }
}
