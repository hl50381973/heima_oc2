//
//  main.c
//  05-static 与 extern对局部变量的作用
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   static 对局部变量的作用：
          1、延长变量的生命周期，从第一次执行开始知道文件程序退出
          2、定义的这一行代码仅仅会执行一次
          3、它不会改变局部变量的作用域
   extern:放在函数内部，它仅仅是对全局变量的声明
 */

void change()
{

    {
        static int num = 1;
    //    num = 1;
        num++;
        
        printf("%d\n",num);
    }
    
//    printf("%d\n",num);
}

void test2(){

    extern int num;
    
    printf("%d\n",num);

}

int num = 20;

int main(int argc, const char * argv[]) {
  
//    change();
//    change();
//    change();
//    change();
//
    
    test2();
    return 0;
}
