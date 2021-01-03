//
//  main.c
//  checkcharacter
//
//  Created by Pushpa Jain on 23/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int t;
    printf("enter temp");
    scanf("%d",&t);
    if(t<0)
        printf("freezing weather");
    else if(t>=0&&t<10)
        printf("very cold weather");
    else if(t>=10&&t<20)
        printf("cold weather");
    else if(t>=20&&t<30)
        printf("normal weather");
    else if(t>=30&&t<40)
        printf("hot weather");
    else if(t>=40)
        printf("very hot weather");
}
