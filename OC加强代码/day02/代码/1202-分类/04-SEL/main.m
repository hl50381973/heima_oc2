//
//  main.m
//  04-SEL
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CZPerson.h"
#import "CZDog.h"
/*
   SEL是一种数据类型，代表方法签名，通过它就找到这个对象上方法
   
   1、定义变量  SEL 变量名称 
   2、通过@selector(方法名称) 快速生成一个SEL
   3、作为方法的实参
   4、作为方法的形参
   5、作为方法返回值
 
 
 */

void test()
{
    
    SEL sel = @selector(stringByAppendingString:);
    
    //     NSNumber * num =  [NSNumber numberWithInt:1];
    
    //    unichar c = [@"abc" performSelector:sel withObject:num];
    
    //    NSLog(@"%c",c);
    //    NSString *str = [@"abc" performSelector:sel withObject:@"def"];
    
    //    NSString *str = [@"abc" performSelector:@selector(stringByAppendingString:) withObject:@"def"];
    //      NSLog(@"%@",str);
    CZPerson *person = [[CZPerson alloc] init];
    CZDog *dog = [[CZDog alloc] init];
    [person makeObject:dog perfomWithSelector:@selector(show)];
    
    // (NSObject) 表示某个对象是否能响应一个方法,中点掌握的方法
    BOOL is = [dog respondsToSelector:@selector(show)];
    
    NSLog(@"%d",is);
    //  让狗去吃
    if(is){
        [dog performSelector:@selector(show)];
    }
    
}

#import "CZButton.h"

int main(int argc, const char * argv[]) {
    
    CZButton *button =  [[CZButton alloc] init];
    CZDog *dog = [[CZDog alloc] init];
    button.delegate = dog;
    button.selector = @selector(show);
    
    [button click];
    
    
    return 0;
}
