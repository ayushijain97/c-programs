//
//  main.c
//  reverse word to word
//
//  Created by Pushpa Jain on 25/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<string.h>

void main()
{
    int i,j,startcount=0, endcount=0, tempcount=0, count=0,l;
    char a[20];
    printf("enter string");
    gets(a);
    l=strlen(a);
    j=l-1;
    
    for(i=0; a[i]!=NULL; i++)
    {
        if(a[i]!=32)
        {
            count=count+1;
        }
        else
        {
            break;
        }
    }
    char temp[count];
    i=0;
    while(i<j)
    {
        
        // Copying startWord into Temp array
        for(startcount=i; a[startcount]!=32 && a[startcount]!=NULL; startcount++)
        {
            temp[tempcount]=a[startcount];
            tempcount++;
        }
        
        // Now copying the endWord to the startWord
        endcount=j-count+1;
        for( ; a[endcount]!=32 && a[endcount]!=NULL; endcount++)
        {
            a[i]=a[endcount];
            i++;
        }
        
        // Now copying the tempArray into EndWord
        endcount=j-count+1;
        tempcount=0;
        for( ;a[endcount]!=32 && a[endcount]!=NULL; endcount++)
        {
            a[endcount]=temp[tempcount];
            tempcount++;
        }
        tempcount = 0;
        i=i+1;
        j=j-count-1;
    }
    puts(a);
    printf("\n");
}
