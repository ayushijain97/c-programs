//
//  main.c
//  abbreviation of name
//
//  Created by Pushpa Jain on 26/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
/*
  Input:- Amit Kumar Sharma
  Output:- A.K.Sharma
 */

void main()
{
    int i,j;
    char a[20];
    printf("Enter a string");
    gets(a);
    for(i=0;a[i]!=NULL;)
    {
        for(j=i;a[j] != 32 && a[j] != NULL;j++);
        
            if(a[j] == NULL)
            {
                for(;a[i]!=NULL;i++)
                {
                    printf("%c",a[i]);
                }
                printf("\n");
            }
            else if(a[j]==32)
            {
                printf("%c.",a[i]);
                i=j+1;
            }
        
    }
    
}
