//
//  main.m
//  1117-第一个OC程序
//
//  Created by Apple on 14/11/17.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

/*
 
 1、
 #import:#include一样都是编译预处理指令
 
 #import 功能与#include一样也是把文件内容拷贝到#import指令所在位置
 
 #import <> 与 #include<> 是用来包含系统的头文件的
 #import "" 与 #include “” 是用来包含自己项目中的头文件
 
 #import 是#include 升级版，自动防止文件重复包含
 
 2、
 Foundation： 就是Foundation框架
 3、
 @autoreleasepool  就是内存管理的一个东西(了解)
 
 4、NSLog：Foundation框架提供的用于日志输出的函数

 NSLog与printf对比
 
 1、printf 是C语言提供的，它在stdio.h的头文件中
 2、NSLog  是Foundation框架提供的，NSObjCRuntime.h
 3、NSLog  包含日志输出的日期，以及对应的应用程序
 4、NSLog  自动换行,在末尾\n是无效的
 5、NSLog 中的格式字符串不是普通C语言字符串，NSString对象
    @"" 它是一个NSString对象的字面量表示
 6、printf中所有占位符在OC中都是支持的
 7、 NSLog新增了格式符 %@ 用于输出的对象的
 
 
 在main函数中，renturn 0;表示程序正常退出了
 */


#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
   
    printf("%d,%f,%lf,%c\n",10,10.2f,20.2,'A');
    
    NSLog(@"%d,%f,%lf,%c", 10,10.2f,20.2,'A');

    NSLog(@"%@",@"哈哈");
    
    return 0;
}
