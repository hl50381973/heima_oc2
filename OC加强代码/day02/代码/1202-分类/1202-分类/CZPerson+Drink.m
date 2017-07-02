//
//  CZPerson+Drink.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson+Drink.h"

@implementation CZPerson (Drink)
//在分类的内部可以访问原有类的成员变量(不是定义在.m文件中的)
- (void) drink
{
    _age = 10;
    NSLog(@"%@,%s,%d",self.name,__func__,_age);
}

@end
