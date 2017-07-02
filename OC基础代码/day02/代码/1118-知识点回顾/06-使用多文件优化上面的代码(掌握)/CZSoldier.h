//
//  CZSoldier.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

//@class 可以防止文件的循环导入
//@class 仅仅就这是一个类
//#import 把头文件拷贝过来

@class CZGun;
@class CZBullet;

@interface CZSoldier : NSObject
{
@public
    NSString * _name;
    int _life;
}

-(void) shootTo:(CZSoldier *) other usingGun:(CZGun *) gun andBullet:(CZBullet *) bullet;

@end
