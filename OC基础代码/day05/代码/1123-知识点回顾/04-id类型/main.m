//
//  main.m
//  04-id类型
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
   id 类型是一个万能对象指针类型，它可以指向任意类对象
   id 类型本身就是一个指针类型，接收对象时候不要再加 * 了;
 
   id：缺点：
      所有它任意对象上的方法它都可以调用，但如果这个对象上不存在这个方法，那再运行时就报错
      它不会进行编译时的检查
      当是用id类的变量去调用一个方法的时候，它会提示很多类似方法，不容易找到自己对象上的方法
 
   优点：在只有是同时实现了某些方法的对象上产生多态特性

 id 也叫 类型动态类
  静态类型： 特定类的类型
  1、提供编译时,如果对象上没有这个方法就再编译的时候报错
  2、写代码的时候它的提示比较准确
  在一般情况我们使用的都是静态类型
 */

#import "CZPerson.h"
#import "CZDog.h"

int main(int argc, const char * argv[]) {
    CZPerson *person = [CZPerson new];
    person.age = 10;
    NSLog(@"%d",person.age);
    
//    [person setName:@""];
    id  pi = person;
    
    [pi setAge:20];
    NSLog(@"%d",[pi age]);
//    id类型不可以使用点语法，也不可以使用 ->
//    pi.age = 40;
    
//    [pi setName:@"haha"];
    
    pi = [CZDog new];
    [pi setAge:4];
    NSLog(@"%d",[pi age]);
    
    
    
    return 0;
}
