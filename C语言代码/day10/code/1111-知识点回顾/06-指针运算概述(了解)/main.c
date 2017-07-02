//
//  main.c
//  06-指针运算概述(了解)
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
   指针变量：存放是内存字节的地址编号(无符号的整形数)
 
   指针：是运算受限的无符号的整形数
   
   运算运算：
   指针 + 整形数 === 指针变量中值 + sizeof(其所指向数据类型)
   指针 - 整数数 === 指针变量中值 - sizeof(其所指向数据类型)
   pointer1 - pointer2 = (pointer1中值 - pointer2中值) / sizeof(其指向数据类型)
 
   赋值运算：
    =
    += 必须是一个整形数
    -= 必须是一个整形数
   比较运算
   ==
   !=
 
   >
   < 
   >=
   <=
   自增自减
   p++; p = p + 1;
   ++p; p = p + 1;

   --p;
   p--;
 */
//算术运算
void test()
{
    int a = 10;
    
    int *p = &a;
    //  指针＋1
    p = p + 1;
    
    
    int nums[5] = {1,2,3,4,5};
    
    int * pointer1 = nums;
    
    int * pointer2 = &nums[4];
    
    size_t size  = pointer2 - pointer1;
    
    printf("%lu\n",size);
    
    
    
    //  pointer1 + pointer2;
    //    pointer2 * pointer1;
    //    pointer1 / pointer2;
    //    pointer1 / 2;
}
//赋值运算
void test1()
{
    int a = 10;
    
    //    int *p = &a;
    
    int nums[] = {1,2,3,4,5};
    
    int *p = nums;
    int *p2 = nums;
    p += 2;
    p = p + 2;
    
    p -= 1;
    
    
    printf("%d\n",*p);
    
}

//关系运算
int main(int argc, const char * argv[]) {
  
    int nums[] = {1,2,3,4,5};
    
    int *p = nums;
    p++;
    int result =  nums == p;
    result = p > nums;
    p--;
    result = p < nums;
    
    result = p >= nums;
    result = p <= nums;
    
    printf("%d\n",result);
  
 
    
    
    
    return 0;
}
