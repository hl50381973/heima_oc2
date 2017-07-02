//
//  main.c
//  05-if的注意点
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 
 
 */

int test()
{
    // 在C语言中所用数值都是有真假性
    //    if(1){
    //        printf("所有数值都有真假性\n");
    //    }
    int a = 10;
    //   当变量与常量进行等于或不等于判断的时候，一般会把常量写在前面
    if (2 == a) {
        printf("a 等于 2\n");
    }
    return 0;
}

int test1()
{
    //只有一个分号的语句是一个空语句，空语句也是语句
    //所用在if小号后面不要直接写分号
    int age = 10;
    if (age < 3);//此处不可以有分号
    {
        printf("小屁孩\n");
    }
    
    return 0;
}

int test2()
{
    //  if 代码块中定义变量不可以在外部代码块中访问
    //  作用紊乱：如果想再if语句中定义变量，那么就必须加上大括号
    //    int age = 18;
    //    if (age <= 3)
    //        int num = 20;
    //
    //    printf("num = %d",num);
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int age = 10;
    
//  if语句必须可以连接一起，不可以有无头的if
    if (age == 2){
        printf("年龄等于2\n");
        printf("刚会走\n");
    }else if (age == 3)
        printf("年龄等于3\n");
    else
        printf("其他\n");

    
    
    return 0;
}
