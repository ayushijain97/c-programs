//
//  main.c
//  print names in alphabetical order
//
//  Created by Pushpa Jain on 26/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>


void print(char a[3][3]) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}
void copy(char first[3], char second[3]) {
    int tempCounter = 0;
    for(int j=0;j<3;j++) {
        second[tempCounter] = first[j];
        tempCounter++;
    }
}

void swap(char a[3][3], int firstRowIndex, int secondRowIndex)
{
    char temp[3];
    copy(a[firstRowIndex], temp);
    copy(a[secondRowIndex], a[firstRowIndex]);
    copy(temp, a[secondRowIndex]);
}


void CompareAndSwap(char a[3][3], int firstRowIndex, int secondRowIndex)
{

    char first[3], second[3];
    copy(a[firstRowIndex], first);
    copy(a[secondRowIndex], second);
    
    int flag=0, j;
    for(j=0;first[j]!=NULL&&second[j]!=NULL;j++)
    {
        if(first[j]>second[j+1])
        {
            flag=1;
            break;
        }
        else if(second[j+1]>first[j])
        {
            flag=0;
            break;
        }
        
    }
    if(flag==1)
    {
        swap(a, firstRowIndex, secondRowIndex);
    }
}

void main()
{
    int i,rowIndex;
    char arr[3][3];
    printf("Enter the names to be sorted\n");
    for(int i=0;i<3;i++) {
        scanf(" %[^\n]",arr[i]);
    }
    
    
    for(i=0;i<3;i++)
    {
        for(rowIndex=0;rowIndex<3;rowIndex++)
        {
            CompareAndSwap(arr, rowIndex, rowIndex+1);
        }
    }
    // After Sorting
    print(arr);
}
