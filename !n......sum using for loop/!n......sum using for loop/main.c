//
//  main.c
//  !n......sum using for loop
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
      int limit, factorial=1,temp;
   float sum=0;
    printf("enter limit");
    scanf("%d",&limit);
   temp=limit;
   while(limit!=0)
   {
       factorial=factorial*limit;
       limit--;
   }
   for(int counter=1; counter<=temp; counter++)
    {
        sum=sum+(float)counter/factorial;
    }
    printf("%f\n",sum);
}
