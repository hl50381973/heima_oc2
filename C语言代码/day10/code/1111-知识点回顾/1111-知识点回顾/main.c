//
//  main.c
//  1111-知识点回顾
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   二维数组：元素为一维数组的数组
 
   定义：数据类型 数组名称[一维数组的个数][一维数组的元素个数]
 
   二维数组：平面（由行和列组成的）
            行：一维数组的个数
            列：一维数组的个数
 
 
   二维数组初始化：
   1、先定义再初始化
      int nums[2][2];
      nums[0][0] = 10;
      nums[0][1] = 11;
      nums[1][0] = 12;
      nums[1][1] = 15;
   2、定义的同时进行初始化
      int nums[2][2] = {{10,11},{12,15}};
      int nums[][2] = {{10},{12}};
      int nums[][2] = {10,11,12};
       ...
   
   二维数组应用：
   1、二维数组作为函数参数传递地址
   2、二维数组作为函数参数传递的时候必须指定后面的一维数组的元素个数
 
   字符串：由多个字符组成的有序集合，必以'\0' 结尾
   字符数组：由字符组成数组
   
   输出字符串：
   printf("%s\n",str);
 
   接收字符串：
   char str[20];
   scanf("%s",str);
   1、不能接收空格，它遇到空格就结束了
   2、它有可能导致数组越界，而导致程序崩溃
  
   gets(str);
   1、可以接收空格
   2、它有可能导致数组越界，而导致程序崩溃
 
   fgets(str,sizeof(str),stdin);
   1、可以接收空格
   2、它不会造成数组越界，而导致错误

 
 
 */

void printArray(char map[][6],int rows)
{
    
}



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
