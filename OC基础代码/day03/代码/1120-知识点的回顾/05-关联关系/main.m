//
//  main.m
//  05-关联关系
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  关联关系，HasA关系：当一个对象拥有另外一个对象的时候，
          当A对象为B对象的成员变量的时候，
          A对象与B对象之间存在一种关联关系
 
 
 关联关系是面向对象中最常用一种关系
 ---------------------------------------------------以下了解
 关联关系的耦合度要高于依赖关系
 
 一对一 ：单方依赖，双边依赖
 一对多关系 :  班级与学生，一个班级可以有多个学生
 多对多关系 ： 学生与课程，一个学生可以学习多门课程，一个门课程被多个学生学习
 
 */

#import "CZBeauty.h"
#import "CZNewBeauty.h"

int main(int argc, const char * argv[]) {
  
    CZBeauty *beauty =  [CZBeauty new];
    CZIPad *ipad = [CZIPad new];
    
//  
    
//    [beauty lookAtMovieWithIPad:ipad];
//    [beauty listenToMusicWithIPad:ipad];
//    [beauty playGameWithIPad:ipad];
//    [beauty takeSelfPhotoWithIPad:ipad];
    
    CZNewBeauty *newBeauty = [CZNewBeauty new];
    [newBeauty setIPad:ipad];
    
    [newBeauty lookAtMovie];
    [newBeauty listenToMusic];
    [newBeauty playGame];
    [newBeauty takeSelfPhoto];
    
    return 0;
}
