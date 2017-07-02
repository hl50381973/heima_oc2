//
//  main.c
//  07-练习
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

//    int a = 2,b = 5,c,d;
//    c  = b / a + b % a;
//    d  = b / a * b % a;
//    
//    printf("c = %d,d = %d\n",c,d);
//    
    
//    int a = 2,b = 3;
//    a += a * b + 1; //此处a =  _9_
//    printf("a = %d\n",a);
//    a *= a * b + 1 ;//此处a = _252_
//    printf("a = %d\n",a);
//    
    
    
//    int a = 0,b;
//    b = ++a;//此处a = _1_ b = _1_
//    printf("a = %d,b = %d\n",a,b);
//    b = a++ ;//此处a = _2_ b = _1_
//    printf("a = %d,b = %d\n",a,b);
//    
    
    
    int a = 0,b;
    b = a++ + a++;//此处a = _2_ b = _1_
    printf("a = %d,b = %d\n",a,b);
    b = ++a + ++a;//此处a = _4_ b = _7_
     printf("a = %d,b = %d\n",a,b);
    b = ++a + a++;//此处a = _6_ b = _10_
     printf("a = %d,b = %d\n",a,b);
    b = a++ + ++a;//此处a = _8_ b = _14_
     printf("a = %d,b = %d\n",a,b);
    
    
    return 0;
}
