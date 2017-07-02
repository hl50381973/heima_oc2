//
//  CZStudent.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZStudent.h"

@implementation CZStudent


- (NSString *)description
{
// 这里访问@property生成的私有成员变量的，因为这个私有成变量是在CZPerson实现文件中
//  self->_age 这里没有
//  如果想访问父类的成员变量只能通过调用存取器方法
    return [NSString stringWithFormat:@"age = %d",self.age];
}

@end
