//
//  main.c
//  frequency sort
//
//  Created by Pushpa Jain on 25/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
}


void main() {
    
    int arr[11] = {2,3,2,4,5,12,2,3,3,3,12};
    int size = 11 - 1;
    
    // Print Normal Array
    printArray(arr, size);
    
    int freqArr[10000] = {0};
    
    // Count the freq;
    for(int i=0;i<size;i++) {
        freqArr[arr[i]]+=1;
    }
    
    // Print Freq array
//    printArray(freqArr, 100000);
    
    // Sort the Array based on freq
    for(int i=0;i<size;i++) {
        for(int j=0;j<size-1;j++) {
            if(freqArr[arr[j]] < freqArr[arr[j+1]]) {
                swap(arr, j, j+1);
            }
        }
    }
    
    // Now finally print the array
    printArray(arr,size);
}

