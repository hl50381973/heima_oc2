//
//  CZPerson.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"
//私有方法：不能在外界调用的方法，只有实现没有声明的方法
//OC只有在实现文件中的定义的这个方法是私有，但是不是绝对的私有；
//私有方法：就是不让外界调用方法

//如果在一个类的方法可以写成私有的就不要写成公开的

@implementation CZPerson

-(void) show:(int) num
{
    NSLog(@"age = %d",_age);
}

@end
