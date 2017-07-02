//
//  CZTools.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//颜色
typedef enum _CZColor{
    CZColorWhite,
    CZColorBlack,
    CZColorYellow
} CZColor;
//性别
typedef enum _CZSex{
    CZSexMan,
    CZSexWoman,
    CZSexOther
} CZSex;

typedef struct _CZDate{
    int year;
    int month;
    int day;
} CZDate;


@interface CZTools : NSObject
/**
 *  将颜色转为对应的字符
 *
 *  @param color 颜色
 *
 *  @return 对应的字符串
 */
+ (NSString *)  convertColorToString:(CZColor) color;

/**
 *  将性别转为对应的字符
 *
 *  @param sex 性别
 *
 *  @return 对应的字符串
 */
+ (NSString *)  convertSexToString:(CZSex) sex;


/**
 *  将日期转为对应的字符串
 *
 *  @param date 日期
 *
 *  @return 对应的字符串
 */
+ (NSString *)  convertDateToString:(CZDate) date;
@end
