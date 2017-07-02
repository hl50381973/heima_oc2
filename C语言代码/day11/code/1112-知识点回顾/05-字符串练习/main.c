//
//  main.c
//  05-字符串练习
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 
 6、写一个函数计算字符串的长度
 7、写一个函数把字符串反转
 8、写一个函数对字符串数组按字母顺序排列后输出(可以使用字符串函数)
 */
/**
 *  计算字符串长度
 *
 *  @param string 字符串
 *
 *  @return 字符串的长度
 */
int stringLength(char *string)
{
//  定义一个变量用来累计字符串长度
    int length = 0;
    
    while (string[length] != '\0') {
        length++;
    }
    
    return length;
}

/**
 *  计算字符串长度
 *
 *  @param string 字符串
 *
 *  @return 字符串的长度
 */
int stringLength2(char *string)
{
    char *end = string;
    
    while (*(end++) != '\0');
    
    return end - string - 1;
}

/**
 *  翻转字符串
 *
 *  @param string 字符串
 */
void reverseString(char *string)
{
//   计算字符串的长度
    int len = stringLength(string);
    
    char *start = string;
    
    char *end = string + len - 1;
    
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
    
}

/**
 *  翻转字符串
 *
 *  @param string 字符串
 */
void reverseString2(char *string)
{
    
    int len = stringLength(string);
    for (int start = 0; start < len / 2; start++) {
//       计算需要进行交换的后面的那个元素的下标
        int end = len - start - 1;
//      交换
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        
    }
    
    
}

void test()
{
    char str[] = "abcde";
    
    int len =  stringLength2(str);
    printf("len = %d\n",len);
    
    reverseString(str);
    reverseString2(str);
    printf("%s\n",str);
}

// 8、写一个函数对字符串数组按字母顺序排列后输出(可以使用字符串函数)
#include <string.h>
//void sortStrings(char (*strs)[10],int length)
void sortStrings(char strs[][10],int length)
{
    int cols = sizeof(strs[0]) / sizeof(char);
    
    for (int i = 0; i < length - 1; i++) {
        
        for (int j = i + 1; j < length; j++) {
            
            if (strcmp(strs[i], strs[j]) > 0) {
                
//                char *temp = strs[i];
//                strs[i] = strs[j];
//              交换二维数组中的字符串
                char temp[cols];
                
                strcpy(temp, strs[i]);
                
                strcpy(strs[i], strs[j]);
                
                strcpy(strs[j], temp);
                
            }
            
        }
        
    }
    
    
}

void testString()
{
    
    char names[][10] = {
        "bml",
        "xtf",
        "zjl",
        "jordon",
        "jora",
        "rose"
    };
    
    int len = sizeof(names) / sizeof(names[0]);
    
    sortStrings(names, len);
    
    
    for (int i = 0; i < len; i++) {
        printf("%s\n",names[i]);
    }
    
}
/**
 *  字符串数组排序
 *
 *  @param string 字符
 *  @param length 长度
    command + ctrl + e 对变量重命名
 */
void sortStrings2(char *strings[],int length)
{
    for (int i = 0; i < length - 1; i++) {
        
        for (int j = 0; j < length - 1 - i; j++) {
            
            if (strcmp(strings[j], strings[j+1]) > 0) {
                char *temp = strings[j];
                strings[j] = strings[j+1];
                strings[j+1] = temp;
            }
        }
        
    }
    
}


int main(int argc, const char * argv[]) {

    
    char *names[] = {
        "bml",
        "xxf",
        "xjl",
        "jordon",
        "jora",
        "rose"
    };
    
    int len = sizeof(names) / sizeof(char *);
    
    sortStrings2(names, len);
    
    for (int i = 0; i < len; i++) {
        printf("%s\n",names[i]);
    }
    
    
    return 0;
}
