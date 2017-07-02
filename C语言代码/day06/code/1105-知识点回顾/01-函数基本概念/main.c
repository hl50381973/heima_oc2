//
//  main.c
//  01-函数基本概念
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
    函数：完成特定功能代码块
    函数作用：管理代码的
    函数的优点：提高代码的可读性
              提高代码的复用性
              提高代码可维护性

 函数：函数名不可以重复定义
      要给函数起一个有意义的名字
 
 函数特点：只有调用才会执行
 */

//打印一朵玫瑰花
int printOneRose() {
    
        printf(" {@} \n");
        printf(" \\|/ \n");
        printf("  | \n");
        printf("  | \n");

    return 0;
}

/**
   打印双十一
 */
int printDoubleEleven() {
    
        printf("| | | |\n");
        printf("| | | |\n");
        printf("| | | |\n");
        printf("| | | |\n");
    
    return 0;
}


int main() {


    for (int i = 0; i < 11; i++) {
        
        printOneRose();
//        printf(" {@} \n");
//        printf(" \\|/ \n");
//        printf("  | \n");
//        printf("  | \n");
        
//        printf("| | | |\n");
//        printf("| | | |\n");
//        printf("| | | |\n");
//        printf("| | | |\n");
        
    }
    
   
    
    return 0;
}
