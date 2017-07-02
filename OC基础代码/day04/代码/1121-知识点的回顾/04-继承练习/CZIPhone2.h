//
//  CZIPhone2.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZIPhone.h"
// 声明类的时候，类后面 :父类的名称
/*
 实现iPhone2类
 iPhone的类，它具有
 属性：
 颜色 _color;
 内存 _ram;
 摄像头 _camera
 闪光灯： _flashlight;
 功能：
 打电话
 照明
 拍照
 
 */



@interface CZIPhone2 : CZIPhone
{
    BOOL  _flashlight;//闪光灯状态，YES表示打开，NO表示关闭
}

- (void) light;

//父类中已经声明拍照的共鞥了，所以此处就不要再声明了

@end
