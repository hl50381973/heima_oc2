//
//  NSString+CZ.m
//  1204-字符串
//
//  Created by Apple on 14/12/4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "NSString+CZ.h"

@implementation NSString (CZ)

/**
 *  比较字符内容是否相同
 */
- (BOOL) myIsEqual:(NSString *) other
{
//  判断是不同一个字符串
    if (self == other) {
        return YES;
    }
//  如果长度不同内容肯定不同
    if (self.length != other.length) {
        return NO;
    }
//  一个一个的比较
    for (int i = 0; i < self.length; i++) {
        unichar myC  = [self characterAtIndex:i];
        unichar otherC = [other characterAtIndex:i];
        if (myC != otherC) {
            return NO;
        }
    }
    
    return YES;
}

@end
