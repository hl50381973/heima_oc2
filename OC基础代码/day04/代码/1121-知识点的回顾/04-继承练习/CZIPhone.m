//
//  CZIPhone.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZIPhone.h"

@implementation CZIPhone
// 从这里开始
- (void) setColor:(CZColor) color
{
    _color = color;
}

- (CZColor) color
{
    return _color;
}

- (void) setRam:(int) ram
{
    _ram = ram;
}

- (int) ram
{
    return _ram;
}

- (void) setCamera:(NSString *) camera
{
    _camera = camera;
}

- (NSString *) camera
{
    return _camera;
}
//到这里都是 setter 和 getter方法


//打电话
- (void) call:(NSString *) phoneNum
{
    NSLog(@"CZIPhone 给 %@ 的人打电话！",phoneNum);
}

//拍照
- (void) takePhoto
{
    NSLog(@"CZIPhone takePhoto");
}
@end
