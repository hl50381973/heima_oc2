//
//  NSString+Extend.h
//  test1-查找字符串位置
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//

#import <Foundation/Foundation.h>
struct CZLocation
{
    //开始下标
    NSUInteger begin;
    //结束下标
    NSUInteger end;
};
typedef struct CZLocation CZLocation;


@interface NSString (Extend)

- (CZLocation)rangeOfSubString:(NSString *)str;


@end
