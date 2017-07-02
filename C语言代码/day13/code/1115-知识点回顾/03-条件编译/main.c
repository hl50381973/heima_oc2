//
//  main.c
//  03-条件编译
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 分支结构的if：当条件满足的时候就会执行if后面的语句
             在程序运行的阶段进行判断的
 条件编译：当条件满足的时候才会编译#if后面的语句
    1、条件编译中的条件只能由宏定义和常量组成，不能出现变量
    2、编译时候进行判断的
 
  注意点：
  1、必须是以#endif结尾
*/

void test()
{
    int week = 3;
    
    //    if (week == 1) {
    //        printf("星期一\n");
    //    }else if(week == 2){
    //        printf("星期二\n");
    //    }else if(week == 3){
    //        printf("星期三\n");
    //    }else if(week == 4){
    //        printf("星期四\n");
    //    }else if(week == 5){
    //        printf("星期五\n");
    //    }else if(week == 6){
    //        printf("星期六\n");
    //    }else if(week == 7){
    //        printf("星期日\n");
    //    }else{
    //        printf("药不能停\n");
    //    }
#define week 3
    
#if week == 1
    printf("星期一\n");
#elif week == 2
    printf("星期二\n");
#elif week == 3
    printf("星期三\n");
#elif week == 4
    printf("星期四\n");
#elif week == 5
    printf("星期五\n");
#elif week == 6
    printf("星期六\n");
#elif week == 7
    printf("星期日\n");
#else
    printf("药不能停\n");
#endif
}

//取消某个宏定义
//#undef DEBUG
//使用场景
//如果定义了某个宏
#ifdef DEBUG
#define  Log(formatter,...) printf(formatter,## __VA_ARGS__);
//__VA_ARGS__ 固定写法表示多参数
//## 表示可以不带参数
#else
#define  Log(formatter,...)
#endif


//判断一个宏定义是否存在

#ifdef 宏名
//   如果定义某个宏编译这里面的语句
#endif

#ifndef 宏名
// 如果没有定义某个会编译这里面的语句
#endif
// 例如

//#define A 

void test1()
{
#ifdef A
    printf("宏A已经定义了\n");
#endif
    
#ifndef A
    printf("宏A没有定义了\n");
#endif
}

//条件编译可以防止头文件的重复包含(不要掌握)
#ifndef ___115________me__
#define ___115________me__

#include <stdio.h>

int sum(int num1,int num2);
int minus(int num1,int num2);
int max(int num1,int num2);

#endif /* defined(___115________me__) */

#ifndef ___115________me__
#define ___115________me__

#include <stdio.h>

int sum(int num1,int num2);
int minus(int num1,int num2);
int max(int num1,int num2);

#endif /* defined(___115________me__) */


int main(int argc, const char * argv[]) {
  
    int rs = sum(10, 20);
    printf("rs = %d\n",rs);

    return 0;
}
