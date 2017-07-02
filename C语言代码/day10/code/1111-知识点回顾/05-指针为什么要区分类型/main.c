//
//  main.c
//  05-指针为什么要区分类型
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   所有指针类型都是占用八个字节的存储空间
 
 
 */
void testEveryPointerIs8B()
{
    printf("%lu\n",sizeof(int *));
    printf("%lu\n",sizeof(char *));
    printf("%lu\n",sizeof(double *));
    printf("%lu\n",sizeof(float *));
    printf("%lu\n",sizeof(float **));
}

/*
   1、变量的地址是变量所在占存储空间的首地址
   2、指针变量仅仅可以存储一个地址编号，如果没有类型，当通过指针就不知道要访问多少个字节的存储空间
   3、指针区分类型是为了在通过指针访问它所指向的存储空间的时候，能够正确访问
 
   4、如果通过一个char类型的指针操作一个int的变量，如果值的二进制数据超过1字节，那么就造成数据错误
   5、如果通过一个int 类型的指针操作一个char变量，那么你就会修改了你不该修改的内存，造成程序逻辑错误
 */

int main(int argc, const char * argv[]) {
    
    int num = 10;
    
    char *cp = &num;
//       256  128  64 32 16  8  4  2 1
//                  00 0 0  0 0 0 0  0 0
    *cp = 256;
    
    printf("%d\n",num);
    
    return 0;
}
