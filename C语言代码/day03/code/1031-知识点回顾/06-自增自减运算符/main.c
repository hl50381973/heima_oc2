//
//  main.c
//  06-自增自减运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
   自增自减运算符
   无论++在前还是++在后a本身都会自增 1
   a = 2
   ++a;  a本身会自增1,它的返回值(结果)是原来的 a + 1的值
   a++;  a本身会自增1,它的返回值(结果)是原来的 a的值
 
   无论--在前还是--在后a本身都会自减 1
   --a;  a本身会自减1，它的返回值(结果)是原来的a - 1 的值
   a--;  a本身会自减1，它的返回值(结果)是原来的a 的值
 
 */

int test()
{
    
    

    
    
    int a = 10;
    int b = ++a;// 等价于 a = a + 1;
    printf("b = %d\n",b);// 11
    int c =  a++;// 等价于 a = a + 1;
    printf("c = %d\n",c);// 11
    printf("a = %d\n",a);
    
    return 0;
}

int test1()
{
    int a = 2;
    
    int b = a++ + a++; // a = 4
    
    b = ++a + a++; // a = 6
    
    b = ++a + ++a; // 8
    
    b = a++ + ++a;
    
    printf("a = %d,b = %d\n",a,b);
   
    return 0;
}

int test2()
{
    int a = 10;
    
    int b = a--;
    printf("b = %d\n",b);
    int c = --a;
    printf("c = %d\n",c);
    printf("a = %d\n",a);
    return 0;
}

int test3()
{
    int a = 10;
    
    int b = a-- + a--;// a = 8
    b = --a + --a; // a = 6
    b = --a + a--;
    
    
    printf("b = %d",b);
    
    return 0;
}

int main(int argc, const char * argv[]) {
   
    int a = 2;
    
//    a++;
//  1、 a = a + 1;
//  2、 (a++) = (原来)a
//  3、 a++ 先参与其他运算然后再自增1
    
    
//    ++a; // 先自增1然后再参与其他运算
//  1、a = a + 1
//  2、(++a) = (原来)a + 1
    
    int b = ++a;
    printf("b = %d\n",b);
    
    
    
    return 0;
}
