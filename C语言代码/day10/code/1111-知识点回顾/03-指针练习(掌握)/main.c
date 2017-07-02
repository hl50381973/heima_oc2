//
//  main.c
//  03-指针练习(掌握)
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
   指针的使用场景：
        1、在被调函数中，通过形参来改变主调函数中某个变量值
        2、指针可以返回多个值
 
   1、写一个函数交换两个变量中的值
   2、写一个函数返回两个数和、差
 
 */



//基本数据类型作为函数参数传递是值传递
void mySwap(int num1,int num2)
{
    int temp = num1;
    
    num1 = num2;
    
    num2 = temp;
}


void mySwap2(int *num1,int *num2)
{
//  这里仅仅是指针的指向进行交换，并没有改变它所指向存储空间的值
//  如果你没有使用指针操作符，那么你操作都是指针变量本身，与它所指向的存储空间无关
    int *temp = num1;
    num1 = num2;
    num2 = temp;
}


void mySwap3(int *num1,int *num2)
{
    int temp = *num1;
    
    *num1 = *num2;

    *num2 = temp;
}

void test()
{
    int a = 10;
    int b = 20;
    printf("%d,%d\n",a,b);
    //    mySwap(a, b);
    //    mySwap2(&a,&b);
    mySwap3(&a, &b);
    printf("%d,%d\n",a,b);
    
    //    a = 20;
    //    b = 10;
}



//函数只能有一个返回值
//int  sumAndMinus(int num1,int num2,int *minus)
//{
//    
//    *minus = num1 - num2;
//    
//    return num1 + num2;
////    
////    return num1 - num2;
//}

//指针可以让函数返回多个值
void  sumAndMinus(int num1,int num2,int *minus,int *sum)
{
    
    *sum = num1 + num2;
    *minus = num1 - num2;
    
//    return num1 + num2;
    //
    //    return num1 - num2;
}


int main(int argc, const char * argv[]) {
 

    int a = 10;
    int b = 20;
    
    int minus;
    
//    int rs = sumAndMinus(a, b,&minus);
    int sum;
    sumAndMinus(a, b, &minus, &sum);
    
    printf("%d,%d\n",sum,minus);
    
    return 0;
}
