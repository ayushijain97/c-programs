//
//  main.c
//  armstrong 1to n
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit,counter=0,s1=0,counter1,temp;
    printf("the limit is");
    scanf("%d",&limit);
    while(counter<limit)
    {
        temp=counter;
        while(temp!=0)
        {
    
            counter1=temp%10;
            s1=s1+counter1*counter1*counter1;
            temp=temp/10;
            
        }
        if(s1!=counter)
        {
            printf("%d is not armstrong\n",counter);
        }
        else
        {
            printf("%d is armstrong\n",counter);

        }
        counter++;
    }
}
