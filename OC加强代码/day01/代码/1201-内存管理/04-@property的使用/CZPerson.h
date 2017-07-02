//
//  CZPerson.h
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZRoom.h"
/*
  手动内存管理的关键字
  retain  就再setter 和 getter方法中加入一些内存管理的代码
  当属性是一个普通OC对象的时候，使用retain
  assign  直接赋值，不生成内存管理代码 
  当属性是一个基本数据类型的时候，使用assign
  copy  复制对象，NSString 使用copy
  
 线程安全
 nonatomic：非原子，不会生成线程安全的代码，速度快，iOS通常都是这种
 atomic:原子(默认)，会生成线程安全的代码，速度慢
 
 控制权限
 readwrite:可读可写，生成getter 与 setter方法是声明与实现
 readonly:只读 只生成getter方法
 
 修改方法名称
 getter 修改生成的getter方法的名称
        一般情况下，BOOL类型的属性的getter方法是以is开头的
 setter 修改生成的setter方法的名称
        一般不去修改它
 
 */
@interface CZPerson : NSObject

@property (nonatomic,assign,getter=isMan) BOOL man;

@property (nonatomic,copy) NSString *name;

@property (nonatomic,assign,readonly) int age;

@property (nonatomic,retain) CZRoom  * room;

@end
