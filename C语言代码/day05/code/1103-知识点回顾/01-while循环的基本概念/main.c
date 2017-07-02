//
//  main.c
//  01-while循环的基本概念
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   if后面的代码要么执行一次，要么就不执行
   if(条件表达式){
      语句;
      ....
   }
 
 while循环格式：
   while(条件表达式){
     语句;
     ....
   }
 
 
 */

int test()
{
    //  1、定义一个循环控制变量
    int answer = 0;
    while (answer == 0) {
        printf("我们到了吗？\n");
        scanf("%d",&answer);
    }
    printf("我们到了！\n");
    
    return 0;
}
/*
   循环：用来处理一些重复执行的操作
 
 写循环的具体步骤：
 1、确定需要重复执行的操作
 2、确定循环终止的条件：
    1、在循环开始之前，需要做点事（定义一个循环控制变量并将其初始化）
    2、确定循环约束条件
    3、在每一次循环结束的时候或在循环中，要去改变循环控制变量的值，让它不断接近约束条件
 */
int main(int argc, const char * argv[]) {
   
//  定义变量来控制这个循环：循环控制变量
    int count = 0;
    
    while (count < 10) {
       
       printf("转圈 %d\n",count);
        
       count++;
    }
  

    
    return 0;
}
