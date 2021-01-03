//
//  main.c
//  reverse of letter
//
//  Created by Pushpa Jain on 26/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    char x,m,l,t;
    printf("enter 3 char");
    scanf("%c%c%c",&x,&m,&l);
    t=x;
    x=l;
    l=t;
    printf("the reverse is%c%c%c",x,m,l);
    
}
