//
//  main.m
//  test1-查找字符串位置
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+Extend.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSString *str = @"http://www.itcast.cn";
        
        CZLocation location = [str rangeOfSubString:@"itcast"];
        //输出开始下标 和结束下标
        NSLog(@"begin = %lu, end = %lu", location.begin, location.end);
        
        
    }
    return 0;
}

