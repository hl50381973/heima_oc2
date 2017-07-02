//
//  CZCar.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZCar.h"

@implementation CZCar

- (void) setSpeed:(double) speed
{
    _speed = speed;
}

- (double) speed
{
    
    return _speed;
}

/**
 *  计算 该对象与另外一个Car对象的速度差，
 *
 *  @param other 另外的车
 *
 *  @return 该对象与另外一个Car对象的速度差，
 */
- (double) compareSpeedWithOtherCar:(CZCar *) other
{
    return _speed - [other speed];
}


/**
 *  计算两两车的速度差
 */
+ (double) compareSpeedBetweenThisCar:(CZCar *) thisCar andAnotherCar:(CZCar *) another
{
//    return  thisCar->_speed - another->_speed;
    
    return [thisCar compareSpeedWithOtherCar:another];
}

@end
