//
//  main.c
//  06-函数声明
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
//函数声明：就是把函数头拷贝到调用它的前面
//作用：告诉编译器这个函数已经存在了


// 一个完成函数是包含2个部分一个就是函数声明，一个就是函数定义

//   如果一个函数没有写明它的返回值类型，那么它返回值类型默认是int
//   我们写代码的时候必须要带上返回值类型
//   无论是声明函数还是定义函数如果不写返回值类型那么默认都是int类型的
//   函数的声明与函数的定义务必要保持一致


int sum(int num1, int num2);
//char numberOfCharInTwoChar(char char1,char char2);


char numberOfCharInTwoChar(char char1,char char2);

int main(int argc, const char * argv[]) {
   
    int result = sum(10, 20);
    printf("sum = %d\n",result);
    
    char num = numberOfCharInTwoChar('a','A');
    printf("num = %d\n",num);
    
    return 0;
}

//int sum(int num1, int num2)
//{
//    return  num1 + num2;
//}

char numberOfCharInTwoChar(char char1,char char2)
{
    return  char1 - char2;
}


