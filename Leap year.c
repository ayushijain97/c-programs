//
//  main.c
//  ifelse
//
//  Created by Pushpa Jain on 21/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int a;
    printf("enter year");
    scanf("%d",&a);
    
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400==0)
                {
                     printf("this year is a leap year");
                }
            else{
                printf("this year is not a leap year");
                 }
         }
        else
         {
             printf("this is a leap year");
         }
            
        
     }

   else
     {
        printf("this year is not leap year");
     }
}


