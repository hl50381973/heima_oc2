//
//  CZPerson.h
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  在Xcode4.4之后，对象@property进行了一个增强
  直接在类的声明中可以通过@property生成setter 和 getter 方法的声明和实现
                      同时它还好生成一个私有的成员变量 _属性名称
 
 */
@interface CZPerson : NSObject

//年龄
//atomic 原子的,它调用setter方法的时候会进行加锁操作（了解）
//nonatomic 非原子的，它的速度会比较快

@property (nonatomic) int age;



//姓名
//在中间的小括号中如果加上一个readonly的关键字，那么@property就只生成getter方法，不会生成setter方法了
//readonly 就表示只读
@property (readonly) NSString * name;


@end
