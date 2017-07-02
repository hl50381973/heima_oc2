//
//  Rectangle.m
//  test2-继承
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//  矩形类

#import "Rectangle.h"

@implementation Rectangle

- (float)area
{
    return self.width * self.height;
}

- (float)girth
{
    return  2 * (self.width + self.height);
}
@end
