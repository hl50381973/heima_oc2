//
//  main.c
//  07-变量修饰符(掌握)
//
//  Created by Apple on 14/11/6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  变量的修饰符
  1、修饰长度(针对64位操作系统)
     int    4字节
     short  2字节 %hd
     long   8字节 %ld
     long long 8字节 %lld  
 
 
     unsigned int    4字节 %u
     unsigned short  2字节 %hu
     unsigned long   8字节 %lu
     unsigned long long 8字节 %llu
 
     所有的都是用来修饰int 所以int 是可以省略
  2、修饰符号
     signed    有符号的数(废物)
     unsigned  无符号的数
     //无符号的数，只能表示正数，不能表示负数，最高位不是符号而是数据位  %u
 
     修饰符号修饰符可以修饰所有修饰长度修饰符
 */
int main(int argc, const char * argv[]) {
    
    
    /*
       
      1000 0000 0000 0000 0000 0000 0000 0000
     
      0111 1111 1111 1111 1111 1111 1111 1111
     */
    
    int a = (1 << 31) - 1;//int 所能够表示范围  -2的31次方 ~ 2的31次方-1
    printf("%d\n",a+1);
    
    
    short  h = (1 << 15) -1;  // short 所能表示的范围 -2的15次方 ~ 2的15次方-1
    printf("%hd\n",h);
    
    
    long  l =  ((long)1 << 63) -1; // long 所能表示范围 -2的63次方 ~ 2的63次方-1
   
    printf("%ld\n",l);
    
    long long ll = ((long long)1 << 63) -1;//long long 所能表示范围 -2的63次方 ~ 2的63次方-1
    printf("%lld\n",ll);
    
//  没有 long long long
    
    unsigned int ui = 0b11111111111111111111111111111111; //  0 ~ 2的32次方-1
    printf("%u\n",ui);
    
    unsigned short us = 1; // 0 ~ 2的16次方-1
    printf("%hu\n",us);
    unsigned long  lu = 1; // 0 ~ 2的64次方-1
    printf("%lu\n",lu);
    unsigned long long  llu = 1; // 0 ~ 2的64次方-1
    printf("%llu\n",llu);
    
    return 0;
}
