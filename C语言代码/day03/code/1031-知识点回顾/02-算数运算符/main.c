//
//  main.c
//  02-算数运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   算术运算：
   +  正号
   -  负号
 
 
   +  加
   -  减
   *  乘
   /  除
 
   %  取模 或 取余
   1、取模运算符的正负性取决于前面那个操作数正负
   2、取模运算符的操作数只能是整数
 
 */

//正号与负号
int test()
{
    
    int a = 10;
    
    int b = -a;
    
    printf("a = %d, b = %d\n",a,b);
    return 0;
}

int test1()
{
    int a = 10 + 4;
    int b = 10 - 20;
    int c = 1 * 7;
    int d = 8 / 4;
    
    int e = 7 * 8 - 10 * 2;
    printf("%d\n",e);
    
    
    int m = 5 % 2;
    
    //    m = 5.5 % -2; //错
    
    printf("%d\n",m);
    
    return 0;
}

/*
   用户输入一个秒数，然后输出对应的多少分多少秒;
 
*/
int test2()
{
    //  1、提示用户输入
    printf("请入一个秒数(必须是整数):\n");
    //  2、定义一个变量来接收用户的输入
    int totalSecond;
    //  3、使用scanf来接收用的输入
    scanf("%d",&totalSecond);
    //  4、计算
    //  4.1 计算分钟数
    int minute = totalSecond / 60;
    //  4.2 计算秒数
    int second = totalSecond % 60;
    //  5、输出结果
    printf("%d分%d秒\n",minute,second);
    
    return 0;
}

/*
    有一个不确定正整数n ,要求n ? 5 结果总是在0~4之间   答案： %
 */




int main(int argc, const char * argv[]) {
  

    
    return 0;
}
