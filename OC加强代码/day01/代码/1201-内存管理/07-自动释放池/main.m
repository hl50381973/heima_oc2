//
//  main.m
//  07-自动释放池
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
/*
  autorelease:延长对象生命周期
              把对象放到离自己最近那个自动释放池中
  当自动释放池销毁的时候，它会把放在其中所有对象进行一次release的操作
  它和对象在哪里创建没有关系
 */

void test()
{
    
    CZPerson *person = [[CZPerson alloc] init];
    
    
    
    @autoreleasepool {
        
        //        CZPerson *person = [[CZPerson alloc] init];
        
        person.name = @"张三";
        
        NSLog(@"%@",person.name);
        //      你调用几次autorelease，在自动释放池销毁的时候，就会调用几次release
        [person autorelease];
        //        [person autorelease];
        //        ......
        
        person.name = @"李四";
        
    }
}
/*
  自动释放池的原理：
  1、系统中存在一个自动释放池栈， 当遇到 @autoreleasepool { 把这个自动释放池压入栈中
  2、但遇到与之对应 } 自动释放池，出栈，它出栈的时候，会对池中所有对象进行一次release操作
  3、自动释放池栈中，只有栈顶自动释放池是活动的，其他的都在休眠
  4、当你调用autorelease的时候，它会把这个对象放在栈顶的自动释放池中
 
 
 */

void test2()
{
    CZPerson * person = [[CZPerson alloc] init];
    @autoreleasepool {
        [person retain];
        @autoreleasepool {
            
            person.name = @"张三";
            [person autorelease];
            
            
            @autoreleasepool {
                
                [person autorelease];
                
                
            }
            NSLog(@"%zd",[person retainCount]);
            NSLog(@"%@",person.name);
        }
        NSLog(@"%zd",[person retainCount]);
    }
    
}
//自动释放池的使用场景：只要是你从方法中返回一个对象都要使用自动释放池
//1、getter方法
void test3()
{
    NSAutoreleasePool *pool =   [[NSAutoreleasePool alloc] init];
    
    CZPerson *person =  [[CZPerson alloc] init];
    
    CZDog *dog = [[CZDog alloc] init];
    
    person.dog = dog;
    
    CZDog *myDog = person.dog;
    
    [dog release];
    
    [person release];
    
    
    NSLog(@"%zd",[myDog retainCount]);
    
    [pool release];
    
}

//2、快捷构造方法

int main(int argc, const char * argv[]) {
    
    @autoreleasepool {
        
        CZPerson *person = [CZPerson person];
        
        NSLog(@"%zd",[person retainCount]);
        
        
        
    }
    
 
    
    return 0;
}
