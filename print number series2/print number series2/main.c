//
//  main.c
//  print number series2
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/* print 1
         22
         333
         4444   */
void main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
