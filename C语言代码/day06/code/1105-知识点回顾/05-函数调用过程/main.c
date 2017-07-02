//
//  main.c
//  05-函数调用过程
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   在C语言中不允许函数嵌套：也就是说在函数内部不可以再定义其他函数了
   函数可以嵌套调用：在一个函数内部可以调用其他的函数，被调用的这个函数内部还可以再调用其他的函数
 
 
  
 */
//int average(int num1 , int num2)
//{
////    int sum(int num1,int num2)
////    {
////        return  num1 + num2;
////    }
//    
//}

int sum(int num1 ,int num2)
{
    return num1 + num2;
}


int average(int num1,int num2)
{
    return  sum(num1, num2) / 2;
}



int main(int argc, const char * argv[]) {

    int rs = average(20,10);
    printf("rs = %d\n",rs);
    
    return 0;
}
