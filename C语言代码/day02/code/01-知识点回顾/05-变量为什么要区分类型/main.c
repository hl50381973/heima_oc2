//
//  main.c
//  05-变量为什么要区分类型
//
//  Created by Apple on 14/10/30.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>


//了解
int main(int argc, const char * argv[]) {
 
//  1、为了更加合理使用内存
    int score = 10;
    
    double d = 10.0;
    
    char c = 'a';
//  2、因为数据的存储格式和计算方式不同
    float f = 10.1f;
    
    
    return 0;
}
