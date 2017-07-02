//
//  CZTools.m
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZTools.h"

@implementation CZTools

/**
 *  将颜色转为对应的字符
 *
 *  @param color 颜色
 *
 *  @return 对应的字符串
 */
+ (NSString *)  convertColorToString:(CZColor) color
{
    switch (color) {
        case CZColorBlack:
            return @"黑色";
        case CZColorWhite:
            return @"白色";
        case CZColorYellow:
            return @"黄色";
        default:
            return @"没有这种颜色";
            break;
    }
}

/**
 *  将性别转为对应的字符
 *
 *  @param sex 性别
 *
 *  @return 对应的字符串
 */
+ (NSString *)  convertSexToString:(CZSex) sex
{
    switch (sex) {
        case CZSexMan:
            return @"公";
        case CZSexWoman:
            return @"母";
        case CZSexOther:
            return @"其他";
        default:
            return @"";
            break;
    }
}



/**
 *  将日期转为对应的字符串
 *
 *  @param date 日期
 *
 *  @return 对应的字符串
 */
+ (NSString *)  convertDateToString:(CZDate) date
{
    return [NSString stringWithFormat:@"%d-%d-%d",date.year,date.month,date.day];
}

@end
