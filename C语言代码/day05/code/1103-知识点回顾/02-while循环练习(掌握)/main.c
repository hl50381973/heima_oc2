//
//  main.c
//  02-while循环练习(掌握)
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   用户从键盘上录入：整数n,计算 1 + 2 + 3 + ... + n 值；
  
分析：假设n = 5;
  1 + 2 + 3 + 4 + 5
  0 + 1
      3 + 3
          6 + 4
              10 + 5

int sum = 0;
sum =  sum + 1;
sum =  sum + 2;
sum =  sum + 3;
sum =  sum + 4;
sum =  sum + 5;
 
1、阶乘  5！ = 1 * 2 * 3 * 4 * 5;
 
累加思想：定义变量来记录每次循环执行的结果，在下一次循环的时候在结果上进行计算
 
 
 
 
 */
int sumMethod()
{
    //  1、提示用户录入
    printf("请输入一个正整数\n");
    //  2、接收用户的录入
    int n;
    scanf("%d",&n);
    //  3、计算
    //  定义循环控制变量
    int i = 1;
    //  定义一个变量来记录每次循环执行的结果
    int sum = 0;
    while (i <= n) {
        sum =  sum + i;
        i++;
    }
    //  4、输出结果
    printf("sum = %d\n",sum);
    
    return 0;
}

/*
   1、找出1~100中能够被7整除的数，并且统计个数
   
   1、产生 1 ~ 100
 
 
 计数器思想：利用循环当每一次满足条件，就将计数器变量+1
 使用场景：当我们要计算什么什么中多少个什么的时候
 
 */

int main(int argc, const char * argv[]) {
//  循环控制变量
    int i=1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           //   约束条件
//  定义一个变量记录满足条件的个数
    int counter = 0;

    while (i <= 100) {
//        printf("i = %d\n",i);
        if(i % 7 == 0){
            printf("%d\n",i);
            counter++;
        }
        i++;//改变i值让它逐渐不再满足条件，退出循环
    }
    printf("能够被7整除的一共有%d个\n",counter);
    return 0;
}
