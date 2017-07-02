//
//  main.c
//  02-带参数宏定义(掌握)
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 宏名的命名规范
 1、全部大写有多个单词中间使用下划线隔开(常用)
 2、以k开头的驼峰标识(不常用)
 
 
 
 
 带参数的宏定义：把出现宏名地方都会把宏名后面小括号中的参数代入到宏后面的表达式中，然后进行替换
 格式：#define 宏名(参数列表)  表达式
 
 注意点：1、参数列表中没有类型
        2、宏名与括号之间一定不要加空格
 
带参数的宏与函数的区别
1、函数有一个调用过程，会开辟新存储空间，需要花费一些开销的
2、宏仅仅是做一个替换的操作

使用场景：
1、当计算比较简单，参数比较少的时候使用宏，宏提高运算效率
2、当逻辑比较复杂、参数多的时候使用函数

宏的注意点：
1、如果你做题，宏仅仅是做一个替换的操作
2、如果自己写宏定义，那么所有出现参数以及运算结果的地方都要加上括号
 
3、宏有一些固有的缺点是没有办法消除的，在使用带参数的宏的时候不要在参数使用++ -- += -= /= *= %=
*/

#define MAX(num1,num2)  num1 > num2 ? num1 : num2

#define SUM(num1,num2)  (num1 + num2)

#define POW(num) ((num) * (num))

int max(int num1,int num2)
{
    return  num1 > num2 ? num1 : num2;
}

int main(int argc, const char * argv[]) {
 
    
//    int rs = max(10,2);
    int a = 10;
    int b = 20;
    
//    int  rs =   MAX(a, b);
//             30           3    =  90
//    int rs =SUM(a, b) * SUM(1, 2);
    
    
//    int rs = POW(2 + 3); // 25
             // 2 + 3 * 2 + 3 = 2 + 6 + 3 = 11
    int num = 2;
    int rs = POW(num++);//(num++) * (num++)
    
    printf("%d\n",rs);
    
    
    return 0;
}
