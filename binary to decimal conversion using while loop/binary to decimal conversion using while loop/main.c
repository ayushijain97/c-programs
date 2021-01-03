//
//  main.c
//  binary to decimal conversion using while loop
//
//  Created by Pushpa Jain on 02/01/21.
//  Copyright © 2021 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
#include<math.h>

void main()
{
    int binary,power,remainder,sum=0;
    printf("the binary is");
    scanf("%d",&binary);
    power=0;
    while(binary!=0)
    {
        remainder=binary%10;
        sum=sum+pow(2,power)*remainder;
        binary=binary/10;
        power++;
        
    }
    printf("%d\n",sum);
}
