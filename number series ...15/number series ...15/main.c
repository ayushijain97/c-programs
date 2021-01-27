//
//  main.c
//  number series ...15
//
//  Created by Pushpa Jain on 09/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*      1
       212
      32123
     4321234 */

void main()
{
    int limit, leftlimit,rightLimit;
    printf("enter limit");
    scanf("%d",&limit);
    leftlimit=1;
    rightLimit=1;
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=limit-i; s++)
        {
            printf(" ");
        }
        for(int j=leftlimit; j>=1 ; j--)
        {
            printf("%d",j);
        }
        for(int k=1; k<=rightLimit; k++)
        {
            if(k==1)
            {
                continue;
            }
            printf("%d",k);
        }
        leftlimit++;
        rightLimit++;
        printf("\n");
    }
}
