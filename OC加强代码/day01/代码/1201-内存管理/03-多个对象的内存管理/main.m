//
//  main.m
//  03-多个对象的内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//
/*
 手动内存管理黄金法则
 
 谁调用new,alloc,retain,copy,multableCopy,谁就要调用对应的release或autorelease;
 
 口诀：有加就有减
 
 当你需要一个对象的时候，那么就给他发送一条retain的消息
 当你不需要一个对象的时候，那么就给他发送一条release的消息
 */
#import <Foundation/Foundation.h>

#import "CZPerson.h"

int main(int argc, const char * argv[]) {
  
    CZPerson *person = [[CZPerson alloc] init];//p 1
    
    CZRoom *r = [[CZRoom alloc] init];//r 1
    
    [person setRoom:r];// r 2
    
    [r release]; //1
    
//    CZRoom *r2 = [[CZRoom alloc] init];
//    
//    person.room = r2;
//    
//    [r2 release];
     person.room = r;
    
    
    [person release];//p 0  r 0
    
  
    
    
    
    
    
    return 0;
}
