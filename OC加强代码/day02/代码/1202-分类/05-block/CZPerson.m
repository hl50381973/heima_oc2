//
//  CZPerson.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson

- (void) test:(void (^)()) block
{
    NSLog(@"test");
    block();
}

- (int) average:(int (^)(int num1,int num2)) sum
{
    return   sum(10,20) / 2;
}

/***程序员的一天***/
//工作准备
- (void) preWork{
    NSLog(@"起床");
    NSLog(@"刷牙");
    NSLog(@"坐公交");
    NSLog(@"打卡");
}
//下班后
- (void) afterWork{
    NSLog(@"聊QQ");
    NSLog(@"打卡");
    NSLog(@"坐公交");
    NSLog(@"刷牙");
    NSLog(@"睡觉");
}

- (void) day1
{
    [self preWork];
    NSLog(@"了解需求");
    [self afterWork];

}

- (void) day2
{
    [self preWork];
    NSLog(@"看代码");
    [self afterWork];
 
}

- (void) day3
{


    [self preWork];
     NSLog(@"改个小bug");
    [self afterWork];

}

- (void) day4
{
    [self preWork];
    NSLog(@"小功能");
    [self afterWork];
}

- (void) day:(void (^)()) work
{
    [self preWork];
    work();
    [self afterWork];
}

- (void)dealloc
{
    NSLog(@"%s",__func__);
}

@end
