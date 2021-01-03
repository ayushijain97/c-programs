//
//  main.c
//  print table using while loop
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,i=1;
    printf("enter a value");
    scanf("%d",&a);
    while(i<=10)
          {
              printf("%d*%d=%d\n",a,i,i*a);
              i++;
          }
}
