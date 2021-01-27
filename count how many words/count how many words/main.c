//
//  main.c
//  count how many words
//
//  Created by Pushpa Jain on 24/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    int end,i,count=0;
    printf("Enter a string");
    gets(a);
    for(i=0;a[i]!=NULL;)
    {
        end=i;
        for(;a[end+1]!=32&&a[end+1]!=NULL;end++);
        count=count+1;
        i=end;
        i=i+2;
        
    }
    printf("the number of words are %d",count);
    printf("\n");
}
