//
//  main.c
//  07-结构体数组
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   结构体数组：数组元素为结构体数组
   定义结构体数组
   结构类型 数组名称[元素个数];
 
   数组元素的类型 数组名称[元素个数];
 
 
 */

//一般情况下结构体类型都是定义在函数的外部

struct Dog{
    char *name;
    int age;
};

void test()
{
    //    int nums[] = {1,2,3,4};
    //    结构体如果没有初始化，它里面都是垃圾值
    //  第一种方式：向定义结构体数组然后初始化
    struct Dog dogs[5];
    dogs[0] = (struct Dog){"旺财",1};
    dogs[1].age = 1;
    dogs[1].name = "大黄";
    
    
    //  遍历结构体数组
    
    for(int i = 0;i < 5;i++)
    {
        printf("age = %d,name = %s\n",dogs[i].age,dogs[i].name);
    }
}

void test2()
{
    //  定义结构体数组的同时进行初始化
    //  如果没有显式初始化的结构体，那么这个结构体中所有成员都会被初始化为0
    struct Dog dogs[10] = {{"旺财",1},{"大黄",2},{"来福",3},{"小黑",4},{"小白",5}};
    //  计算数组的元素个数
    int len = sizeof(dogs) / sizeof(struct Dog);
    
    for(int i = 0;i < len ;i++)
    {
        printf("age = %d,name = %s\n",dogs[i].age,dogs[i].name);
    }
    
}


int main(int argc, const char * argv[]) {
   

    
    return 0;
}
