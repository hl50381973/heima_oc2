//
//  CZPerson.h
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZPerson : NSObject

@property int age;// 年龄

@property NSString * name;//名字

/**
 *  自定义的初始化方法，是需要声明的
 */
- (id) initWithAge:(int) age;

/**
 * 定义多参的初始化方法
 */
- (id) initWithAge:(int)age andName:(NSString *) name;

@end
