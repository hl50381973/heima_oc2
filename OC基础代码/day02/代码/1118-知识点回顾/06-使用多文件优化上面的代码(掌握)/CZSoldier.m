//
//  CZSoldier.m
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZSoldier.h"
#import "CZGun.h"
#import "CZBullet.h" //只能导入头文件，不可以导入实现文件

@implementation CZSoldier

-(void) shootTo:(CZSoldier *) other usingGun:(CZGun *) gun andBullet:(CZBullet *) bullet
{
    NSLog(@"%@ 使用枪射击 %@",_name,other->_name);
    [gun shootTo: other  usingBullet:bullet];
}

@end
