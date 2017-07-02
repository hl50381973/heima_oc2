//
//  main.c
//  05-结构体类型的作用域(掌握)
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
   在函数内部，结构类型作用域就如同局部变量一样
   在外边定义的结构体类型像全局变量的作用域
   作用域：从定义的那一行开始直到文件的结束
   注意点：结构类型不能声明
 
   结构体类型的作用，除了不能声明以外，其他与普通变量一样
 */


struct Person{
    int age;
    char sex;
};

int main(int argc, const char * argv[]) {
   
    struct Person p2;
    
    p2.sex = 's';
    p2.age = 10;
    
    struct Person{
        int age;
    };
    
    
    
    struct Person p = {10};
//    p.sex = 'w';
    printf("age = %d\n",p.age);
    
    {
        struct Person p = {20};
        struct Monkey{
            char *name;
        };
    
    
    }
//    struct Monkey m;
    
    
    return 0;
}


