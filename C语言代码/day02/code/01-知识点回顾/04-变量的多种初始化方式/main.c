//
//  main.c
//  04-变量的多种初始化方式
//
//  Created by Apple on 14/10/30.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
//  先定义变量再进行初始化
//  当定义变量的时候，这个变量里面究竟有什么东西是不确定的
    int score;
//  变量的第一次赋值称为变量的初始化
    score = 105;
    
    printf("%d\n",score);
    
//  定义变量的同时进行初始化
//  在相同的作用域内变量不可重名
    int score1 = 106;//最常用
    
    
//  同时定义多个变量
    int a,b,c,d;
    
    a = b = c = d = 10;
    
    printf("%d,%d,%d,%d\n",a,b,c,d);
    
    return 0;
}
