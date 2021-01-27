//
//  main.c
//  print * series 3
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

/*print  ******
         ******
         ******
         ******
         ******
         ******  */
void main()
{
    int limit;
    printf("enter a limit");
    scanf("%d",&limit);
    for(int counter1=1; counter1<=limit; counter1++)
    {
        for(int counter2=1; counter2<=limit; counter2++)
        {
            printf("*");
        }
        printf("\n");
    }
}



 
