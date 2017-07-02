//
//  main.c
//  03-结构体初始化
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   1、定义结构类型
   2、定义结构体变量
   3、对结构体变量初始化

 */
int main(int argc, const char * argv[]) {
//  定义结构体类型
    struct Person{
        int age;
        char *name;
        double height;
    };
//  定义结构体变量
//  先定义结构体变量，然后初始化
    struct Person p1;
//  一一赋值
    p1.age = 10;
    p1.name = "xx";
    p1.height = 1.3;
// 整体赋值
// 赋值的时候，{}中元素的顺序与定义结构体时成员顺序相同
    p1 = (struct Person){20,"小明",2.0};
    
//    int nums[5];
//  数组名称是不可以改变的
//  nums =(int[5]){1,2,3,4,5};
    
//输出
    printf("age = %d,name = %s,height = %.2lf\n",p1.age,p1.name,p1.height);
    
//  定义结构体变量的同时进行初始化
    
    struct Person p2 = {15,"小红",1.5};
    printf("age = %d,name = %s,height = %.2lf\n",p2.age,p2.name,p2.height);
    
// 同种类型的结构体之间可以相互赋值
    p1 = p2;
    printf("age = %d,name = %s,height = %.2lf\n",p1.age,p1.name,p1.height);
    
    
    
    
    return 0;
}
