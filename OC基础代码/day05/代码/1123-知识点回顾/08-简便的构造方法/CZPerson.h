//
//  CZPerson.h
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZPerson : NSObject

@property int age;

//instancetype 相对于id类型，它会自动进行类型检查，如果不一致就会报一个警告
//instancetype 只可以作为返回类型
//以后返回类型使用instancetype
//简便构造方法，都是以类名去掉前缀然后小写首字母开头
+ (instancetype) personWithAge:(int) age;
//初始化对象方法
- (instancetype) initWithAge:(int) age;

@end
