//
//  main.c
//  01-不带参数的宏定义
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  源代码 -》编译预处理  ——》 编译 -》链接 -》 运行
 
  编译预处理指令：在编译前进行解析处理的指令
  
  编译预处理指令
    1、宏定义   #define
       1.1 不带参数宏定义
       1.2 带参数的宏定义
    2、条件编译
    3、文件包含 #include
  
   编译预处理指令：
   1、所有编译预处理指令都是以#开头的
   2、所有编译预处理指令都是不需要分号
 
 
 
  不带参数宏定义：在预编译的时候所出现宏名标识的地方都会被替换成宏名后面的值
 
 
  注意点：
        1、在注释中的宏名不会替换
        2、在字符串中出现的宏名不会被替换
 
 */

#define LEN 10

int main(int argc, const char * argv[]) {
   
    int nums[LEN] = {1,2};
//    "LEN";
//  第一种方案就是计算一个长度 LEN
//  第二种方案就是使用宏定义
    
    for (int i = 0; i < LEN; i++) {
        
    }
    
    
    return 0;
}
