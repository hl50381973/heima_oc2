//
//  main.m
//  08-重构
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

/*
 设计模式：
 大牛们在软件件开发过程中总结出来的经验
// 使用代理模式场景
 delegate：
 1、当A类对象发生什么事想通知B类型对象 (B类对象成为A类对象的代理)
 2、A类中有些事情，自己无法处理，需要B类对象帮助其处理 (B类对象成为A类对象的代理)
 3、B类对象向知道A类对象中发生的事情 (B类对象成为A类对象的代理)
 
 婴儿 与 保姆
 
 婴儿想吃的时候要通知保姆 （保姆就是婴儿的代理）
 婴儿想吃了但是自己不会吃，需要保姆帮忙  （保姆就是婴儿的代理）
 保姆想知道婴儿什么时候想吃了（保姆就是婴儿的代理）
 
//步骤
 
  1、A类对象发生事情向要给外边发一个通知来让其他类的实例对象帮做事情
  2、在A类中定义协议 Adelegate，协议中写希望其他的实例对象帮做事情
  3、在A类中定义一个属性 id<Adelegate> delegate
  4、当A类对象发生事情就去通知它的代理来做事情，这个时候需要判断它的代理是否真的有能力帮它来做
  5、B类型对象想成为A类对象代理的类，就要要遵守ADelegate的协议
  6、实现自己想要监听的方法
  7、让B类对象成为A类对象的代理
 
 */

#import <Foundation/Foundation.h>
#import "CZBaby.h"
#import "CZNurse.h"
#import "CZStudent.h"
#import "CZTeacher.h"
int main(int argc, const char * argv[]) {
  
    CZBaby *baby = [[CZBaby alloc] init];
    CZNurse * nurse = [[CZNurse alloc] init];
    baby.delegate = nurse;
    [baby wantToEat];
    
    CZStudent *stu = [[CZStudent alloc] init];
    baby.delegate = stu;
    [baby wantToEat];
    
    CZTeacher *teacher = [[CZTeacher alloc] init];
    baby.delegate = teacher;
    [baby wantToEat];
    
    
    return 0;
}
