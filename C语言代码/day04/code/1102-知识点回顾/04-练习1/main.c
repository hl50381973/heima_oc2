//
//  main.c
//  04-练习1
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 1、根据用户输入1~7的值，输出对应的星期几
 
*/
int test()
{
    // 1、提示录入数据
    printf("请输入一个1~7之间整数，表示星期几\n");
    // 2、定义变量接收用户的录入
    int week;
    scanf("%d",&week);
    // 3、判断，输出对应的星期几
    // 一个一个if去做判断那么效率会比较低，因为每次都需要进行判断
    if (week == 1) {
        printf("星期一\n");
    }
    
    if(week == 2){
        printf("星期二\n");
    }
    
    if(week == 3){
        printf("星期三\n");
    }
    
    if(week == 4){
        printf("星期四\n");
    }
    
    if(week == 5){
        printf("星期五\n");
    }
    if(week == 6){
        printf("星期六\n");
    }
    
    if(week == 7){
        printf("星期日\n");
    }
    return 0;
}

int test2()
{
    // 1、提示录入数据
    printf("请输入一个1~7之间整数，表示星期几\n");
    // 2、定义变量接收用户的录入
    int week;
    scanf("%d",&week);
    // 3、判断，输出对应的星期几
    // 一个一个if去做判断那么效率会比较低，因为每次都需要进行判断
    if (week == 1) {
        printf("星期一\n");
    }else if(week == 2){
        printf("星期二\n");
    }else if(week == 3){
        printf("星期三\n");
    }else if(week == 4){
        printf("星期四\n");
    }else if(week == 5){
        printf("星期五\n");
    }else if(week == 6){
        printf("星期六\n");
    }else if(week == 7){
        printf("星期日\n");
    }else{
        printf("你的输入有误！\n");
    }
    
    return 0;
}

/*
 
 2、根据用户输入1~12的值，输出对应的季节
 其中12,1,2 冬季，3,4,5为春季，6,7,8为夏季
 9，10，11为秋季
 
 */
int main(int argc, const char * argv[]) {
    
// 1、提示用来录入
    printf("请录入一个1~12的整数，表示月份\n");
// 2、定义变量接收用来的录入
    int month;//月份
    scanf("%d",&month);
// 3、判断输出结果
    if(month == 12||month == 1|| month == 2){
        printf("必备羽绒服\n");
    }else if (month >= 3 && month <= 5){
        printf("回南天\n");
    }else if(month >= 6 && month <= 8){
        printf("黑丝的季节\n");
    }else if (month >= 9 && month <= 11){
        printf("丰收季节\n");
    }else{
        printf("又该吃药了\n");
    }
    
    
    return 0;
}
