//
//  Square.m
//  test2-继承
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//  正方形

#import "Square.h"

@implementation Square

- (float)area
{
    return _width * _width;
}

- (float)girth
{
    return 4 * _width;
}

@end
