//
//  CZIPhone2.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZIPhone2.h"

@implementation CZIPhone2

- (void) light
{
    if (_flashlight == NO) {
        NSLog(@"打开闪光灯");
        _flashlight = YES;
    }else{
        NSLog(@"闪光灯已经打开了");
    }
}
//当子类中实现与父类同名的方法的时候，子类中的方法会覆盖父类的方法

- (void) takePhoto
{
//  打开闪光灯
    [self light];
//  重写了父类还想使用父类的功能
//  super只有一个作用，就是调用父类的方法
//  如果在子类中想使用父类方法，就必须使用super关键字
    [super takePhoto];
    
    _flashlight = NO;
    NSLog(@"闪关灯关闭了！");
}
@end
