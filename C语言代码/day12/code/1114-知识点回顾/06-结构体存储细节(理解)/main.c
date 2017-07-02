//
//  main.c
//  06-结构体存储细节(理解)
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   1、结构体变量的地址就是第一个成员的地址
   2、结构体类型本身是不占用存储空间的，就如通int 是不占用存储空间的一样
   3、对于相同数据类型的结构体所占用的存储空间为所有成员之和
 
 */

void test()
{
    struct Date{
        int year;
        int month;
        int day;
    };
    
    struct Date date;
    
    printf("%p\n",&date);
    printf("%p\n",&date.year);
    
    size_t size = sizeof(struct Date);
    printf("%lu\n",size);
}
/*
   为了快速访问数据，结构内部有一个补齐算法，默认情况下它一定是占用存储空间最大的成员的倍数
 
 
   1、默认情况一组占用多少个字节取决于最大成员所占用的存储空间
 
 
 */

//指定一组占用多少字节
#pragma pack(8)
void test2()
{
    struct Person{
        //        int age;
        char sex;
        //        char test;
        //        short sb;
        double d;
    };
    
    
    size_t size  = sizeof(struct Person);
    printf("%lu\n",size);
}
int main(int argc, const char * argv[]) {



    /*
    
        1)分析一下结构体占用的字节数 struct A
        {
            int my_test_a;
            char my_test_b; double my_struct_a; int my_struct_b; char my_struct_c;
        };
        2)如果强制设置对齐模数为2 #pragma pack(2),占用多少个字节?
    */
    
 #pragma pack(2)
    struct A
    {
        int my_test_a;//4
        char my_test_b; //2
        double my_struct_a;//8
        int my_struct_b;//4
        char my_struct_c;//2
    };
    
   size_t size =  sizeof(struct A);
    printf("%lu\n",size);
    
    return 0;
}
