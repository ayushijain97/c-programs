//
//  main.c
//  rootsofquadraticequation
//
//  Created by Pushpa Jain on 23/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include <math.h>
void main()
{
    /* dharacharya formula (-b+/-(b^2-4ac)^1/2)/2a */
     int a,b,c,d,e,f,h,ch;
    float g,i;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter your choice from 0 to 1");
    scanf("%d",&ch)
    
    d=(b*b-4*a*c);
    e=sqrt(d);
    f=-b+e;
    h=-b-e;
    g=f/2*a;
    i=h/2*a;
    
    /*switch(ch)
    {
        case 0:
            printf("the roots are %.0f\n",g);
            break;
        case 1:
            printf("the roots are %.0f\n",i);
            break;
    }*/
}
