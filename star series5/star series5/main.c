//
//  main.c
//  star series5
//
//  Created by Pushpa Jain on 06/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*     *******
        *****
         ***
          *           */


void main()
{
    int limit,temp;
    printf("enter limit");
    scanf("%d",&limit);
    temp=limit;
    for(int i=1; i<=limit; i++)
    {
        for(int s=1; s<=i-1; s++)
        {
            printf(" ");
            
        }
        for(int j=1; j<=2*temp-1; j++)
        {
            printf("*");
            
        }
        temp--;
        printf("\n");
        
    }

}
