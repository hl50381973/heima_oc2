//
//  main.m
//  08-ARC
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
/*
   ARC automatic Reference Counting 自动引用计数
 
   ARC 编译器特性
       编译器会在适当时候，加入内存管理的代码

   强指针：默认所有的指针都是强指针
          只要是有强指针指向一个对象，那么这个对象就不会被释放
          只要是没有强指针指向一个对象，那么这个对象就被立即回收
          __strong 强指针标示，但是默认所有指针都是强指针，所以他没有用
   弱指针：弱指针指向的对象不影响对象回收
   注意：不要用弱指针指向一个刚刚创建出来的对象

   当出现循环引用的时候，必须要由一端是弱指针
 */
void test1()
{
    @autoreleasepool {
        
        {
            __strong  CZPerson *person = [[CZPerson alloc] init];
        }
        
        //          CZPerson *person = [[CZPerson alloc] init];
        //        person = nil;
        
    }
}

void test2()
{
    @autoreleasepool {
        
        CZPerson *person = [[CZPerson alloc] init];
        {
            CZDog *dog = [[CZDog alloc] init];
            person.dog = dog;
        }
        
    }
}

//当弱指针指向这个对象的时候，那么创建出来就被回收了
void test3()
{
    __weak  CZPerson * person = [[CZPerson alloc] init];
    
    NSLog(@"%p",person);
    person.dog = nil;
    
}


int main(int argc, const char * argv[]) {

    @autoreleasepool {
        
        CZPerson * person = [[CZPerson alloc] init];
        CZDog *dog = [[CZDog alloc] init];
       
//      把狗给人
        person.dog = dog;
//      把人给狗
        dog.person = person;
        
     
    }
    
    
    return 0;
}
