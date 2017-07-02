//
//  main.c
//  03-优先级与结合方向
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
   优先级：优先级高操作符他们两边操作数优先与这个操作符进行结合成为一个整体
   结合方向：当优先级相同的时候，从那边开始计算
   
 的
 */


int main(int argc, const char * argv[]) {
  
    int a = (10 * 2) + (3 / 2);
    printf("a = %d\n",a);
    
    int b = 10 + 2 + 1 - 20;
    
    printf("b = %d\n",b);
    
    int c = 10 * 2 / 3 % 2;
    
    
    printf("c = %d\n",c);
    
    
    return 0;
}
