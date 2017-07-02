//
//  CZGun.m
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//


#import "CZSoldier.h"
#import "CZGun.h"
#import "CZBullet.h"


@implementation CZGun

- (void) shootTo:(CZSoldier *)enemy usingBullet:(CZBullet *) bullet
{
    
    NSLog(@"开枪射击 %@",enemy->_name);
    [bullet flyTo:enemy];
}

@end
