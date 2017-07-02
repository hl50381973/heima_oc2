//
//  CZPerson.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"
/*
  局部变量、成员变量和全局变量
  1、在方法内部可以定义与成员变量同名局部变量，
     那么在这个局部变量的作用域范围内他会覆盖成员变量
  2、如果定义与成员变量同名局部变量，还(ˇˍˇ） 想～操作局部变量；通过self来访问
  3、全局变量，整个文件共享的，所有方法中共享的；
     那么一个方法中修改这个全局变量其他方法中使用这个全局变量都会修改
 
  4、变量作用域中存在一个原则：就近原则
     查找的顺序  局部变量 -》 成员变量 -》 全局变量
 
 self与方法
 1、self在对象方法中，它是调用这个方法那对象
 2、self在类方法中就代表类，他可以调用其他的类方法
 
 总结：
     谁调用这个方法那么self就是谁

 */

int agenew = 20;

@implementation CZPerson



-(void) changeAge:(int) age
{
//    _age = 20;
//    
////    int _age = 10;
//    
//    
//    agenew  = 30;
//    
//     _age = age;
//    
//    self->_age = age;
    [self setAge:20];
}


- (void) setAge:(int)age
{
    NSLog(@"setAge");
    _age = age;
}

- (int) age
{
    NSLog(@"agenew = %d",agenew);
    return _age;
}


+ (int) sumOfNum:(int) num andOther:(int) other
{
    return num + other;
}

+ (int) averageOfNum:(int) num andOther:(int) other
{
   return  [self sumOfNum:num andOther:other] / 2;
}


@end
