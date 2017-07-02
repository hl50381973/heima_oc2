//
//  main.c
//  06-static与extern对全局变量的作用
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   全局变量
       内部变量：仅能再本文件中访问的变量
       外部变量：可以在所有文件中被访问的变量
   static：声明或定义一个内部变量
           不同文件中可以有同名内部变量
   格式：static 数据类型 变量名称;
   extern: 完整声明或定义一个外部变量（废物）
           如果你使用extern声明一个外部变量，那么系统不会自动帮你定义并初始化变量
           外部变量在整个项目中都可以重复定义
   格式：extern 数据类型 变量名称;
 
 */

static int inner = 10;


//int num = 2;

int main(int argc, const char * argv[]) {
 
//    printf("%d\n",num);
    printf("%d\n",inner);
    
    return 0;
}
