//
//  CZPerson.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson

+ (instancetype) person
{
    return  [[self alloc] init];
}

-(void)dealloc
{
    //  验证对象是否被销毁了
    NSLog(@"%s",__func__);
    //    [super dealloc];
}

@end
