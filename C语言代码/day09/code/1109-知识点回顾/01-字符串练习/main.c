//
//  main.c
//  01-字符串练习
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

#include <string.h>

void test()
{
    char str[] = "today\n";
    //  strlen 只计算\0前面的可见字符串有多长
    size_t  len = strlen(str);
    
    printf("%lu\n",len);
}


/*
   写一个函数实现strlen的功能
 */

int stringLen(char string[])
{
//  1、定义一个len用来累计字符串长度
    int len = 0;
//  2、循环累计长度
    for(int i = 0;string[i] !='\0';i++){
        len++;
    }
//  返回字符串的长度
    return len;
}
/**
 
   计算字符串长度
 */
int stringLen2(char string[])
{
    //  1、循环累计长度
    int len = 0;
    for(;string[len] !='\0';len++);
    //  返回字符串的长度
    return len;
}

/**
 
 计算字符串长度
 */
int stringLen3(char string[])
{
    //  1、循环累计长度
    int len = 0;
    for(;string[len];len++);
    //  返回字符串的长度
    return len;
}

int stringLen4(char string[])
{
    //  1、循环累计长度
    int len = 0;
    while (string[len++]);
    //  返回字符串的长度
    return len - 1;
}




int main(int argc, const char * argv[]) {

    char words[] = "";
    
//    int len = stringLen(words);
    
    int len = stringLen2(words);
    printf("%d\n",len);
    
    return 0;
}
