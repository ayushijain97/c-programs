//
//  main.c
//  * series 001
//
//  Created by Pushpa Jain on 10/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*    
 **********
 ****  ****
 ***    ***
 **      **
 *        *
 **      **
 ***    ***
 ****  ****
 **********    */


void main()
{
    int limit, leftlimit, rightlimit, lowerlimit, upperlimit, counter=0, counter1, leftlimit1, rightlimit1;
    printf("enter limit");
    scanf("%d",&limit);
    upperlimit=limit/2+1;
    lowerlimit=limit/2;
    leftlimit=upperlimit;
    rightlimit=upperlimit;
    for(int i=1; i<=upperlimit; i++)
    {
        for(int j=1; j<=leftlimit; j++)
        {
            printf("*");
        }
        for(int s=1; s<=counter; s++)
        {
            printf(" ");
        }
        for(int k=1; k<=rightlimit; k++)
        {
            printf("*");
            
        }
        printf("\n");
        leftlimit--;
        rightlimit--;
        counter=counter+2;
        
    }
    leftlimit1=2;
    rightlimit1=2;
    counter1=lowerlimit+2;
    for(int i=1; i<=lowerlimit; i++)
    {
        for(int j=1; j<=leftlimit1; j++)
        {
            printf("*");
        }
        for(int s=1; s<=counter1; s++)
        {
            printf(" ");
        }
        for(int k=1; k<=rightlimit1; k++)
        {
            printf("*");
        }
        printf("\n");
        leftlimit1++;
        rightlimit1++;
        counter1=counter1-2;
    }
}
