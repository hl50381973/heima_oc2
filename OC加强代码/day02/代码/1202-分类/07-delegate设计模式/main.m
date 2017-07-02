//
//  main.m
//  07-delegate设计模式
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  设计模式：
         大牛们在软件件开发过程中总结出来的经验
 
  delegate：
  1、当A类对象发生什么事想通知B类型对象 (B类对象成为A类对象的代理)
  2、A类中有些事情，自己无法处理，需要B类对象帮助其处理 (B类对象成为A类对象的代理)
  3、B类对象向知道A类对象中发生的事情 (B类对象成为A类对象的代理)
 
  婴儿 与 保姆
 
   婴儿想吃的时候要通知保姆
 
 
*/
#import "CZTeacher.h"
#import "CZBaby.h"
#import "CZStudent.h"
#import "CZNurse.h"
int main(int argc, const char * argv[]) {
 
   CZBaby *baby = [[CZBaby alloc] init];
 
    CZTeacher *teacher = [[CZTeacher alloc] init];
//        baby.baomu = teacher;
    
//    CZStudent *stu = [[CZStudent alloc] init];
//    baby.baomu = stu;

    CZNurse *nurse = [[CZNurse alloc] init];
    baby.baomu = nurse;
    
    [baby wantToEat];
    
    
    return 0;
}
