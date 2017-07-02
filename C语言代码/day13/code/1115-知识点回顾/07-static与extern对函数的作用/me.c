//
//  me.c
//  1115-知识点回顾
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

//声明一个内部函数
static int sum(int num1,int num2);
//完整定义一个外部函数
extern int average(int num1,int num2)
{
   return sum(num1, num2) / 2;
}

//定义一个内部函数
static int sum(int num1,int num2)
{
    return  num1 + num2;
}


