//
//  NSString+Ext.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "NSString+Ext.h"

@implementation NSString (Ext)

/**
 *  计算字符串中有多少个数字
 */
//+ (int) countOfNumberInString:(NSString *) str
//{
//    int counter = 0;
//    for (int i = 0; i < str.length; i++) {
//        
//        unichar c = [str characterAtIndex:i];
//        if (c >= '0' && c <= '9') {
//            counter++;
//        }
//    }
//    return counter;
//}

//- (int) countOfNumber
//{
//    return [NSString countOfNumberInString:self];
//}

/**
 *  计算字符串中有多少个数字
 */
+ (int) countOfNumberInString:(NSString *) str
{
    return [str countOfNumber];
}
/**
 *  计算字符串中有多少个数字
 */
- (int) countOfNumber
{
    int counter = 0;
    for (int i = 0; i < self.length; i++) {
        
        unichar c = [self characterAtIndex:i];
        if (c >= '0' && c <= '9') {
            counter++;
        }
    }
    return counter;
}




@end
