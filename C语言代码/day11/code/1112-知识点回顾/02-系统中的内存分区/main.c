//
//  main.c
//  02-系统中的内存分区
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


//全局变量：放在全局区
int global = 20;

/*
   总结：
      从高地址到低地址
 
  栈：存放局部变量，内存是由系统管理的
  堆：用来存放对象的，它由程序猿自己申请自己释放，它的内存需要程序猿自己管理
 全局区：存放全局变量与静态变量，由系统管理
 常量区：用来存放常量的，内存是由系统管理的，它是只读区
 代码区：用来存放代码的，内存是由系统管理的，它是只读区
 
 
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
//  局部变量：栈中
    int num = 10;
    
//  常量区
    "abc";
    
    return 0;
}
