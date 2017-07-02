//
//  CZPerson.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson


-(void)dealloc
{
    NSLog(@"%s",__func__);
    self.name = nil;
    self.dog = nil;
    [super dealloc];
}

@end
