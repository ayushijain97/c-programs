//
//  main.c
//  numerical series9
//
//  Created by Pushpa Jain on 07/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
      1
     234
    34567
   4567890
  567890123   */


void main()
{
    int limit,counter=1;
    printf("Enter limit");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for(int s=1;s<=limit-i;s++)
        {
            printf(" ");
        }
        counter=i;
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%d",counter);
            if(counter==9)
            {
                counter=0;
            }
            else
            {
              counter++;
            }
            
        }
        printf("\n");
    }
}
