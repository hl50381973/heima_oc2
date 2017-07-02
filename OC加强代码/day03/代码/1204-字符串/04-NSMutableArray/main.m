//
//  main.m
//  04-NSMutableArray
//
//  Created by Apple on 14/12/4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"
int main(int argc, const char * argv[]) {
    
//  创建一个空的可变数组
//    NSMutableArray *arrayM  =  [NSMutableArray array];
// 创建的时候该数组可容纳的元素个数
   
//  通过一个不可变数组去设置一个可变得数组
    CZDog *dog = [[CZDog alloc] init];
    dog.name = @"xiaohei";
    dog.age = 10;
    CZDog *dog5 = [[CZDog alloc] init];
    dog5.name = @"xiaohei";
    dog5.age = 10;
    CZDog *dog2 = [[CZDog alloc] init];
    dog2.name = @"xiaohuang";
    dog2.age = 11;
    CZDog *dog3 = [[CZDog alloc] init];
    dog3.name = @"xiaohong";
    dog3.age = 6;
    CZDog *dog4 = [[CZDog alloc] init];
    dog4.name = @"xiaobai";
    dog4.age = 6;
    NSArray *array = @[dog,dog5,dog2,dog3,dog4];

    NSMutableArray *arrayM = [NSMutableArray arrayWithArray:array];
//  不能通过增强的for遍历的同时删除元素, 所有通过枚举器的方式都不可以遍历的同时删除
    NSLog(@"%@",arrayM);
    
//  第一种方式变量找出要删除元素放到数组中，然后删除数组中得元素
    NSMutableArray *temp = [NSMutableArray array];
    for (CZDog *dog in arrayM) {
        
        if ([dog.name isEqualToString:@"xiaohong"]) {
//            [arrayM removeObject:dog];
            [temp addObject:dog];
        }
    }
//  删除arrayM中的在temp中元素
    [arrayM removeObjectsInArray:temp];
    NSLog(@"%@",arrayM);
//  第二种
    for (int index = 0; index < arrayM.count; index++) {
        CZDog *dog = arrayM[index];
        if ([dog.name isEqualToString:@"xiaohei"]) {
            [arrayM removeObjectAtIndex:index];
            index--;//注意这里不要漏掉
        }
        
    }
    NSLog(@"%@",arrayM);
    
    
    
    return 0;
}

void test()
{
    //  创建一个空的可变数组
    //    NSMutableArray *arrayM  =  [NSMutableArray array];
    // 创建的时候该数组可容纳的元素个数
    NSMutableArray *arrayM = [NSMutableArray arrayWithCapacity:10];
    
    NSMutableArray *arrM = @[@"1",@"2"];//错误方式，@[@"1",@"2"];不可变数组
    
    //   往数组中添加元素
    [arrayM addObject:@"1"];
    NSLog(@"%@",arrayM);
    //  通过一个不可变数组去设置一个可变得数组
    arrayM.array = @[@"1",@"2",@"3",@"1"];
    NSLog(@"%@",arrayM);
    //  在某个索引插入一个元素
    [arrayM insertObject:@"a" atIndex:1];
    NSLog(@"%@",arrayM);
    //  删除元素,只要与这个 @"1" 相同,它是同过isEqual方法进行比较的
    [arrayM removeObject:@"1"];
    NSLog(@"%@",arrayM);
    
}
