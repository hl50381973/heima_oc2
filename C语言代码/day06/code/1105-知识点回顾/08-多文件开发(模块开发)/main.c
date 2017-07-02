//
//  main.c
//  08-多文件开发(模块开发)
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//int sum(int num1,int num2);
//int minus(int num1,int num2);
/*
   在不同的.c文件中也不可以有同名的函数定义
 
 
 */
#include "my.h"
#include "your.h"


//int average(int num1,int num2)
//{
//    return  0;
//}

int main(int argc, const char * argv[]) {
 
//    int result = sum(10, 20);
//    result = minus(20, 10);
    
    int result = average(20, 10);
    printf("result = %d\n",result);
    
    return 0;
}
