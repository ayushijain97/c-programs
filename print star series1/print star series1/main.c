//
//  main.c
//  print star series1
//
//  Created by Pushpa Jain on 04/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
//*
//*
//*
//* upto n prinnt it
void main()
{
    int limit;
    printf("enter a limit");
    scanf("%d",&limit);
    for(int counter=1; counter<=limit; counter++)
    {
        printf("*\n");
    }
    
}
