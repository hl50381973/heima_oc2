//
//  main.c
//  1109-知识点回顾
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  数组：用来存放同种数据类型的多个数据的集合
 
  定义数组格式： 数组类型 数组名称[元素个数]
 
  初始化数组的多种格式：
  1、先定义数组再进行初始化
     1.1 使用常量作为元素个数
         int nums[3];
         nums[0] = 1;
     1.2 使用变量作为元素个数
          int length = 3;
          int nums[length];
     注意点：不可以定义的同时进行初始化
 2、定义数组的同时进行初始化
    1、指定元素个数全部初始化
       int nums[2] = {1,2};
    2、不指定元素个数全部初始化
       int nums[] = {1,2,3};
    3、指定元素个数部分初始化
       int nums[5] = {1,2};
    4、指定元素个数，为指定元素的进行初始化
       int nums[5] = {2={3}};
 
 注意点：数组定义后不可以使用整体赋值方式，为数组赋值
        数组名称就是一个地址
 
 3、数组与函数：
    1、数组元素作为函数参数传递是值传递
    2、数组作为函数参数传递是地址传递
    3、数组作为函数形参会被自动转换为指针变量

 
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
