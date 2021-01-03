//
//  main.c
//  voter
//
//  Created by Pushpa Jain on 22/12/20.
//  Copyright © 2020 Pushpa Jain. All rights reserved.
//

#include <stdio.h>
void main()
{
    int m1,m2,m3, totalm,r;
    char n[15];
    float p;
    printf("enter marks,rollno");
    scanf("%d%d%d%d",&m1,&m2,&m3,&r);
    printf("enter name");
    scanf("%s",n);
    printf("NAme %s\n",n);
    printf("Rollno %d\n",r);
    totalm=m1+m2+m3;
    printf("total %d\n",totalm);
    p=totalm/3.0;
  printf("percentage %f\n",p);
if(p>70)
    printf("first division\n");
else if(p<=70&&p>55)
     printf("second division\n");
else if(p<=55&&p>45)
    printf("third division\n");
else
    printf("fail\n");
}
