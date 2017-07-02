//
//  CZStudent.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZStudent.h"
/**
  由于CZStudent继承了CZPerson那么它就拥有了CZPerson的所有成员变量和方法
 
  OC只有实现没有声明的方法是私有方法，不能在外边直接访问，但是它不是绝对私有

 */
@implementation CZStudent

-(void) show
{
    NSLog(@"age = %d,name = %@",_age,_name);
}

- (void) eat
{
    NSLog(@"CZStudent eat");
}

@end
