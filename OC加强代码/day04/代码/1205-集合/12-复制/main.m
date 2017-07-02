//
//  main.m
//  12-复制
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"
/*
  1、浅复制：不会产生一个新的对象的复制
  2、深复制：会产生一个全新的对象
  Mutable 表示可变的
 
 
  复制的目的：就改变复制对象不会影响原对象，
  对所有的不可变的对象进行copy操作都是浅复制
  对所有的不可变的对象进行mutableCopy操作都是深复制
  对于可变得对象进行copy或 mutableCopy操作，会产生一个全新的对象
 
  进行copy操作返回都是一个不可变的对象
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
     
        NSString *str = [NSString stringWithFormat:@"abc"];
        NSLog(@"%p",str);
//      复制对象
        NSMutableString *str2  = [str mutableCopy];
        NSLog(@"%p",str2);
//      这里返回一个NSString
        NSString *str3  = [str2 copy];
//        [str3 insertString:@"a" atIndex:1];
        NSLog(@"%p",str3);
        NSString *str4  = [str2 mutableCopy];
        //        [str3 insertString:@"a" atIndex:1];
        NSLog(@"%p",str4);
        NSLog(@"***************************");
//      数组的复制
        NSArray *array = [NSArray arrayWithObjects:@1,@2,@3, nil];
        NSMutableArray *newArray = [array mutableCopy];
        NSLog(@"%p",array);
        NSLog(@"%p",newArray);
        NSArray *array2 = [newArray copy];
        NSLog(@"%p",array2);
        NSArray *array3 = [newArray mutableCopy];
        NSLog(@"%p",array3);
//    注意这里复制是对象的指针，而不是产生新的狗对象
        CZDog *dog = [[CZDog alloc] init];
        dog.name = @"bad";
        NSArray *array4 = [NSArray arrayWithObject:dog];
        NSMutableArray *arrayM = [array4 mutableCopy];
        CZDog *dog1  =  arrayM[0];
        dog1.name = @"good";
        NSLog(@"%@",dog.name);
        
        CZDog *dog3 = [[CZDog alloc] init];
        dog3.name = @"apple";
        [arrayM addObject:dog3];
        NSLog(@"%zd",arrayM.count);
        NSLog(@"%zd",array4.count);
        
    }
    return 0;
}

void test()
{
    NSString *str = [NSString stringWithFormat:@"abc"];
    NSLog(@"%p",str);
    //      复制对象
    NSString *str2  = [str copy];
    NSLog(@"%p",str2);
    //      数组的复制
    NSArray *array = [NSArray arrayWithObjects:@1,@2,@3, nil];
    NSArray *newArray = [array copy];
    NSLog(@"%p",array);
    NSLog(@"%p",newArray);
}
