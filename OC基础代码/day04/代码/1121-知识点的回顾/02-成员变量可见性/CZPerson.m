//
//  CZPerson.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson
{
//   在实现文件里面也可以定义成员变量，但是这个成员变量是私有的，无论使用什么样的可见性修饰符，修饰它，它都是私有的
@public
    int _sex;
}
- (void) setAge:(int) age
{
    
    _sex = 0;//表示男
    
    _age = age;
//  @protected修饰的成员变量在本类中可见（可以访问）
    _name = @"yyy";
    
//  @public的变量可以本类中访问
    _weight = 10.5;
    
}

- (int) age
{
    return _age;
}

@end
