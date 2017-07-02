//
//  main.c
//  08-sizeof运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  sizeof运算符：用来计算常量，变量，以及数据类型(指的是这种数据类型的变量或常量)所占用存储空间的字节数
 
 
 */

int test()
{
    
    //  常量
    //    sizeof 是运算符不是函数，当它用在常量上面可以省略小括号
    //    sizeof 常量 或 sizeof(常量)
    
    int  size  = sizeof(1);
    printf("%d\n",size);
    
    size = sizeof 2.3;
    printf("%d\n",size);
    
    size = sizeof 2.3f;
    printf("%d\n",size);
    
    size = sizeof 'A';
    printf("%d\n",size);

    return 0;
}

int test1()
{
// 当sizeof 作用在变量上 sizeof(变量名称) sizeof 变量名称
    int a = 10;
    int size  =  sizeof(a);
    printf("size = %d\n",size);
    
    float b;
    size  =  sizeof(b);
    printf("size = %d\n",size);
    
    char c;
    size  =  sizeof c;
    printf("size = %d\n",size);
    
    double d;
    size  =  sizeof d;
    printf("size = %d\n",size);
    
    return 0;
}


int main(int argc, const char * argv[]) {

//  sizeof作用在数据类型，表示这个中数据类型的常量或者变量所占用存储空间
//  类型本身是不占用存储空间，只有这种类型的数据才占用存储空间
//  当sizof作用在数据类型上，那么小括号是不可以省略的
    int i; // 4
    
    int size = sizeof(int);
    printf("%d\n",size);
    
//    size = sizeof double;
    printf("%d\n",size);
    
    
    return 0;
}
