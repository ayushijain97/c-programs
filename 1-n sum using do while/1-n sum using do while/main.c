//
//  main.c
//  1-n sum using do while
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int limit,sum=0,counter=1;
    printf("enter limit");
    scanf("%d",&limit);
    do
    {
        sum=sum+counter;
        counter++;
        
    } while(counter<=limit);
    
    printf("the sum is %d",sum);
}
