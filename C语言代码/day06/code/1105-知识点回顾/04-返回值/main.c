//
//  main.c
//  04-返回值
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   主调函数：调用其他函数的那个函数
   被调函数：在其他中被调用函数
 
   1、函数定义中声明是什么返回值类型，那么在主调函数中就必须时候相同类型的变量接收
   2、什么样的返回值类型就必须返回什么样类型的值，确保返回的值的类型与函数定义中返回值的类型一致
   3、如果函数的返回值类型不为空就必须返回一个值
return 作用：
   1、返回数据给函数调用
   2、结束函数
 
   1、在返回值类型为void的函数中，可以使用return来提前结束函数
   2、在同一个函数中可以有多个return 语句，但仅仅有一个return会被执行，因为只要执行return那么函数就返回了，后面的代码就都不会执行了
 
 
   注意点：在C语言中没有函数重载概念，它区分函数仅仅是根据函数的名称，只要是要名称相同就是重复定义，无论形参是否不同
 */

int sum(int num1,int num2)
{
    return num1 + num2;
}



double sumDouble(double num1,double num2)
{
    return num1 + num2;
}


void test()
{
    
    int rs = sum(10,20);
    printf("rs = %d\n",rs);
    
    double result = sumDouble(20.4, 30.1);
    
    printf("result = %lf\n",result);
    
}


//打印一朵玫瑰花
int printOneRose() {
    
    printf(" {@} \n");
    printf(" \\|/ \n");
    printf("  | \n");
    printf("  | \n");
    
    return 0;
}

void printManyRose(int num)
{
    if(num < 1){
        printf("传递的参数非法\n");
        return;
    }
    
    for (int i = 0; i < num; i++) {
        printOneRose();
    }
}


int shang(int num1,int num2)
{
    if (num2 == 0) {
        printf("除数不能为0\n");
        return 0;
    }
    return  num1 / num2;
}




int main(int argc, const char * argv[]) {
   
//    printManyRose(-1);
    
    int rs = shang(10, 1);
    printf("rs = %d\n",rs);
    
    return 0;
}
