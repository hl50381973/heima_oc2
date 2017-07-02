//
//  CZIPhone.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 实现一个
 iPhone的类，它具有
 属性
 颜色 _color;
 内存 _ram;
 摄像头 _camera
 功能
 打电话
 拍照
 */
//定义颜色枚举

//enum _CZColor{
//    CZColorWhite,//白色
//    CZColorBlack//黑色
//};
//
////起一个别名
//typedef enum _CZColor CZColor;


//上面的两个代码和在一起
typedef enum _CZColor{
    CZColorWhite,//白色
    CZColorBlack//黑色
} CZColor;


@interface CZIPhone : NSObject
{
    CZColor _color;//定义颜色成员变量
    int _ram;//内存
    NSString *_camera;//摄像头:800万像素
}
// 从这里开始
- (void) setColor:(CZColor) color;

- (CZColor) color;

- (void) setRam:(int) ram;

- (int) ram;

- (void) setCamera:(NSString *) camera;

- (NSString *) camera;
//到这里都是 setter 和 getter方法


//打电话
- (void) call:(NSString *) phoneNum;

//拍照
- (void) takePhoto;

@end
