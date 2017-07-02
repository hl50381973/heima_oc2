//
//  main.c
//  07-static与extern对函数的作用
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   函数：
   内部函数：仅能在本文件中使用函数
 
   外部函数：可以其他文件使用函数，默认所有函数都是外部函数
 
 
  extern 完整定义或声明一个外部函数（没有用的家伙）
 
  static 定义或声明一个内部函数
 
 
 
 */

//完整声明一个外部函数
//extern int sum(int num1,int num2);
int average(int num1,int num2);

int main(int argc, const char * argv[]) {
  
    int rs = average(10, 20);
    printf("%d\n",rs);
    
    
    return 0;
}
