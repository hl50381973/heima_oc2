//
//  main.c
//  08-函数指针(理解)
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   函数指针：指向函数的指针
 
   函数指针定义格式：指针所指向的函数的返回值类型 (*函数指针名称)(指针所指向的函数的形参列表)
 
   写个函数指针的步骤：
     1、拷贝所要指向的函数
     2、把函数名称使用小括号扩起来
     3、在函数名称前面加*
     4、修改函数名称为指针名称
   
   函数指针的指向是可以改变的，但必须指向同类型的函数
   同类型的函数：返回值类型与形参列表都相同函数
 
 */

void test()
{
    printf("空参空返回值的函数\n");
}
/*
 
 
 */

void test1()
{
    //  test后面的括号是指向test所指向的代码
    //  test本身是一个指针
    test();
    printf("%p\n",test);
    //    (0x100000ef0)();
    
    void (*mothedP)();
    
    mothedP = test;//注意这里一定不要写括号
    // 第一种调用方式
    mothedP();
    //  第二种调用方式
    (*mothedP)();
    
    
    
    
}

int sum(int num1,int num2)
{
    return  num1 + num2;
}

int minus(int num1,int num2)
{
    return num1 - num2;
}



int main(int argc, const char * argv[]) {


    int (*pointer)(int num1,int num2);
    pointer = sum;
    
    int rs = pointer(10,20);
    printf("rs = %d\n",rs);
    
    pointer = minus;
    rs = pointer(10,20);
    printf("rs = %d\n",rs);
    
    return 0;
}
