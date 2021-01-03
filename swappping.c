//
//  main.c
//  HelloWorld.c
//
//  Created by Pushpa Jain on 17/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>

int main() {
    int a;
    int b;
    int t;
    printf("enter 2no");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
