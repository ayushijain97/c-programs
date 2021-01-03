//
//  main.c
//  employ salary
//
//  Created by Pushpa Jain on 26/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int id,h;
    float am,s;
    printf("enter employ id and working hours");
    scanf("%d%d",&id,&h);
    printf("enter amount");
    scanf("%f",&am);
    s=am*h;
    printf("the salary is%0.2f\n",s);
    printf("the employ id%d\n",id);
}

