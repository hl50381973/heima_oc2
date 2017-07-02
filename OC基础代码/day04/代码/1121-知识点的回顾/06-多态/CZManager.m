//
//  CZManager.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZManager.h"
//动物园的管理员

@implementation CZManager

-(void) feedAnimal:(CZAnimal *) animal
{
    NSLog(@"喂动物");
    [animal eat];
}

@end
