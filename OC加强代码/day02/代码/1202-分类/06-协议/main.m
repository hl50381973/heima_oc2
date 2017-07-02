//
//  main.m
//  06-协议
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  协议:对象之间一种约定
      只有方法声明没有方法实现一种类型
 */



#import "Student.h"
#import "Teacher.h"
#import "SuperMan.h"
void test()
{
    
    Student *badStu = [[Student alloc] init];
    //    [badStu rob];
    
    Teacher *goodTeacher = [[Teacher alloc] init];
    
    //    [goodTeacher helpOthers];
    
    
    SuperMan *superMan = [[SuperMan alloc] init];
    //    [superMan rob];
    
    //    [superMan helpOthers];
    
    /*****/
    /*
     通过id<协议名称> 定义出来的指针，只能指向实现这个协议的类的实例对象
     它指向任意的实现这个协议的类的实例对象
     */
    id<Bad> badMan = badStu;
    [badMan rob];
    badMan = superMan;
    [badMan rob];
    badMan = goodTeacher;
    
}

#import "Beauty.h"

int main(int argc, const char * argv[]) {
   
     Beauty *beauty = [[Beauty alloc] init];
     IPad *ipad = [[IPad alloc] init];
    iPhone *iphone = [[iPhone alloc] init];
//    beauty.iPad = ipad;
//    beauty.iphone = iphone;
    
    
      beauty.player = iphone;
    
    
     [beauty wantPlayGame];
    
    
    return 0;
}
