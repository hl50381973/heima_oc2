//
//  main.c
//  06-if练习2
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 
 
 
 */

int test()
{
    //  用户从键盘上输入一个整数，输出它是奇数还是偶数
    
    //  1、提示用户录入
    printf("请输入一个整数\n");
    //  2、定义变量接收用户的录入
    int num;
    scanf("%d",&num);
    //  3、判断奇偶性，输出结果
    if (num % 2 == 0) {
        printf("偶数\n");
    }else{
        printf("奇数\n");
    }
    return 0;
}

int test2()
{
    //  用户从键盘输入两个数，输出较大数
    
    //  1、提示用户录入两个数
    printf("请录入两个整数,以逗号分隔\n");
    //  2、定义变量接收用户的录入
    int num1,num2;
    scanf("%d,%d",&num1,&num2);
    //  3、找出较大数，然后输出
    
    //   第一种方法
    //    if (num1 > num2) {
    //        printf("最大值为：%d\n",num1);
    //    }else{
    //        printf("最大值为：%d\n",num2);
    //    }
    
    //  第二种方法
    //  定义一个变量来保存最大值
    //    int max = num1;//假设最大值就是num1
    //    if (max < num2) {
    //        max = num2;
    //    }
    //    printf("最大值为：%d\n",max);
    //
    int max = num1 > num2 ? num1 : num2;
    printf("最大值为：%d\n",max);
    
    
    return 0;
}

void voidMethod()
{
    
}

int test3()
{
    // 用来录入三个整数，然后输出最大值
    // 1、提示用来录入
    printf("请录入三个整数,以逗号分隔\n");
    // 2、定义变量接收用来的录入
    int num1,num2,num3;
    scanf("%d,%d,%d",&num1,&num2,&num3);
    // 3、找出最大值
    
    //    if (num1 >= num2 && num1 >= num3) {
    //        printf("max = %d\n",num1);
    //    }else if (num2 >= num1 && num2 >= num3) {
    //        printf("max = %d\n",num2);
    //    }else if(num3 >= num2 && num3 >= num1)
    //    {
    //        printf("max = %d\n",num3);
    //    }
    
    //  第二种方式
    //  假设最大值为num1
    //    int max = num1;
    //
    //    if (num2 > num1) {
    //        max = num2;
    //    }
    //
    //    if (num3 > max) {
    //        max = num3;
    //    }
    //
    //    printf("max = %d\n",max);
    //
    
    
    
    //   第三种方式
    int max = num1 > num2 ? num1 : num2;
    max =  max > num3 ? max : num3;
    printf("max = %d\n",max);
    
    // 4、输出结果
    
    //    if (num1 > num2) {
    //        voidMethod();
    //    }
    
    /*
     1、三目运算符的使用条件
     1.1 条件比较简单，并且一定要有返回值
     
     2、在所有的分支结构中，if语句是最灵活的
     当判断比较复杂或者没有返回值的时候就使用if
     
     */
    return 0;
}


int main(int argc, const char * argv[]) {
//  用户从输入三个数字，排序后输出结果
//  1、提示用来录入三个整数
    printf("请输入三个整数\n");
//  2、接收用户的录入
    int num1,num2,num3;
    scanf("%d,%d,%d",&num1,&num2,&num3);
//  3、排序
//  3.1 排列方法  n!
    
//    3! = 3 * 2 * 1
//    4! = 4 * 3 * 2 * 1
//  比较二的方法
//    if(num1 >= num2 && num2 >= num3){
//        printf("%d,%d,%d\n",num1,num2,num3);
//    }else if (num1 >= num3 && num3 >= num2){
//         printf("%d,%d,%d\n",num1,num3,num2);
//    }else if (num2 >= num1 && num1 >= num3){
//        printf("%d,%d,%d\n",num2,num1,num3);
//    }else if (num2 >= num3 && num3 >= num1){
//        printf("%d,%d,%d\n",num2,num3,num1);
//    }else if (num3 >= num2 && num2 >= num1){
//        printf("%d,%d,%d\n",num3,num2,num1);
//    }else if (num3 >= num1 && num1 >= num2){
//        printf("%d,%d,%d\n",num3,num1,num2);
//    }
    
//  选择排序的雏形
    if(num1 > num2){
//      假设 num1 雪碧  num2 可乐
//      假设 temp 空瓶
        int temp = num1;// 把雪碧放到空瓶中
        num1 = num2; // 把可乐放入雪碧的瓶子中
        num2 = temp; // 把空瓶子中的雪碧倒入可乐瓶
    }
    
    if (num1 > num3) {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    
    printf("%d,%d,%d\n",num1,num2,num3);// 升序
    
//  4、结果

    return 0;
}




