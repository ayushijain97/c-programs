//
//  main.c
//  number series1
//
//  Created by Pushpa Jain on 06/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

/*   print 1
           23
           456
           7890
           12345     */
void main()
{
    int num,counter=1;
    printf("Enter number of rows");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",counter);
            if(counter==9)
            {
                counter=0;
            }
            else
            {
                counter++;
            }
        }
        printf("\n");
    }
    
}
