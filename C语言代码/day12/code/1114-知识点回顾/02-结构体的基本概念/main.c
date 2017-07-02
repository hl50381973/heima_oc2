//
//  main.c
//  02-结构体的基本概念
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  构造类型：由已有的数据类型构成类型
  1、数组：多个同种类型的数据构成的那么一种类型
     特点：只能存放一种数类型
  2、结构体：从来存放表示某种特定含义的一组数据
           它是对数据封装
           函数对功能封装
     好处：提高代码的可读性
          提高数据易用性
          提高代码可维护性
 
     定义结构体：
         1、定义结构类型
             struct 结构类型名称{
             成员类型 成员名称;
             ...
             };//必须加分号
         2、通过结构体类型定义结构变量
            struct 结构类型名称 结构体变量名称;
 */



int main(int argc, const char * argv[]) {

    //    int scores[] = {59,60};
    
    //     int  年龄  姓名 char *  性别 char  身高 double  体重 double
    
    
    //    int age;
    //    char sex;
    //    double height;
    //    double weight;
    //    char *name;
    //
    //    int ages[50];
    //    char sex[50];
    //    ....
    //  定义一个人结构体类型
    struct Person{
        int age;
        char sex;
        double height;
        double weight;
        char *name;
    };
    
    //  int num;
    //  int * pointer;
    //  定义结构体变量
    struct Person person;
    
    //  访问结构体成员
    person.age = 10;
    
    person.sex = 'M';
    
    person.weight = 20.2;
    
    person.height = 1.2;
    
    person.name = "小明";
    
    
    printf("age = %d,sex = %c,weight = %.2lf,height = %.2lf,name = %s\n",person.age,person.sex,person.weight,person.height,person.name);
    
    
    
    
    return 0;
}
