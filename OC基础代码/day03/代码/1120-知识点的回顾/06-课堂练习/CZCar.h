//
//  CZCar.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//1、设计一个Car 类，它有个一个对象方法，返回该对象与另外一个Car对象的速度差，
//还有一个类方法，计算两两车的速度差

@interface CZCar : NSObject
{
    double _speed;//速度
}

- (void) setSpeed:(double) speed;

- (double) speed;

/**
 *  计算 该对象与另外一个Car对象的速度差，
 *
 *  @param other 另外的车
 *
 *  @return 该对象与另外一个Car对象的速度差，
 */
- (double) compareSpeedWithOtherCar:(CZCar *) other;


/**
 *  计算两两车的速度差
 */
+ (double) compareSpeedBetweenThisCar:(CZCar *) thisCar andAnotherCar:(CZCar *) another;

@end
