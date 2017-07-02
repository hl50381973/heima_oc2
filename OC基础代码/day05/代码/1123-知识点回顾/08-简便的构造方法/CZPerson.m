//
//  CZPerson.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson
//命名规范：以类名去掉前缀然后首字母小写
+ (instancetype) personWithAge:(int) age
{
//  如果有子类，那么子类就不使用这个方法来创建对象，并调用它的特有方法
//    CZPerson * person = [[CZPerson alloc] init];
//   在方法中要使用self来开辟存储空间，只有这样话，子类才可以使用这个方法
//    CZPerson *person = [[self alloc] init];
//    if (person) {
//        person.age = age;
//    }
    
//    此处是绝对不可以这么干，因为 [self alloc] 返回是一个实例对象，self是一个类对象
//    类对象在整个程序中只有一个，但实例对象可以创建N多个
//    self = [[self alloc] initWithAge:10];

    
    return [[self alloc] initWithAge:age];
}


- (instancetype) initWithAge:(int) age
{
    if (self = [super init]) {
        self.age = age;
    }
    return self;
}

@end
