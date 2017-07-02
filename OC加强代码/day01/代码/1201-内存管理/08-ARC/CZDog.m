//
//  CZDog.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZDog.h"

@implementation CZDog

- (void) setPerson:(CZPerson *) person
{
    _person = person;
}

-(void)dealloc
{
    //  验证对象是否被销毁了
    NSLog(@"%s",__func__);
    //    [super dealloc];
}

@end
