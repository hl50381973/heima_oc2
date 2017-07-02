//
//  main.c
//  07-switch语句
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 
 如果表达式的值等于常量那么就执行这个常量后面的语句
 
 switch (表达式) {
     case 常量:
     语句;
     ....
     break;
     case 常量:
     语句;
     ....
     break;
     default:
     语句;
     ....
     break;
 }
 
 注意点：1、case 后面的常量不可以重复
        2、break 作用：结束switch语句
        3、switch 语句只有遇到break 或者 switch后面大括号才会结束
        4、当switch与某一个case匹配了，那么后面的所有case都失效了
        5、case 后面只能一个常量或者常量表达式
        6、switch 后面的小号中只能是整形表达式
 
 */

int test()
{
    //   integer  整形
    //   constant 常量
    //   expression 表达式
    
    int week = 1;
    int value = 2;
    switch (week) {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期日\n");
            break;
        default:
            printf("药不能断\n");
            break;
    }
    return 0;
}


int main(int argc, const char * argv[]) {

    int month = 8;
    
    switch (month) {
        case 12:
        case 1:
        case 2:
            printf("冬季\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("春季\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("夏季\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("秋季\n");
            break;
        default:
            printf("不要放弃治疗\n");
            break;
    }
    
    /*
      1、当某个变量只有几个固定的取值时候，使用switch会更加简洁
      2、如果是区间[-无穷,1] [10,+无穷] 就用if  if(x <= 1 || x >= 10)
     */
    
    
    return 0;
}
