//
//  CZDog.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZDog.h"

@implementation CZDog

- (void) show
{
    NSLog(@"%s",__func__);
}

- (SEL) test
{
    return @selector(show);
}

@end
