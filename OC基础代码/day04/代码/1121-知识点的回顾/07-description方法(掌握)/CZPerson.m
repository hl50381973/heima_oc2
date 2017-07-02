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
    _age = age;
}

- (int) age
{
    return _age;
}

- (void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

//如果你需要输出自己对象中内容，需要重写写个方法
- (NSString *)description
{
    
// 此处做了一个优化，当循环三次就不循环了
    NSLog(@"description");
    NSLog(@"%@",self);//不要这么写
    return [NSString stringWithFormat:@"age = %d,name = %@",_age,_name];
}

//当通过NSLog输出该类对象的时候会调用这个方法（不常用，了解）
+ (NSString *) description
{
// 此处做了一个优化，当循环三次就不循环了
    NSLog(@"%@",self);//不要这么写
    return @"xxxxxxxxxx";
}

@end
