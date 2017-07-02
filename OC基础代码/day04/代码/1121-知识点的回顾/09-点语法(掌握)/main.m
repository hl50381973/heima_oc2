//
//  main.m
//  09-点语法(掌握)
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CZPerson.h"
int main(int argc, const char * argv[]) {
 
    CZPerson *person = [CZPerson new];
    
//    [person setName:@"小花花"];
//    [person setAge:10];
//    int age = [person age];
//    NSLog(@"%d",age);
    
//  什么是点语法，通过.号形式访问getter 和 setter方法
    
    person.age = 20;
//  当点语法用在=的左边就是调用setter方法
//    [person setAge:20];
//当点语法用在=的右边就是调用getter方法
    int age = person.age;
    [person age];
    NSLog(@"%d",age);
    
// 注意点：
/*
    1、点语法实质就是调用getter 和setter 方法
    2、它不是直接访问成员变量
   
    点语法优点：简化编程，点语法会显得更加简洁
 */
    
    return 0;
}
