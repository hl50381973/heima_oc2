//
//  main.m
//  07-结构体转包装类型NSValue
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 OC中集合类中只能存储OC对象不能存储基本数据类型和结构体
 
 存储结构体
 结构体 -》包装类型(NSValue) ->存入集合类
 
 从集合中取出包装类型 -》包装类型(NSValue) -》结构体
 
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
//      结构体转包装类型
        NSRange range = {1,20};
        NSValue *value = [NSValue valueWithRange:range];
        CGPoint point =  CGPointMake(1.2,10.2);
        NSValue *value2 = [NSValue valueWithPoint:point];
        CGSize size  = CGSizeMake(10, 20);
        NSValue *value3 = [NSValue valueWithSize:size];
        CGRect rect = CGRectMake(10, 10, 20, 20);
        NSValue *value4 = [NSValue valueWithRect:rect];
//      自定义的结构体转NSValue
        typedef struct {
            int year;
            int month;
            int day;
        } CZDate;
        
        CZDate date = {2014,12,5};
        
        NSValue *value5 = [NSValue valueWithBytes:&date objCType:@encode(CZDate)];
        NSLog(@"%@",value5);
//      包装类型转结构体
        CZDate d1;
        
        
        [value5 getValue:&d1];
        NSLog(@"%d,%d,%d",d1.year,d1.month,d1.day);
        
        value4.rectValue;
        value3.sizeValue;
        value2.pointerValue;
        value.rangeValue;
        
    }
    return 0;
}
