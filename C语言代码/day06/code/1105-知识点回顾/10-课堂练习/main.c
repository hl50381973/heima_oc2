//
//  main.c
//  10-课堂练习
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/**
 比较 num1 与 num2 值
 当 num1 > num2 返回 1
 当 num1 = num2 返回 0
 当 num1 < num2 返回 -1
 */
int compare(int num1,int num2);

/**
 计算num1 与 num2 差
 */
int minus(int num1,int num2);

/**
    打印一条横线的功能
 */
void printOneLine();

/**
    打印多条横线的功能
 */
void printManyLine(int num);

int main(int argc, const char * argv[]) {
   
//    printOneLine();
    
//    printManyLine(4);
    
//   int rs = minus(10, 2);
    
    int rs = compare(20, 10);
    
    printf("rs = %d\n",rs);
    
    return 0;
}

/**
  打印一条横线的功能
 */
void printOneLine()
{
    printf("-------------------\n");
}

/**
     打印多条横线的功能
 */
void printManyLine(int num)
{
    for (int i = 0; i < num; i++) {
        printOneLine();
    }
}
/**
    计算num1 与 num2 差
 */
int minus(int num1,int num2)
{
    return num1 - num2;
}
/**
    比较 num1 与 num2 值
    当 num1 > num2 返回 1
    当 num1 = num2 返回 0
    当 num1 < num2 返回 -1
 */
int compare(int num1,int num2)
{
    if (num1 > num2) {
        return 1;
    }else if (num1 == num2){
        return 0;
    }else{
        return -1;
    }
}

