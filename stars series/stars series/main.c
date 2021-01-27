//
//  main.c
//  stars series
//
//  Created by Pushpa Jain on 10/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*     
      *******
       *****
        ***
         *
        ***
       *****
      *******    */


void main()
{
    int limit,lowerlimit,upperlimit,ulimit,llimit;
    printf("Enter limit");
    scanf("%d",&limit);
    upperlimit=limit/2+1;
    lowerlimit=limit/2;
    ulimit=upperlimit;
    llimit=lowerlimit;
    for(int i=1;i<=upperlimit;i++)
    {
        for (int s=1;s<=i-1;s++)
        {
            printf(" ");
        }
        for (int j=1;j<=2*ulimit-1;j++)
        {
            printf("*");
        }
        printf("\n");
        ulimit--;
    }
    for(int i=2;i<=lowerlimit+1;i++)
    {
        for(int s=1;s<=llimit-1;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
        llimit--;
    }
    
}
