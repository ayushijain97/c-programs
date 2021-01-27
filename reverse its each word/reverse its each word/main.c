//
//  main.c
//  reverse its each word
//
//  Created by Pushpa Jain on 24/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<string.h>

void main()
{
    int i, start, end, middle,l;
    char a[15], temp;
    printf("enter an string");
    gets(a);
    
    for(i=0;a[i]!=NULL; )
    {
        start=end=i;
        for(;a[end+1]!=32&&a[end+1]!=NULL;end++);
    
        middle=start+(end-start)/2;
        i=end;
        
        while(start<=middle)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
        i=i+2;
    }
    puts(a);
}
