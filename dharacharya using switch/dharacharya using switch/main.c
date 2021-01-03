//
//  main.c
//  dharacharya using switch
//
//  Created by Pushpa Jain on 27/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//


#include <stdio.h>
#include <math.h>
void main()
{
    /* dharacharya formula (-b+/-(b^2-4ac)^1/2)/2a */
    int a,b,c,d;
    float g,i,e,f,h,ch;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    /*printf("Enter your choice from 0 to 1");
    scanf("%d",&ch);*/
    
    d=(b*b-4*a*c);
    e=sqrt(d);
    f=-b+e;
    h=-b-e;
    ch = 2*a;
    g=f/ch;
    i=h/ch;
    printf("the root is %f\n%f\n\n",g,i);
    
    
   /* switch(ch)
    {
        case 0:
            printf("the root is %f\n",g);
            break;
        case 1:
            printf("the root is  %.0f\n",i);
            break;
    }*/
}
