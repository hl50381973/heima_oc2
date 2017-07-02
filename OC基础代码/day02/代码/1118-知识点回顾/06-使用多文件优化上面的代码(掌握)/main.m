//
//  main.m
//  06-使用多文件优化上面的代码(掌握)
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

//在main所在文件中要导入它使用的对象

#import "CZSoldier.h"
#import "CZGun.h"
#import "CZBullet.h"

int main(int argc, const char * argv[]) {

    CZSoldier * soldier1 = [CZSoldier new];
    soldier1->_name = @"大饼";
    soldier1->_life = 100;
    
    CZSoldier * enemy = [CZSoldier new];
    enemy->_name = @"油条";
    enemy->_life = 20;
    
    CZGun * gun = [CZGun new];
    gun->_bulletCount = 10;
    gun->_shootRange = 100;
    
    CZBullet * bullet = [CZBullet new];
    bullet->_power = 10;
    
    
    [soldier1 shootTo:enemy usingGun:gun andBullet:bullet];
    [soldier1 shootTo:enemy usingGun:gun andBullet:bullet];
    
    
    return 0;
}
