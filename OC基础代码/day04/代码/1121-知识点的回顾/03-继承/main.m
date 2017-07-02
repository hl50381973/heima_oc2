//
//  main.m
//  03-继承
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CZPerson.h"
#import "CZStudent.h"
/*
  OC中的继承机制是单继承的，一个子类只能有一个父类
  OC支持多层继承的，A 继承 NSObject，B继承A这就称为多层继承
 
  在继承体系中方法调用的顺序
 
  1、在自己类中找
  2、如果没有，去父类中找
  3、如果父类中没有，就去父类的父类中
  4、如果父类的父类也没有，就还往上找，直到找到基类（NSObject）
  5、如果NSObject都没有就报错了
 
 
 
 */
int main(int argc, const char * argv[]) {
  
    CZPerson *p  =  [CZPerson new];
//    [p eat];
    
    
    
    
    
    CZStudent *stu = [CZStudent new];
    [stu setAge:10];
    [stu setName:@"小明"];
    [stu eat];
//    [stu show];
    
//       p.age;
    
    
    return 0;
}
