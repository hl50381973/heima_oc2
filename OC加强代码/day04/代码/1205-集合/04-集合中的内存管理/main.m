//
//  main.m
//  04-集合中的内存管理
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"
/*
  MRC：手动内存管理
  当你添加一个对象到集合，集合就会对这个对象进行一次retain的操作
  当你从集合中删除一个对象的时候，集合就会对这个对象进行一次release的操作
  当集合销毁的时候，会对集合中所有的元素进行一次release操作
 
 ARC 自动引用计数
 当你把一个对象添加集合中。集合就会对这个对象有一个强引用(指针)
 当你从集合中删除一个对象的时候，集合就会释放掉对这个对象强引用(指针)
 当数组销毁的时候，它会释放调用其所有元素的强引用
 */
void test();
int main(int argc, const char * argv[]) {
    
    @autoreleasepool {
        CZDog *dog = [[CZDog alloc] init];
     
        NSMutableArray *array = [[NSMutableArray alloc] init];
        [array addObject:dog];
        
        
//        [array removeObject:dog];
//         dog = nil;

//         array = nil;
        test();
     
        
    }
    return 0;
}

void test()
{
      @autoreleasepool {
            CZDog *dog = [[CZDog alloc] init];
            //       CZDog *dog1 = [[CZDog alloc] init];
        //    NSMutableArray *array = [[NSMutableArray alloc] init];
//            NSMutableArray *array = [NSMutableArray array];
            [array addObject:dog];
//            NSLog(@"%zd",[dog retainCount]);//2
            //        [array removeObject:dog];
            [array release];
//            NSLog(@"%zd",[dog retainCount]);//1
            [dog release];
        }
}