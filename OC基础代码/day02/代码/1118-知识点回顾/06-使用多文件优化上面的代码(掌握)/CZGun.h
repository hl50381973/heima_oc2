//
//  CZGun.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//此处要加分号


#import "CZSoldier.h"
@class CZBullet;

@interface CZGun : NSObject
{
@public
    int _bulletCount;//子弹个数
    double _shootRange;//射程
}

- (void) shootTo:(CZSoldier *)enemy usingBullet:(CZBullet *) bullet;

@end
