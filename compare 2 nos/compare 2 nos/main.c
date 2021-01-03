//
//  main.c
//  compare 2 nos
//
//  Created by Pushpa Jain on 27/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int a,b,c;
    //our method
   // printf("enter your choice");
    //scanf("%d",&c);
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    /*switch(c)
    {
        case 1:
            if(a>b)
            {
               
                printf("a is greater\n");
                break;
            }
            else if(b>a){
                printf("b is greater\n");
                break;
            }
            default:
            printf("sorry\n");
            break;
    } */
    //google method
    switch(a>b)
    {
        case 0:
            printf("b is greater\n");
            break;
        case 1:
            printf("a is greater\n");
            break;
            
            
    }
}
