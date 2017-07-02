//
//  main.c
//  03-while注意点
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int test()
{
    // 在C语言中任何数值都有真假性，只有0为假，其他都为真
    //    while (2) {
    //        printf("死循环\n");
    //    }
    
    int a = 1;
    //  注意不要 == 与 = 混淆了，== 是比较操作符，是用来比较两个数是不是相同，= 赋值运算符，它把右边的值赋值左边变量
    //  入股要避免这种错误就把常量写前面，变量写在后面
    while (2 == a) {
        printf("a = 2\n");
    }
    
    return 0;
}

int test2()
{
    //  因为;是一个空语句，空语句也是语句
    //  当while 直接跟; 那么就说明只有; 和while是一体的，那么后面的大括号和while无关
    int a = 1;
    while (a < 5);// 务必注意此处没有分号
    {
        printf("a = %d\n",a);
        a++;
    }
    
    return 0;
}

int test3()
{
    //  循环控制变量
    int i = 1;
    //         循环约束条件
    while (i < 5) {
        //      循环体
        int num = 2;
        i++;
    }
    //  在while内部定义变量在外部不可以访问；
    //    printf("num = %d\n",num);
    return 0;
}

int main(int argc, const char * argv[]) {
// 作用域紊乱：如果想再循环体中定义变量必须要上大括号
//    int i = 0;
//    while (i < 5)
//        int num = 10;
    

    
    return 0;
}
