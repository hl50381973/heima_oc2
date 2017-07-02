//
//  main.m
//  02-引用计数
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"


/*
   如果内存管理不当
   1、不再使用对象没有被回收，内存泄露，最终导致程序闪退
   2、正在被使用对象被释放了，野指针，访问野指针就会导致程序崩溃
 
 
   ARC  Automatic Reference Counting     自动引用计数
   MRC  Manual Reference Counting   手动引用计数
 
   1、当一个对象刚刚出生时候，它的引用计数 1
   2、当对象上引用计数是0的时候，系统立即把它回收
 
   3、release  引用计数-1
   4、retain   引用计数+1
 */

int main(int argc, const char * argv[]) {

    CZPerson *person = [[CZPerson alloc] init];//1
    
    long count  = [person retainCount];
    NSLog(@"%zd",count);
    
    [person retain];//2
    NSLog(@"%zd",[person retainCount]);
    [person release];// 0
    
    NSLog(@"%zd",[person retainCount]);
    [person release];
    
//    person = nil;
//  当一个指针指向 nil,这个指针我称为空指针
//  给空指针发送消息系统不会报错，它什么都不做
    [person test];
    
    [person dealloc];
    
    
    NSLog(@"%zd",[person retainCount]);//
    
    return 0;
}
