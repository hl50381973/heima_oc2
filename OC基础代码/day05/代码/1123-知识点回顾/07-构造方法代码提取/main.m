//
//  main.m
//  07-构造方法代码提取
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
#import "CZStudent.h"

int main(int argc, const char * argv[]) {
   
    CZStudent *stu = [[CZStudent alloc] init];
    
    NSLog(@"age = %d",stu.age);
    
    CZStudent *stu1 = [[CZStudent alloc] initWithAge:10 andName:@"大木" andNo:@"001"];
    
    NSLog(@"age = %d,name = %@,no = %@",stu1.age,stu1.name,stu1.no);
    
    return 0;
}



void test()
{
    //    CZPerson *person = [[CZPerson alloc] init];
    //
    //    NSLog(@"age = %d",person.age);
    //
    //  通过自定义初始方法，来完成CZPerson初始化
    
    CZPerson *person = [[CZPerson alloc] initWithAge:40];
    
    NSLog(@"age = %d",person.age);
    
    //  通过多参数的初始化方法来完成多个参数的初始化
    CZPerson *person2 = [[CZPerson alloc] initWithAge:30 andName:@"小明"];
    
    NSLog(@"age = %d,name = %@",person2.age,person2.name);
}