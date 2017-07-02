//
//  main.c
//  03-const关键字
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   const 说明定义的变量是只读的
 
   const修饰一个普通变量，表示这个变量是只读的，不可以修改的
   const的位置与其类型的位置是可以调换的
  
   const 修饰数组，表示数组是只读的，必须定义的时候进行初始化
 
   const 修饰指针的时候，如果const放在*前面，表示指针指向的内容是只读的，不可以通过指针修改它所指向的存储内容
         如果const在*后面说明指针本身是只读的，不能改变指针的指向
 
   const 修饰形参：保证这个形参不会被函数修改
 同时也可以告诉函数的调用者，本函数不会修改它里面的内容
 可以提高函数可读性
 
  const修饰函数返回值说明它的返回值不能修改
 */

void test()
{
    //  const 修饰普通变量
    const int a = 10;
    
    int const b = 20;
    //    b = 20;
    
    //    const int c;
    
    
    //  const 修饰数组,
    //    const int  nums[] = {1,2,3};
    int const nums[] = {1,2,3};
    
    //    nums[1] = 10;
    
    //  const 修饰指针
    
    int num = 10;
    int num1 = 20;
    
    //
    //    const int *p = &num;
    int  const  *p = &num;
    //    *p = 40;
    //    printf("%d\n",*p);
    //    *p = 20;
    
    p = &num1;
    printf("%d\n",*p);
    
    int * const pp = &num;
    
    //    pp = &num1;
    
    const int * const ppp = &num;
    
    //    ppp = &num1;
    //    *ppp = 60;
}

//const 可以修饰形参

//argc 说明当程序启动时候，从控制台传入的参数的个数
//argv 从控制台传入的参数的值


#include <string.h>
/*
    1、修饰形参：保证这个形参不会被函数修改
               同时也可以告诉函数的调用者，本函数不会修改它里面的内容
               可以提高函数可读性
    strcpy(char * dest, const char *src);
 
 */

//const 作为函数返回值说明它的返回值不能修改
const char * week(int day)
{
    switch (day) {
        case 1:
            return "星期一";
        case 2:
            return "星期二";
        case 3:
            return "星期三";
        case 4:
            return "星期四";
        case 5:
            return "星期五";
        case 6:
            return "星期六";
        case 7:
            return "星期日";
            
        default:
            return "输入非法\n";
            break;
    }
}


int main(int argc, const char * argv[]) {
   
    const char *w = week(1);
    
    printf("%s",w);
    
    return 0;
}
