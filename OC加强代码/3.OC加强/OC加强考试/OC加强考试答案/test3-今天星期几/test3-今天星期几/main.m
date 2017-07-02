//
//  main.m
//  test3-今天星期几
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DateTool.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSString *week = [DateTool weekDay];
        
        NSLog(@"%@", week);
        
    }
    return 0;
}

