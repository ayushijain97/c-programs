//
//  main.c
//  1+2-3+4 using do while
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int number=1, limit;
    printf("enter limit");
    scanf("%d",&limit);
    do
    {
        
        if(number==1)
        {
        printf("%d",number);
        }
        else if(number%2==0)
        {
            printf("+%d",number);
        }
       else
       {
           printf("-%d",number);
       }
        number++;
    } while(number<=limit);
    printf("\n");
}


