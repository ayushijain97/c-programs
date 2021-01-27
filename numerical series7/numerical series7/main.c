//
//  main.c
//  numerical series7
//
//  Created by Pushpa Jain on 07/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*    1
     222
    33333
   4444444
    11111
     222
      3     */

void main()
{
    int limit,lower,upper,temp;
    printf("Enter limit");
    scanf("%d",&limit);
    upper=limit/2+1;
    lower=limit/2;
    temp=lower;
    for(int i=1;i<=upper;i++)
    {
        for(int s=1;s<=upper-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    for(int i=1;i<=lower;i++)
    {
        for(int s=1;s<=lower-temp+1;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*temp-1;j++)
        {
            printf("%d",i);
        }
        temp--;
        printf("\n");
    }
    
    
}
