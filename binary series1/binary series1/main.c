//
//  main.c
//  binary series1
//
//  Created by Pushpa Jain on 06/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*     1
      010
     10101
    0101010
   101010101  */


void main()
{
    int limit;  //limit=no of rows
    printf("enter limit");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=limit-i; s++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("%d",1);
                }
                else
                {
                    printf("%d",0);
                }
            }
            else
            {
                if(j%2==0)
                {
                    printf("%d",0);
                }
                else
                {
                    printf("%d",1);
                }
            }
        }
        printf("\n");
    }
}
