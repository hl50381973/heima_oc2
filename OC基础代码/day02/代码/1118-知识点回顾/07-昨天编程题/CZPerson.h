//
//  CZPerson.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"

@interface CZPerson : NSObject
{
@public
    NSString * _name;//姓名
    CZDog * _dog;//狗
}

/**
 *  喂狗
 */
- (void) feedDog;


/**
 *  遛狗
 */
- (void) walkDog;

@end
