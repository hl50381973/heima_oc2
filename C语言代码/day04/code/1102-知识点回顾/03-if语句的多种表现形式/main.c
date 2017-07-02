//
//  main.c
//  03-if语句的多种表现形式
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  第一种：如果条件表达式成立就执行小括号后面大括号中的语句
  if(条件表达式){
     语句;
     ...
  }
 
  第二种：如果条件表达式成立就执行if后面小括号后面大括号中的语句，否则就执行else后面大括号中语句
         这里至少有一个代码会被执行
  if(条件表达式){
    语句;
    ...
  }else{
     语句;
     ...
  }
 
  第三种:
 
  if(条件表达式){
     语句;
     ....
  }else if(条件表达式2){
     语句;
     ....
  }else if(条件表达式3){
     语句;
     ....
  }
  ....
  else{
     语句;
     ....
  }
 
  特点：1、这么多代码块中最多只有一个代码块会被执行
       2、当程序执行条件表达式3时候，说明其前面的所有表达式都不成立
       3、如果if语句中有else 那么必有一个代码块会被执行到
 
  if语句的特点：
  if语句：1、都是if开头
         2、可以有任意个else if
         3、最多只能有一个else语句
         4、如果if语句后面只有一条语句，那么if后面的大括号是可以省略的(通常开发也不这么干)
 
  if嵌套：if语句内部可以嵌套其他if语句
  总结： if语句也是语句，只要能够写语句的地方都可以写if语句
  if(条件表达方式){
    语句;
    ..
    if(条件表达式){
        语句;
         ...
     }
     语句;
     ....
  }
 
 
 
 */

int test()
{
    int money;
    //  提示用户输入
    printf("请猜一个数\n");
    scanf("%d", &money);
    
    if (money == 5) {
        printf("恭喜你猜对了\n");
        //        printf("恭喜你猜对了\n");
        //        printf("恭喜你猜对了\n");
    }else{
        printf("很可惜，猜错了！\n");
    }
    
    return 0;
}

int test2()
{
    //  定义一个变量，用来接收用的录入
    int guess;
    //  提示用来录入
    printf("请猜一个数\n");
    //  接收用来的录入
    scanf("%d",&guess);
    //  判断，然后输出结果
    
    if (guess == 5) {
        printf("猜对了\n");
    }else{
        
        if (guess > 5) {
            printf("猜大了\n");
        }else{
            printf("猜小了\n");
        }
    }
    
    return 0;
}


int test3()
{
    //  定义一个变量，用来接收用的录入
    int guess;
    //  提示用来录入
    printf("请猜一个数\n");
    //  接收用来的录入
    scanf("%d",&guess);
    //  判断，然后输出结果
    
    if (guess == 5) {
        printf("你猜对了\n");
    }else if(guess > 5){
        printf("你猜大了\n");
    }else{
        printf("你猜小了\n");
    }
    
    return 0;
}

//省略大括号的if语句：当if后面只有一条语句的时候，那么if后面的大括号可以省略
int test4()
{
    int age = 8;
    
    if (age >= 18)
        printf("成年人\n");
    
    
    
    printf("小人\n");
    
    return 0;
}
/*
   如何把省略大括号的if语句，加上大括号
   1、从上到下找else 或else if 
   2、从else 或 else if向上找if,找到的第一个if就是与之配对的if
 */
int main(int argc, const char * argv[]) {
   

    int guess = 5;
    if (guess <= 18){
        if (guess == 5){
            printf("你猜对了\n");
        }else if(guess > 5){
            printf("你猜大了\n");
        }else{
            printf("你猜小了\n");
        }
    }
    
        
    
    
    
    return 0;
}
