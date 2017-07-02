//
//  CZDog.m
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZDog.h"

@implementation CZDog

/**
 *  吃
 */
- (void) eat
{
    _weight += 0.5;
    NSLog(@"现在的体重为 %.2f",_weight);
}

/**
 *  吠
 */
- (void) bark
{
//  类方法是隶属于类的，直接通过类调用
     NSString *colorStr  = [CZTools convertColorToString:_color];
     NSString *sexStr = [CZTools convertSexToString:_sex];
     NSLog(@"颜色 %@,速度为：%d m/s,性别为：%@,体重 %.2f",colorStr,_speed,sexStr,_weight);
}
/**
 *  跑
 */
- (void) run
{
    _weight -= 0.5;
    NSLog(@"现在的体重为 %.2f",_weight);
}
/**
 *  比较颜色：跟别的狗比较颜色，如果一样，返回YES，不一样，返回NO
 *
 *  @param other 另外一只狗
 *
 *  @return 如果一样，返回YES，不一样，返回NO
 */
- (BOOL) compareColorWithOtherDog:(CZDog *) other
{
    return _color == other->_color;
}

/**
 *  比较速度：跟别的狗比较速度，返回速度差（自己的速度 - 其他狗的速度）
 *
 *  @param other 另外一只狗
 *
 *  @return 返回速度差（自己的速度 - 其他狗的速度）
 */
- (int) compareSpeedWithOtherDog:(CZDog *) other
{
    return _speed - other->_speed;
}



@end
