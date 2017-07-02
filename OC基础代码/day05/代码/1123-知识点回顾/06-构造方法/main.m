//
//  main.m
//  06-构造方法
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"

int main(int argc, const char * argv[]) {
    
  
//    CZPerson *person = [CZPerson new];
    
//  iOS 程序员都不用new
    
    CZPerson *person1 = [[CZPerson alloc] init];
    
//    person.age= 20;
    
    NSLog(@"age = %d",person1.age);
    
    
//  通过自定义初始方法，来完成CZPerson初始化
    
    CZPerson *person = [[CZPerson alloc] initWithAge:40];
    
    NSLog(@"age = %d",person.age);
    
//  通过多参数的初始化方法来完成多个参数的初始化
    CZPerson *person2 = [[CZPerson alloc] initWithAge:30 andName:@"小明"];
    
    NSLog(@"age = %d,name = %@",person2.age,person2.name);
    
    return 0;
}
