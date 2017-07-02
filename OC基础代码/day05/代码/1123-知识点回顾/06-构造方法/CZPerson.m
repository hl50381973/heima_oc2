//
//  CZPerson.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson


//重写init方法
/**
   重写init必须要做三件事
   1、必须要调用父类init
   2、必须检验父类的init是否成功初始化
   3、返回自己指针
 */
-(id) init
{
    self = [super init];
    if (self) {
//      在这里完成自己成员变量的初始化
        self.age = 20;
    }
    return self;
}

//有时候需要在初始化的时候从外界传入一些值
//OC init family
//自定义自己的初始化方法
//1、必须以initWith开头
//2、返回值类型必须是id 或 instancetype
//不是init 家族的方法，就不可以给self赋值
- (id) initWithAge:(int) age
{
//  调用父类的init方法，让父类完成初始化
    self = [super init];
//  判断父类是否初始化成功，如果父类初始化成功才可以初始化自己
    if (self) {
//       在这里完成自己的初始化
        self.age = age;
    }
//  返回指向自己的指针
    return self;
}


- (id) initWithAge:(int)age andName:(NSString *)name
{
    NSLog(@"CZPerson = %p",self);
    if (self = [super init]) {
//      完成自己初始化
        self.age = age;
        self.name = name;
    }
    return self;
}

@end
