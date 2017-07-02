//
//  CZCat.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZCat.h"

@implementation CZCat
//当在对象方法中访问成员变量的时候，其中隐藏一个指针
/*
   当方法中如果没有与成员变量名称相同变量，编译器在编译会自动给它加上一个self指针
   如果有与成员变量同名的局部变量，那么这个名字就是一个局部变量，编译器就不会再给他加上self指针了
 */
- (void) setAge:(int) age
{
//    int _age = 10;
    
//     self->_age = age;
    
    if (age < 0) {
        NSLog(@"年龄必须大于等于0");
        return;
    }
    
    _age = age;
}

// getter方法实现
- (int) age
{
    
    return _age;
}


//setter方法

- (void) setName:(NSString *) name
{
    _name = name;
}

//getter方法
- (NSString *) name
{
    return _name;
}

@end
