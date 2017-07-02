//
//  main.c
//  12-练习2
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
//    int a = 1,b = 1,c;
//    
//    c = --a && b++ || a++; //此处 a = __ b = __ c = __
//    
//    printf("a = %d,b = %d,c = %d\n",a,b,c);
    
    
//    int a = 1,b = 1,c;
////    0 a =0   1 b = 2    1 a = 1
//    c = --a || (b++    &&  ++a); //此处 a = _1_ b = _2_ c = _1_
//    
//    printf("a = %d,b = %d,c = %d\n",a,b,c);
//    
    
    
    int a = 2 , b = 2,c;
    
    c = a++ > b ? a : b * 10;//此处c = __
    
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    
    
    return 0;
}
