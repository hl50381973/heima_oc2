//
//  main.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

/*
  1、NSString
    1、NSString对象的创建
       1、通过字面量的方式
          NSString *str = @"字面量";
       2、通过对象方法
          NSString *str = [NSString alloc];
          str  = [str initWithUTF8String:"C语言字符串"];
          可合并一句
          NSString *str = [[NSString alloc] initWithUTF8String:"C语言字符串"]
       3、通过类方法创建
          NSString *str = [NSString stringWithFormat:@"格式化字符串",....];
          格式化字符串:它的格式符与NSLog中的相同
   2、计算字符长度
      [str length];//计算字符串中字符个数的，一个中文占用一个字符
  2、BOOL类型：它是一种逻辑类型，逻辑类型只有真和假，YES 为真 NO假
     1、定义变量
     2、做函数或方法的形参类型
     3、作为函数或方法的返回值类型
     BOOL类型的本质： char
     YES 1
      NO  0
  3、对象与函数
    0、函数：C语言中函数，他们之间是平行的，没有谁隶属于谁的关系，调用直接通过函数名调用的，可以在文件的任意位置
    1、对象作为函数参数传递是地址传递，如果在函数中通过形参来改变对象中属性，那么它会影响实参的中对象的属性
    2、形参对象在可以函数访问自己的成员也可以调用自己的函数
    3、对象可以函数的返回值
    4、对象在函数中可以连续传递
 4、对象与方法
    0：方法OC中的，在定义类的时候声明和实现方法，它是隶属于某个对象或某个类的，调用的时候必须通过对象或类来调用；
    1、对象作为方法参数传递是地址传递
    2、对象在方法中也可以访问自己的成员变量，也可以调用自己的函数
    3、对象也可以方法的返回值
    4、对象可在方法中连续传递
 
 5、多文件开发
    1、为了方便程序管理，我们把一个类分为两个文件
    .h 文件：用来存放类的声明，它是给使用该类的人看的，声明就相当于表盘
    .m 文件：用来实现的类的方法的，就表内部实现，如齿轮
    2、当我们需要使用某个类的时候，需要导入这个类的头文件，不能导入实现文件
    3、当某两个类直接出现循环包含的时候，一端必须使用@class来声明这个类
    4、@class 仅仅是告诉编译器这是一个类，其他关于类本身信息它都不知道，所这@class一般仅仅用在头文件中
 
 */
#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    @public
    int age;
}

@end

@implementation Person


@end

int main(int argc, const char * argv[]) {
   
    
    Person *p  = [Person new];
    
    Person *pp = p;
    
    pp->age = 10;
    
    NSLog(@"%d",p->age);
    
    
    return 0;
}
