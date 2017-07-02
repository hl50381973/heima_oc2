//
//  main.c
//  09-实现字符函数(面试题)
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/*
   字符串拷贝函数
   char *  strcpy(char * dest, const char * src)
 
   字符串拼接函数
   char *  strcat(char * dest, const char * src)
   字符串的比较函数
  int strcmp(const char *str1, const char * str2)
 
 */
/**
 *  字符拷贝函数
 *
 *  @param dest 目标
 *  @param src  源
 *
 *  @return 目标
 */
char *  myStrcpy(char * dest, const char * src)
{
    int i = 0;
    
    while (src[i] !='\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    return dest;
}

/**
 *  字符拷贝函数
 *
 *  @param dest 目标
 *  @param src  源
 *
 *  @return 目标
 */
char *  myStrcpy2(char * dest, const char * src)
{
    char *save = dest;
    
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    
    return save;
}


/**
 *  字符拷贝函数
 *
 *  @param dest 目标
 *  @param src  源
 *
 *  @return 目标
 */
char *  myStrcpy3(char * dest, const char * src)
{
    char *save = dest;
    
    while ((*dest++ = *src++));
    
    return save;
}

void test()
{
    char dest[20];
    char src[] = "good";
    //    char *rs =  strcpy(dest, src);
    
    //    char *rs =  myStrcpy(dest, src);
    
    char *rs =  myStrcpy3(dest, src);
    
    printf("%s\n",rs);
    printf("%s\n",dest);
    
    printf("%p\n",rs);
    printf("%p\n",dest);
}

char *  myStrcat(char * dest, const char * src)
{
// 1、记录dest地址
    char *start = dest;
// 2、找到dest的\0位置
    while (*(start++));
    start--;
    
//  开始拷贝
    myStrcpy3(start, src);
    
    return dest;
}

void testStringCat()
{
    char dest[20] = "I am ";
    char src[] = "good";
    
    
    
    char *rs =  myStrcat(dest, src);
    
    printf("%s\n",rs);
    printf("%s\n",dest);
    
    printf("%p\n",rs);
    printf("%p\n",dest);
}
/**
 *  比较两个字符串
 *
 *  @param str1 前面的字符串
 *  @param str2 后面的字符串
 *
 *  @return 如果相同返回0，如果不同，返回前面的字符串与后面字符串中第一个不同字符的ASCII的差
 */
int myStrcmp(const char *str1, const char * str2)
{
    
    while (*str1 == *str2 && *str1 != '\0') {
        str1++;
        str2++;
    }
    
    return *str1 - *str2;
}

int main(int argc, const char * argv[]) {
   
 
    char dest[20] = "a";
    char src[] = "ab";
    

    
    int rs =  myStrcmp(dest, src);
    
    printf("%d\n",rs);
  
    
    return 0;
}
