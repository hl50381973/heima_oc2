//
//  CZStudent.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZStudent.h"

@implementation CZStudent

- (void) testPrivate
{
//    _age = 10;
//    _height = 10;
}


- (void) testProtected
{
//  @protected修饰的成员变量在子类中可访问
    _height = 20;
    _name = @"xxx";
}

- (void) testPublic
{
//  @public 在子类中访问
    _weight = 100.0;
    
}
//测试实现类内部定义成员变量能否在子类中访问
-(void) testImpletation
{
//    _sex = 10;
    
}

@end
