//
//  CZPerson.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson

- (void) setAge:(int) age
{
    NSLog(@"setAge:");
    
//  这里是通过self调用setAge方法，此处就会出现死循环
//  一定不要再setter方法中使用点语法给成员变量赋值
//    self.age = age;
    
    _age = age;
}

- (int) age
{
    NSLog(@"age");
    
//  一定不要再getter方法中使用点语法返回成员变量的值，因为会出现死循环
    return self.age;
//    return _age;
}

- (void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

@end
