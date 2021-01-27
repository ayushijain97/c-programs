//
//  main.c
//  reverse words with space
//
//  Created by Pushpa Jain on 24/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<string.h>

void main()
{
    int i=0, start=0, end=0, middle;
    char a[20], temp;
    printf("enter a string");
    gets(a);
    
    for(i=0;a[i]!=NULL; )
    {
        for(; a[i]!=NULL; i++)
        {
            if(a[i]!=32)
            {
                start=i;
                end=start;
                break;
            }
        }
        for(;a[end+1]!=32&&a[end+1]!=NULL;end++);
        
        middle=start+(end-start)/2;
        i=end+1;
        
        while(start<=middle)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
    }
    
    puts(a);
}
