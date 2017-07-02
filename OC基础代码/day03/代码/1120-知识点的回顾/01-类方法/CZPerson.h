//
//  CZPerson.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 对象方法：
    1、声明和实现方法时候，以 -开头
    2、对象方法是隶属于对象，只能通过对象调用
    3、对象方法中可以直接访问成员变量，因为对象方法和成员变量都是隶属于该对象的
    4、对象方法中可以调用其他对象方法
    5、对象方法中也可以调用类方法
 类方法：
    1、声明和实现的标识符都是 +
    2、类方法它是属于类本身的
 
 */


@interface CZPerson : NSObject
{
@public
    int _age;
    NSString * _name;
}

- (void) setAge:(int) age;

+ (int) sumOfNum:(int)num andOther:(int) other;

@end


