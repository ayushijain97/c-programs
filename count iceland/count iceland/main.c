//
//  main.c
//  count iceland
//
//  Created by Pushpa Jain on 19/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

void main() {
    int i, j, left, right, upper, lower, count = 0;
    int row =6, column = 6;
    int flag1=0, flag2=0, flag3=0, flag4=0;
    
   /* int a[6][6] = {
        {1,0,0,1,1,0},
        {0,1,1,0,0,0},
        {0,1,0,0,1,0},
        {1,0,1,0,1,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0}
    };    */
       int a[6][6];
    
    printf("Enter values in matrix");
     for(i=0;i<row;i++)
      {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
         }
     }
   for (i = 1; i < row - 1; i++) {
        for (j = 1; j < column - 1; j++) {
            if (a[i][j] == 1) {
                flag1=0;
                flag2=0;
                flag3=0;
                flag4=0;
                
                // Right
                for (right = j + 1; right < column; right++) {
                    if (a[i][right] == 0) {
                        flag1 = 1;
                        break;
                    }
                }
                
                // Left
                for (left = j - 1; left >= 0 && flag1 == 1; left--) {
                    if (a[i][left] == 0) {
                        flag2 = 1;
                        break;
                    }
                }
                
                // Upper
                for (upper = i - 1; upper >= 0 && flag2 == 1; upper--) {
                    if (a[upper][j] == 0) {
                        flag3 = 1;
                        break;
                    }
                }
                
                // Bottom
                for (lower = i + 1; lower < row && flag3 == 1; lower++) {
                    if (a[lower][j] == 0) {
                        flag4 = 1;
                        break;
                    }
                }
                
                if (flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1) {
                    
                     count = count + 1;
                    }
                }
           }
      }
    printf("\n Total Number of Island is %d \n", count);
}
