//
//  CZStudent.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZStudent.h"

@implementation CZStudent


-(id) initWithAge:(int)age andName:(NSString *)name andNo:(NSString *) no
{
    NSLog(@"CZStudent %p",self);
    NSLog(@"self = %p",self);
//    NSLog(@"super class = %@",[super class]);
//    NSLog(@"super = %p",super);//super仅仅是因为子类需要调用父类的方法而存储的
  
//  使用self对象来调用父类中方法
//_________________________________________________下面的要掌握，上面无需掌握
//  父类中成员变量要让父类进行初始化
    if (self = [super initWithAge:age andName:name]) {
//      完成自己初始化
        self.no = no;
    }
    return self;
    
    
}

@end
