//
//  main.c
//  07-指针函数(掌握)
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
  指针函数：返回值为指针的函数
 
  局部的变量的地址不可以作为函数返回值，因为局部变量在函数结束时候已经被系统回收了
 */

char *words()
{
    return "today is good day!\n";
}


char *words2()
{
    char worlds[] = "today is good day!\n";
    
    
    
    return worlds;//此处是错误的
}

char *words3()
{
//   申请堆中一块内存
    int len = 20;
    char *words = calloc(len, sizeof(char));
    
    strncpy(words,"today is good day!\n", len - 1);
    
    return words;
}




int main(int argc, const char * argv[]) {
    
//   char *w = words();
//    printf("%s",w);
    
//   char *wr = words2();
//    printf("%s",wr);
    
    char *w = words3();
    *w = 'd';
    
//  当堆中一块内存没有指针指向它时候，那么这一块内容就永远得不到释放
//  在堆中的内存没有释放之前必须有一个指针指向这一块内容
    printf("%s",w);
    free(w);
    w = NULL;
    
    char c = 'a';
    w = &c;
    printf("%c\n",*w);
  

    
    return 0;
}
