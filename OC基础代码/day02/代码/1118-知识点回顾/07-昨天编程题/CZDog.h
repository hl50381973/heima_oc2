//
//  CZDog.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CZTools.h"

//狗的声明
@interface CZDog : NSObject
{
@public
    CZColor _color;//颜色
    int     _speed;//速度 m/s
    CZSex   _sex;//性别
    float   _weight;//体重 kg
}
/**
 *  吃
 */
- (void) eat;

/**
 *  吠
 */
- (void) bark;
/**
 *  跑
 */
- (void) run;
/**
 *  比较颜色：跟别的狗比较颜色，如果一样，返回YES，不一样，返回NO
 *
 *  @param other 另外一只狗
 *
 *  @return 如果一样，返回YES，不一样，返回NO
 */
- (BOOL) compareColorWithOtherDog:(CZDog *) other;

/**
 *  比较速度：跟别的狗比较速度，返回速度差（自己的速度 - 其他狗的速度）
 *
 *  @param other 另外一只狗
 *
 *  @return 返回速度差（自己的速度 - 其他狗的速度）
 */
- (int) compareSpeedWithOtherDog:(CZDog *) other;


@end
