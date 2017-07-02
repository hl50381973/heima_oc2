//
//  main.m
//  07-description方法(掌握)
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>


#import "CZPerson.h"

int main(int argc, const char * argv[]) {
//  创建一个人对象
    CZPerson *person =  [CZPerson new];
   
//    [person setAge:10];
//    [person setName:@"张三"];
//  当使用NSLog 中%@输出一个对象的时候，它会调用对象的description方法
//  如果你不重写该方法，它会使用父类的中这个方法，在NSObject中有个默认实现，就是输出这个类的类名和它的内存地址
    
//    NSLog(@"%@",person);
//    NSLog(@"%p",person);
    
// 输出一个类
// 当通过NSLog输出类对象的时候，调用类方法description
//   
    Class cls =  [person class];//对象方法
//
    NSLog(@"%@",cls);
//    NSLog(@"%@",[CZPerson class]);//类方法
    
    return 0;
}
