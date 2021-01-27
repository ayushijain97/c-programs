//
//  main.c
//  number series11
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
    56789
     678
      7     */

void main()
{
    int limit,counter=1,upper,lower,temp,temp1,counter1;
    printf("Enter limit");
    scanf("%d",&limit);
    upper=limit/2+1;
    lower=limit/2;
    temp1=upper;
    temp=lower;
    for(int i=1;i<=upper;i++)
    {
        for(int s=1;s<=upper-i;s++)
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
    for(int i=1;i<=lower;i++)
    {
        for(int s=1;s<=lower-temp+1;s++)
        {
            printf(" ");
        }
        counter1=temp1+1;
        for(int j=1;j<=2*temp-1;j++)
        {
            printf("%d",counter1);
            if(counter1==9)
            {
                counter1=0;
            }
            else
            {
                counter1++;
            }
            
        }
        temp--;
        temp1++;
        printf("\n");
    }
    
    
}
