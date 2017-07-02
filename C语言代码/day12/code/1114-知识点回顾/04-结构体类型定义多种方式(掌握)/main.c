//
//  main.c
//  04-结构体类型定义多种方式(掌握)
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 第一种方式
  1、先定义结构体类型
  2、定义结构变量
 */
void test()
{
    
    struct Person{
        int age;
        double height;
    };
    
    struct Person p1;
}

/*
   定义结构体类型的同时定义结构变量
 */
void test1()
{
    struct Person{
        int age;
        double height;
    } p1,p2 = {20,1.75};
    
    p1 =(struct Person){10,1.2};
    
    printf("age = %d,height = %.2lf\n",p1.age,p1.height);
    
    printf("age = %d,height = %.2lf\n",p2.age,p2.height);
    //  结构体类型定义是不可以重名的
    //    struct Person{
    //        int age;
    //        double height;
    //    } p3,p4 = {20,1.75};
}

/*
   定义匿名的结构类型的同时定义结构体变量
 */

int main(int argc, const char * argv[]) {
    
    struct{
        int age;
        char sex;
    } p1,p2 = {20,'M'};
    
    p1.age = 10;
    p1.sex = 'W';
    printf("age = %d,sex = %c\n",p1.age,p1.sex);
    
    p1 = p2;
    printf("age = %d,sex = %c\n",p1.age,p1.sex);
    //
    //    p1 = (struct) {10,'w'};
    //   1、不支持整体赋值
    //   2、结构体类型不能重复使用
    
    struct{
        int age;
        char sex;
    } p3,p4 = {20,'M'};
    
    
    
    return 0;
}
