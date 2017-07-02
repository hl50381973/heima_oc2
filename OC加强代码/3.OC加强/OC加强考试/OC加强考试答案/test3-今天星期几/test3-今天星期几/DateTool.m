//
//  DateTool.m
//  test3-今天星期几
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//

#import "DateTool.h"

@implementation DateTool

+ (NSString *)weekDay
{
    //1.创建NSDate对象 获取当前时间
    NSDate *nowDate = [NSDate date];
    
    //2.创建NSCalendar对象 获取日历
    NSCalendar *calendar = [NSCalendar currentCalendar];
    
    //3.调用NSCalendar对象的方法来获取日期的周日历部分
    NSDateComponents *comps = [calendar components:NSCalendarUnitWeekday  fromDate:nowDate];
//    取出周日历的时间
    NSInteger nowWeek = comps.weekday;
    
    NSString *weekStr;
    //每周第一天是周日 最后一天是周六
    switch (nowWeek) {
        case 1:
            weekStr = @"星期天";
            break;
        case 2:
            weekStr = @"星期一";
            break;
        case 3:
            weekStr = @"星期二";
            break;
        case 4:
            weekStr = @"星期三";
            break;
        case 5:
            weekStr = @"星期四";
            break;
        case 6:
            weekStr = @"星期五";
            break;
        case 7:
            weekStr = @"星期六";
            break;
            
        default:
            break;
    }
    return weekStr;
}

@end
