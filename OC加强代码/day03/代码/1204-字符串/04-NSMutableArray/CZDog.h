//
//  CZDog.h
//  1204-字符串
//
//  Created by Apple on 14/12/4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZDog : NSObject
//年龄
@property (nonatomic,assign) int age;
//姓名
@property (nonatomic,copy) NSString *name;
//叫
- (void) bark;

- (void) eat:(NSString *) food;

/**
 *  比较方法
 */
- (NSComparisonResult) compare:(CZDog *) other;

@end
