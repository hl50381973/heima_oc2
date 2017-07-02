//
//  main.c
//  03-函数参数
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 形参：当定义函数的时候，函数名称后面小括号中参数我们称为形式参数简称形参
 实参：当调用函数的时候，函数名称后面小括号中的参数我们称为实际参数简称实参
 
 1、实参与形参是一一对应的
 2、形参是什么类型的那么实参也必须传人什么类型的值
 3、形参列表中不可以有同名的形参
 4、在函数内部也不可以直接定义与形参同名变量
 5、基本数据类型作为函数参数传递的时候是值传递
 
 */

double sum(double  num1,double num2)
{
    
//    int num1 = 20;//这里不可以定义与形参同名的变量
    
    
    return num1 + num2;
}

double minus(double num1,double num2)
{
    num1 = 20.6;
    return  num1 - num2;
}

void test()
{
    
    double a = 10.3;
    double b = 5.1;
    
    double c = a;
    
    c = 30.0;
    printf("a = %lf,c = %lf\n",a,c);
    
    
    //    double rs = sum(10.4,b);
    
    double rs = minus(b,a);

    //    printf("b = %lf,rs = %lf\n",b,rs);//
    
}

//基本数据类型作为函数参数传递的时候是值传递
//值传递：仅仅是把实参的值赋值给形参，改变形参的值，并不影响实参值(重点)
void swap(int num1,int num2)
{
    printf("前:num1 = %d,num2 = %d\n",num1,num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("前:num1 = %d,num2 = %d\n",num1,num2);
}



int main(int argc, const char * argv[]) {
  
    int a = 10;
    int b = 20;
    printf("前：a = %d,b = %d\n",a,b);
//    int temp = a; //定义一个空瓶子
//    
//    a = b;
//    
//    b = temp;
    
    swap(a, b);
    
    printf("后：a = %d,b = %d\n",a,b);
    
    return 0;
}
