//
//  main.m
//  08-类的本质
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//类本质，类也是一个对象，类对象
//当我们一个类的时候，可以得到两个对象
//对象1：类对象,在内存仅有一个,
//OC是动态加载的，当第一次使用这个类时候被创建出来的,直到程序退出才会销毁


//对象2：实例对象：通过类创建出来的对象

#import "CZPerson.h"

int main(int argc, const char * argv[]) {
//  通过类方法拿到类对象
    Class cls = [CZPerson class];
    
    NSLog(@"%p",cls);
    CZPerson *person  = [CZPerson new];
//  同对象方法拿到类对象
    Class pcls  = [person class];
    NSLog(@"%p",pcls);
    
    CZPerson *person1  = [CZPerson new];
    Class pcls1  = [person1 class];
    NSLog(@"%p",pcls1);
    
//  证明类对象和实例对象不是同一个东西
    NSLog(@"%p",person1);
    
    return 0;
}
