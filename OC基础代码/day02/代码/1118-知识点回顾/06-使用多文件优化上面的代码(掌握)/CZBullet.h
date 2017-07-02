//
//  CZBullet.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CZSoldier;

@interface CZBullet : NSObject
{
@public
    int _power;//杀伤力
}


- (void) flyTo:(CZSoldier *) enemy;

@end
