//
//  CZPerson.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"
/*
   此处必须要会的：
 
   在使用@property增强的时候如何自定义setter方法
   1、如果你实现自定义的setter方法，@property就不会帮你生成它的setter方法，但仍然会帮你生成getter方法和私有的成员变量
   2、如果你实现自定义的getter方法，@property就不会帮你生成它的getter方法，但仍然会帮你生成setter方法和私有的成员变量
 
   3、如果你同时实现自定义的setter 和 getter方法，@property就不会帮你生成它的setter 和 getter方法，同时也不会帮你生成私有成员变量了
 */
@implementation CZPerson
{
//  一般都实现中声明一个私有的
    int _age;
}

- (void) setAge:(int)age
{
    if (age >= 0) {
//        self.age = age; //这样写会死循环
        _age = age;
    }
}

- (int) age
{
    return _age + 10;
}


-(NSString *) description
{
    return [NSString stringWithFormat:@"age = %d",_age];
}
@end
