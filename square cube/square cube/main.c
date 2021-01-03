//
//  main.c
//  square cube
//
//  Created by Pushpa Jain on 29/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int n,i=1;
    printf("Enter a limit");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i*i);
        printf("%d",i*i*i);
        i++;
    }
    
}
