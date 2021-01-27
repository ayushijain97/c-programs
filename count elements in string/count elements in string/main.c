//
//  main.c
//  count elements in string
//
//  Created by Pushpa Jain on 23/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char a[20];
    int i,count1=0 , count2=0, count3=0, count4=0;
    printf("enter string");
    scanf("%s",a);
    for(i=0; a[i]!=NULL; i++)
    {
      if(a[i]>=65 && a[i]<=90)
      {
          count1=count1+1;
      }
        else if(a[i]>=97 && a[i]<=122)
        {
            count2=count2+1;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            count3=count3+1;
        }
        else
        {
            count4=count4+1;
        }
    }

    printf("The capital letters are %d",count1);
    printf("\n");
    printf("The small letters are %d",count2);
    printf("\n");
    printf("The digits are %d",count3);
    printf("\n");
    printf("The others elements are %d",count4);
    printf("\n");
    
}
