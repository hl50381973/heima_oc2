//
//  main.c
//  11-课堂游戏
//
//  Created by Apple on 14/11/6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
// 4、写一个函数以二进制形式打印十进制的数
/*
   10
 
   0000 0000 0000 0000 0000 0000 0000 1010
   0000 0000 0000 0000 0000 0000 0000 0001
---------------------------------------------
 
 */
void printBinary(int num)
{
//  计算变量num所占二进制位
    int length = sizeof(num) * 8;
    
    for(int i = 0 ; i < length;i++)
    {
        int b = (num >> (length - 1 - i)) & 1;
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
        printf("%d",b);
    }
    
    printf("\n");
}


int main(int argc, const char * argv[]) {
  
    printBinary(10);
    
    return 0;
}
