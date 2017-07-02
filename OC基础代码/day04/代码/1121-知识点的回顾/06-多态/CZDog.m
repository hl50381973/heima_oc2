//
//  CZDog.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZDog.h"

@implementation CZDog

/**
 * 叫
 */
- (void) bark
{
    NSLog(@"CZDog 叫");
}

//子类要重写父类的方法
-(void)eat
{
    NSLog(@"CZDog 吃");
}

@end
