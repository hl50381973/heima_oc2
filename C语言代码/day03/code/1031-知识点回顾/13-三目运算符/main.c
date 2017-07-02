//
//  main.c
//  13-三目运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  三目运算符：
  条件表达式：由关系运算符或逻辑运算符构成表达式
 
  条件表达式 ? 结果1 : 结果2;
 
  如果条件表达式成立就返回结果1 否则 就返回结果2
 
 */

int test()
{
    int a = 10;
    
    int result  =  a > 4 ?  a : 5;
    
    printf("result = %d\n",result);
    
    return 0;
}

/*
    用户从输入两个整数，输出最大值
 */

int test1()
{
    //  提示用户输入两个整数
    
    printf("请输入两个整数以逗号分隔：\n");
    //  定义两个变量用于接收用的录入
    int num1;
    int num2;
    //  接收用的录入
    scanf("%d,%d",&num1,&num2);
    
    //  找出最大值
    int max =  num1 > num2 ? num1 : num2;
    //  输出结果
    printf("max = %d\n",max);
    
    return 0;
}
/*
    用户从键盘输入三个整数，输出最大值
 */
int main(int argc, const char * argv[]) {
  
// 1、提示用户输入三个整数
    printf("请输入三个整数,以逗号隔开\n");
// 2、定义变量接收用的输入
    int num1,num2,num3;
// 3、接收用户的录入
    scanf("%d,%d,%d",&num1,&num2,&num3);
// 4、找出最大值
// 4.1 找出num1 与 num2 中的最大值
    
    int max = num1 > num2 ? num1 : num2;
// 4.1 找出max 与 num3 中的最大值
    max = max > num3 ? max : num3;
    
// 5、输出结果
    printf("max = %d\n",max);
// bug
    
    
//    int a;
    
    return 0;
}
