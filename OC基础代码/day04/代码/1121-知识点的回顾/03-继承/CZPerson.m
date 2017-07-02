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


- (void) eat
{
    NSLog(@"CZPerson 吃");
}
@end
