//
//  CZPerson.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson

/*
 @synthesize 是编译器指令
 编译器指令：指挥编译做事的指令
 
 @synthesize 1、用类的实现中，可以生成setter和getter方法的实现
             2、生成一个私有成员变量,这个私有的成员变量与@synthesize后面的名字一样
 
 我们可以指定 @synthesize 生成setter 和getter放的时候使用哪个成员变量,这个时候它就不会生成与@synthesize 后面的名字同名的私有成员变量了
 */

@synthesize age = _age;


//- (void) setAge:(int) age
//{
//    _age = age;
//}
//
//- (int) age
//{
//    return _age;
//}

@end
