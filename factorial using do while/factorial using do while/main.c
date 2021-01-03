//
//  main.c
//  factorial using do while
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int number, counter=1,factorial=1;
    printf("the number is");
    scanf("%d",&number);
    do
    {
        factorial=factorial*counter;
        counter++;
    }while(counter<=number);
    printf("the factorial is %d",factorial);
        
    
}
