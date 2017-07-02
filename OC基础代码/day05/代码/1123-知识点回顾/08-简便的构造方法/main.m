//
//  main.m
//  08-简便的构造方法
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
#import "CZStudent.h"
int main(int argc, const char * argv[]) {
 
   CZPerson *person = [CZPerson personWithAge:10];
   
   NSLog(@"age = %d",person.age);
//  id 类型可以直接赋值给任意对象的指针
    
    NSObject *stu = [CZStudent personWithAge:20];
//  它可以执行成功吗？
//    [stu show];
    NSLog(@"%@",stu);
    
//    [stu show];
    
//   instancetype 不可以用来定义变量
//    instancetype stu3 = stu;
    
//    [stu stringByAppendingString:@"aaa"];
    
//  这两个方法都是提供的
     NSString *str  = [[NSString alloc] initWithFormat:@"str age = %d",10];
//   类方法使用起来更加简便
     NSString *str1 = [NSString stringWithFormat:@"str1 age = %d",20];
    
    NSLog(@"%@",str);
    NSLog(@"%@",str1);
    
    
    
    return 0;
}
