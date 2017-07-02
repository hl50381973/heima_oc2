//
//  main.m
//  08-NSDate
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//NSCalendar 日历，主要用于日期的计算
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSCalendar *calendar = [NSCalendar currentCalendar];

        NSString *ds = @"2015-1-1 10:10:10";
        NSString *ds1 = @"2015-4-1 10:10:10";
        
        NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
        fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        //      将字符转日期
        NSDate *d1 = [fmt dateFromString:ds];
        NSDate *d2 = [fmt dateFromString:ds1];
//      计算两个日期的差值
        NSDateComponents  *cmps  = [calendar components:NSCalendarUnitMonth fromDate:d1 toDate:d2 options:NSCalendarMatchStrictly];
        
        NSLog(@"%zd",cmps.month);
        
//     NSDateComponents 转 NSDate
        cmps.year  = 2014;
        cmps.month = 2;
        cmps.day = 30;
        cmps.hour = 10;
        cmps.minute = 10;
        cmps.second = 120;
        NSDate *date  =  [calendar dateFromComponents:cmps];
        NSLog(@"%@",date);
        
//      从当前日期加上一年
        NSDateComponents *cm = [[NSDateComponents alloc] init];
        cm.year = 1;
        NSDate *date2  = [calendar dateByAddingComponents:cm toDate:date options:NSCalendarMatchStrictly];
        NSLog(@"%@",date2);
        
    }
    return 0;
}

void test3()
{
    NSCalendar *calendar = [NSCalendar currentCalendar];
    
    //      获取日期每一个部分
    NSDate *date = [NSDate date];
    NSDateComponents  *cmps = [calendar components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay|NSCalendarUnitHour|NSCalendarUnitMinute|NSCalendarUnitSecond fromDate:date];
    
    long year = cmps.year;
    NSLog(@"%zd,%zd,%zd,%zd,%zd,%zd",year,cmps.month,cmps.day,cmps.hour,cmps.minute,cmps.second);
}


void test2()
{
    NSString *ds = @"2015-1-1 10:10:10";
    NSString *ds1 = @"2015-4-1 10:10:10";
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    //      将字符转日期
    NSDate *d1 = [fmt dateFromString:ds];
    NSDate *d2 = [fmt dateFromString:ds1];
    
    BOOL isSame = [d1 isEqualToDate:d2];
    if (!isSame) {
        NSLog(@"日期不同");
    }
    //      比较两个日期
    NSComparisonResult rs =  [d1 compare:d2];
    if(rs == NSOrderedSame){
        NSLog(@"相同");
    }else if(rs == NSOrderedAscending){
        NSLog(@"d1 < d2");
    }else{
        NSLog(@"d1 > d2");
    }
    
    //      获取两个日期较早de一个
    NSDate *earlierDate =  [d1 earlierDate:d2 ];
    NSLog(@"%@",earlierDate);
    //      获取两个日期较晚de一个
    NSDate *laterDate = [d1 laterDate:d2];
    NSLog(@"%@",laterDate);
    
    int second = 60 * 60 * 24;
    //      从当前时间往后多少秒的时间
    NSDate *tm = [NSDate dateWithTimeIntervalSinceNow:second];
    NSLog(@"%@",tm);

}

//重点
void test()
{
    //      创建NSDate
    //     创建一个代表当前时间的对象
    NSDate *date = [NSDate date];
    NSLog(@"%@",date); //输出的时间是格林威治标准时间  本初子午线穿过哪里
    
    //      格式化
    //      创建日期格式化对象
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    /*
     yyyy 年
     MM   月
     dd   日
     HH   24小时
     hh   12小时
     mm   分钟
     ss   秒
     Z    时区
     */
    //      日期转格式化字符串
    NSString *dateStr  =  [fmt stringFromDate:date];
    NSLog(@"%@",dateStr);
    NSString *ds = @"2015-1-1 10:10:10";
    //      字符转日期
    NSDate *d1 = [fmt dateFromString:ds];
    NSLog(@"%@",d1);
    
    
}