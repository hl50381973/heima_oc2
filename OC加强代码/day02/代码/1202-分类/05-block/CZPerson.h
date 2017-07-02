//
//  CZPerson.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 作为函数参数类型的格式
 返回值类型(^)(形参列表)
 当你发现，多个方法中他们有很多代码都是相同，只有一部分代码是经常变化
 你可以把这个经常变化的代码通过block参数传入
 
 */

@interface CZPerson : NSObject

- (void) test:(void (^)()) block;

- (int) average:(int (^)(int num1,int num2)) sum;

/***程序员的一天***/

- (void) day1;

- (void) day2;

- (void) day3;

- (void) day4;
//通过block来重构它
- (void) day:(void (^)()) work;

@end
