//
//  main.c
//  08-switch练习
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int test()
{
    //  1、定义变量表示列车
    int train = 100;
    //  2、定义变量来记录所获得金币
    int money = 0;
    //  3、根据列车的值选择不同道路
    
    
    switch (train) {
        case 37:
            printf("获得50个金币\n");
            money += 50;// money = money + 50
            break;
        case 65:
            printf("恭喜你，中了头等奖\n");
            printf("获得80金币\n");
            money += 80;
            //            break;
        case 12:
            printf("获得20金币\n");
            money += 20;
            break;
        default:
            printf("你输了!\n");
            break;
    }
    
    return 0;
}


int main(int argc, const char * argv[]) {
    
//  加减乘除计算器   录入 1 + 2  输出 1 + 2 = 3
    
//  定义两个变量，表示操作数
    int num1,num2;
//  定义一个char类型变量，表示要进行操作
    char operator;
//  提示用录入
    printf("请按照如下格式录入(1 + 1)\n");
    scanf("%d %c %d",&num1,&operator,&num2);
//  根据用户的录入进行计算，然后输出结果
    
//    int result =  num1 operator num2;
    int result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("除数不能为零\n");
//                break;
                return 0;
            }
            result = num1 / num2;
            
            break;
        default:
            printf("你录入格式错误\n");
            break;
    }
    
    printf("%d %c %d = %d\n",num1,operator,num2,result);
    
    
    return 0;
}
