//
//  main.c
//  01-计算机中的进制
//
//  Created by Apple on 14/11/6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

void test()
{
    int a = 13;//计算机中默认是十进制
    //  二进制数
    //  以0b或0B开头的就表示二进制数
    int b = 0b1101;
    printf("b = %d\n",b);
    //  八进制：以0开头表示八进制的数
    int o = 015;
    printf("o = %d\n",o);
    
    //  十六进制：0x或0X开头的数就是一个十六进制的数
    int x = 0xd;
    printf("x = %d\n",x);
    
}

int main(int argc, const char * argv[]) {


    int num = 13;
    
//  以八进制的格式输出
//  八进制输出的格式符：%o , %O
    printf("%O\n",num);
    
//  十六进制的输出格式符
//  %x 输出的 a ~ f %X 输出 A~F
    printf("%X\n",num);
    
//  在C语言中没有提供二进制的输出格式符
    
    return 0;
}
