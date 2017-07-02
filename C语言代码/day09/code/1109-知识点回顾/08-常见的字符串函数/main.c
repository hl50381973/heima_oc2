//
//  main.c
//  08-常见的字符串函数
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/**
 用来计算字符串长度的函数，不包含\0
   size_t strlen(const char *str);
 
 字符串拷贝函数
  把src中内容拷贝到dest中,它会覆盖原来的内容，它会把src中的\0,没有覆盖内容不变
  如果scr中的长度超过了dest所能容纳的长度就可能导致程序崩溃
  strcpy(char * dest, const char * src);
 
   len:表示要拷贝的字符串长度，不包含\0
   strncpy(char * dest, const char *src, size_t len)
 
 字符串拼接函数
     把src中内容拼接在dest原有字符串后面,从前往后找，找到第一个\0位置开始进行拼接
     如果scr中的长度超过了dest所能容纳的长度就可能导致程序崩溃
 
     strcat(char * dest, const char * src)
 
  字符串比较：
  str1 与 str2 中从第一个字符开始进行比较，若相等就找后面的字符是否相等，如果都相同就返回0，如果遇到不相等字符就返回这个两个字符的ASCII值的差
  strcmp(const char *str1, const char * str2);
 */

void test()
{
    //   用来计算字符串长度的函数
    int len = strlen("today");
    printf("len = %d\n",len);
    
}

void testStrcpy()
{
    char dest[10];
    
    char src[] = "today is good day";
    
    strcpy(dest, src);
    
    printf("%s\n",dest);
    
    for (int i = 0 ; i < 10; i++) {
        printf("%c",dest[i]);
    }
    //    printf("%c",'\0');
    
}

void testStrncpy()
{
    char dest[10];
    
    char src[] = "today is good day";
    
    int len = sizeof(dest);
    //  len 表示要拷贝多个字符到目标字符数组中
    strncpy(dest, src,len-1);
    
    printf("%s\n",dest);
    
}


void testStrcat()
{
    char dest[20] = "today ";
    char src[] = "is  good day  and i like it";
    
    //    strcat(dest, src);
    //  计算需要拼接的长度
    size_t len = sizeof(dest) - strlen(dest) - 1;
    
    strncat(dest, src,len);
    
    printf("%s\n",dest);
}


int main(int argc, const char * argv[]) {
    
    char src[] = "ad";
    char dest[] = "aa";
    
    int rs = strcmp(src, dest);
    printf("%d\n",rs);
    
  
    
    return 0;
}
