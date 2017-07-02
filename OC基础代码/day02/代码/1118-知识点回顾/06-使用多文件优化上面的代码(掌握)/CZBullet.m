//
//  CZBullet.m
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZBullet.h"
#import "CZSoldier.h"

@implementation CZBullet

- (void) flyTo:(CZSoldier *) enemy
{
    
    if (enemy->_life >= 10) {
        enemy->_life -= 10;
    }else{
        enemy->_life = 0;
    }
    
    NSLog(@"敌人被打了一枪");
    if (enemy->_life == 0 ) {
        NSLog(@"%@ 被干死了",enemy->_name);
    }
}
@end
