//
//  main.c
//  05-位运算练习
//
//  Created by Apple on 14/11/6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  1、交换两个变量的值，不借助中变量
 
  2、判断一个数的奇偶性
 */

void test()
{
    int a = 30;
    int b = 20;
    
    /* 借助中间变量 */
    //    int temp = a;
    //    a = b;
    //    b = temp;
    //   第一种方式：算术运算
    
    //      a = a - b;
    //      b = a + b;// b = 原a - 原b + 原b = 原a
    //      a = b - a;// a = 原a - (原a - 原b）  = 原a - 原a + 原b = 原b
    
    //   第二种方式：异或运算
    
    a = a ^ b;
    b = a ^ b; // 原a ^ 原b ^ 原b = 原a ^ 0 = 原a
    a = a ^ b; // 原a ^ 原b ^ 原a = 原a  ^ 原a ^ 原b = 0  ^ 原b = 原b
    
    printf("%d,%d\n",a,b);
}


// 2、判断一个数的奇偶性
int main(int argc, const char * argv[]) {
    int n = 10;
//  第一种方式
    if (n % 2 == 0) {
        printf("偶数\n");
    }else{
        printf("奇数\n");
    }
    
//  第二种方式:(不推荐使用)
    int rs =  n % 2 == 0 ? printf("偶数\n") : printf("奇数\n");
    printf("%d\n",rs);
    
//  第三种方式：&
  /*
    101
  & 001
   ----
      1
  */
    
    if (n & 1) {
        printf("奇数\n");
    }else{
        printf("偶数\n");
    }
    
    
    return 0;
}
