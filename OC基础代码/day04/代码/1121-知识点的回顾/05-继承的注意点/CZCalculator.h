//
//  CZCalculator.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZCalculator : NSObject
{
    int _num;
}
//类方法，计算两个数的和
+ (int) sumOfNum:(int) num andOther:(int) other;

@end
