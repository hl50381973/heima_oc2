//
//  main.m
//  02-增强的@property
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"

#import "CZStudent.h"
int main(int argc, const char * argv[]) {
    
    CZPerson *person = [CZPerson new];
    person.age = 20;
    
//    [person setAge:30];
//    [person age];
    NSLog(@"%d",person.age);
    
//  当我们学了这个存取器方法和点语法之后，以后就很少见到使用->来操作成员变量了
    
//    person.name = @"小明";
    NSLog(@"%@",person.name);
    
    
//  创建一个学生对象
//    CZStudent *stu  = [CZStudent new];
//    
//    stu.age = 10;
//    
//    NSLog(@"%@",stu);
    
    
    
    
    return 0;
}
