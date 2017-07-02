//
//  main.c
//  07-变量的作用域
//
//  Created by Apple on 14/10/30.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
//变量的作用域：从定义那一行开始直到其所在大括号结束为止
int test()
{
    int score = 105;
    score = 1;
    
    printf("scrore = %d\n",score);
    
    {
        int a = 10;
        printf("a = %d\n",a);
        
    }
    
    //    printf("a = %d\n",a);
      return 0;
}

int test1()
{
    //  在相同作用域内部是不可以有同名变量的
    int score = 10;
    printf("%d\n",score);// 10
    {
        int score = 20;
        
        printf("%d\n",score); // 20
    }
    
    printf("%d\n",score);// 10
    
    return 0;
}

//内部代码中可以访问外部代码块中定义的变量
//外部代码块中不可以访问内部代码块中定义的变量
//如果内部代码块中定义了与外部代码块中同名变量，那么在内部代码块中这个变量的作用域内，内部的同名变量会覆盖外部定义的变量

int main(int argc, const char * argv[]) {

    int harry = 10;
    printf("%d\n",harry);
    {
        int harry = 20;
        harry = 30;
        printf("%d\n",harry);
    }

    printf("%d\n",harry);
    {
        harry = 50;
        printf("%d\n",harry);
        int harry = 10;
        harry = 60;
        printf("%d\n",harry);
    }
    printf("%d\n",harry);
    
    return 0;
}
