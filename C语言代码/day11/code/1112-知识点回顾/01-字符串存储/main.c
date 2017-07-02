//
//  main.c
//  01-字符串存储
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   总结：
       字符数组存储的字符是在栈，栈是可读可写的，所以字符的内容可以任意系修改
       使用char类型的指针定义的字符串，它是在常量区，常量区是一个只读区，所它所指向的内容是不可以修改的
   使用场景：
   当你定义的字符串中的内容在后面需要修改的时候就使用字符数组
   
   当你定义的字符串不需要修改的时候就使用字符指针来定义字符串
   1、常量区的东西无论使用多少次，在内存只有一份
   2、效率高，省内存
   3、里面内容不可以修改，可以保证程序的安全性
 
 */



// 定义字符串
void test()
{
    //定义数组的第一种方式：使用字符数组
    char name[] = "xhh";
    
    name[1] = 'w';
    
    //    char 类型的指针
    char *name1 = "nc";
    char *name2 = "nc";
    
    printf("%s\n",name);
    *name1 = 's';//因为这个指针指向的是常量区的字符串，所它不能修改其所指向内容，他没有权限，程序会在此处崩溃
    
    //    定义不同字符变量
    char c = 's';
    char *cp = &c;
    *cp = 'n';
    printf("%c\n",*cp);
    
}
/*
   字符数组 与 字符指针的区别
 
 
 */

void testString()
{
    char *words  = "today";
    char *sb = "today";
    char *xx = "today";
    
    printf("%p\n",words);
    printf("%p\n",sb);
    printf("%p\n",xx);
}


int main(int argc, const char * argv[]) {
    
  
   char name[] = "xhh";
//    char name[] = {'x','h','h','\0'};
    
   char *words  = "today";
   char *sb = "today";
   char *xx = "today";
    
    printf("%p\n",words);
    printf("%p\n",sb);
    printf("%p\n",xx);
    
    testString();
    
    
    return 0;
}
