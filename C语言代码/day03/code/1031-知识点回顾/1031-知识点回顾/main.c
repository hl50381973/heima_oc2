//
//  main.c
//  1031-知识点回顾
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//
/*
   1、数据：静态数据和动态数据
   2、C语言中的数据类型
      整形      int    %d 或 %i   4字节
      单精度浮点 float   %f       4字节
      双精度浮点 double  %lf      8字节
      字符      char    %c       1字节
   bit 一个位 B 字节 = 8bit   
   KB = 1024B  MB = 1024kB
   GB = 1024MB TB = 1024GB
   
   3、常量：不能改变量
   4、变量：可以改变的量(重点)
      先定义然后初始化后才能使用
      数据类型 变量名称;
      初始化：变量第一次赋值
      变量作用域：1、从定义哪一行开始直到其所在的代码块的结束为止(重点)
                2、内部代码块中可以访问外部代码块中定义的变量
                3、外部代码块中不可以访问内部代码块中定义的变量
                4、如果内部代码块中有与外部代码块中同名的变量，那么在内部变量的作用域内，内部变量会覆盖外部变量
 
   5、printf函数：往屏幕输出点东西
      printf("%d,%f",10,1.23);
   6、int age;
      scanf("%d",&age);
      作用：获取用户输入的数据
 
 */



#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int score = 10;
    
    {
        int  score;
        
        score = 30;
    
    }
    
    return 0;
}
