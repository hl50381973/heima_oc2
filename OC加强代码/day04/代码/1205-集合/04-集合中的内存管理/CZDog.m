//
//  CZDog.m
//  1205-集合
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZDog.h"

@implementation CZDog

-(void)dealloc
{
    NSLog(@"%s",__func__);
    self.name = nil;
//    [super dealloc];
}

@end
