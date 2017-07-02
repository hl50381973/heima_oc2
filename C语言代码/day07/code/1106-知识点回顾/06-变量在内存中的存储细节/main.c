//
//  main.c
//  06-变量在内存中的存储细节
//
//  Created by Apple on 14/11/6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
     在方法内部定义变量：局部变量
     %p是用来输出地址的
     计算机中最小存储单元就是字节
 
     1、当定义变量的时候，首先会分配地址大的字节
     2、所以先定义的变量的地址大于后定义的变量的地址
     3、变量的地址就是变量所在存储空间最小的那个地址
     4、高位在高字节上，低位在低字节上
 
 注意点：从前到后定义的变量的地址不一定是连在一起的
        但是一个变量中的地址肯定是连在一起的
 */
int main(int argc, const char * argv[]) {
    
    int a = 10; //0000 0000  0000 0000  0000 0000 0000  1010
    int b = 5;  //0000 0000  0000 0000  0000 0000 0000  0101
    
    printf("%p\n",&a);
    printf("%p\n",&b);
    
//    char *p = &a;
//    
//    printf("%p,%d\n",p,*p);
//    printf("%p,%d\n",p+1,*(p+1));
//    printf("%p,%d\n",p+2,*(p+2));
//    printf("%p,%d\n",p+3,*(p+3));
//
    char c = 'a';
    printf("%p\n",&c);
  
    
    
    return 0;
}
