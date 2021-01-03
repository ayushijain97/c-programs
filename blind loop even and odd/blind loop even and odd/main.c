//
//  main.c
//  blind loop even and odd
//
//  Created by Pushpa Jain on 30/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main()
{
    int a,a1,c1=0,c2=0;
    printf("enter a no");
    scanf("%d",&a);
    while(a>0||a<0)
    {
        a1=a%10;
        a=a/10;
        
        if(a1%2==0)
        {
            c1=c1+1;
        }
       else
       {
           c2=c2+1;
       }
    
    }
    printf("%d\n%d\n",c1,c2);
}
