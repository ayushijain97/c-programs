//
//  main.c
//  numerical series
//
//  Created by Pushpa Jain on 07/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*   1234567
      23456
       345
        4       */

void main()
{
    int limit;
    printf("Enter limit");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for(int s=1;s<=i-1 ;s++)
        {
            printf(" ");
        }
        for(int j=i;j<=2*limit-i;j++)
        {
            printf("%d",j);
            
        }
        
        printf("\n");
    }
    
}
