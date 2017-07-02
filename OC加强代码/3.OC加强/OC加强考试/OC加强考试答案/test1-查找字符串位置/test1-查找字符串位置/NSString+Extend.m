//
//  NSString+Extend.m
//  test1-查找字符串位置
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//

#import "NSString+Extend.h"

@implementation NSString (Extend)

- (CZLocation)rangeOfSubString:(NSString *)str
{
    //获取字符串的范围
    NSRange range = [self rangeOfString:str];
    //保存起始角标
    CZLocation he = {range.location, (range.location + range.length -1)};
    
    return he;
}

@end
