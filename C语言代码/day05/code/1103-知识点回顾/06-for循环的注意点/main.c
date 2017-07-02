//
//  main.c
//  06-for循环的注意点
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 //   1、for后面不能直接写分号
 //    for(int i = 0; i < 5;i++);//此处不可写分号
 //    {
 //        printf("i = %d\n",i);
 //    }
 
 //    2、作用域紊乱：你要再循环体中定义变量就必须要有大括号
 //    for(int i = 0; i == 5 ;i++)
 //        int num = 10;
 
 
 */


int main(int argc, const char * argv[]) {
// for循环中作用域
// 1、在for循环外部不可以访问for小括号中定义的变量
// 2、循环体中定义的变量，在for的小括号中不能访问
    
    for(int i = 0;i < 5;i++){
        int j = 2;
        printf("i = %d\n",i);
    }
    
//    printf("%d",i);
    return 0;
}
