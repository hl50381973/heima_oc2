//
//  main.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  栈： 局部变量：定义在方法或函数内部变量
       系统管理
  堆:动态存储区
     一般由程序猿管理
 
 
 */

#import "CZPerson.h"

int main(int argc, const char * argv[]) {
  
    
    {
        int a = 10;
        int b = 20;
//      指针放在栈  指针所指向对象放在堆中
        CZPerson *person = [[CZPerson alloc] init];
        
    }
    
    return 0;
}
