//
//  main.m
//  04-继承练习
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  继承练习：
 
  实现一个
  iPhone的类，它具有
  属性
      颜色 _color;
      内存 _ram;
      摄像头 _camera
  功能
      打电话
      拍照
 
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

//导入CZIPhone的.h文件

#import "CZIPhone.h"
#import "CZIPhone2.h"
int main(int argc, const char * argv[]) {
  
    CZIPhone *iphone  = [CZIPhone new];
    [iphone call:@"110"];
    [iphone takePhoto];
    
    CZIPhone2 *iphone2 =  [CZIPhone2 new];
    [iphone2 call:@"10086"];
    
//   打开闪关灯
//    [iphone2 light];
    
    [iphone2 takePhoto];
    return 0;
}
