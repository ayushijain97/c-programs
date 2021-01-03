//
//  main.c
//  area of geomatrical shapes
//
//  Created by Pushpa Jain on 24/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int b,h,r,a,l,w,n;
    float A;
    printf("enter your choice range from 0 to 3");
    scanf("%d",&n);
    switch(n)
    {
        case 0:
            printf("enter base and height");
            scanf("%d%d",&b,&h);
            A=b*h*0.5;
            printf("the area is%f\n",A);
            break;
        case 1:
            printf("enter radius");
            scanf("%d",&r);
            A=3.14*r*r;
            printf("the area is%f\n",A);
            break;
        case 2:
            printf("enter side");
            scanf("%d",&a);
            A=a*a;
            printf("the area is%f\n",A);
            break;
            
        case 3:
            printf("enter length and width");
            scanf("%d%d",&l,&w);
            A=l*w;
            printf("the area is%f\n",A);
            break;
        default:
            printf("wrong entry");
            break;
}
}

