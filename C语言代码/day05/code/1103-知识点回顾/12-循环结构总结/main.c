//
//  main.c
//  12-循环结构总结
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   while(条件表达式){
      语句;
      ....
   }
 
// 当条件表达式成立就执行while循环体中语句，直到条件不成了为止，退出循环
// 写一个循环：
// 1、确定需要重复执行操作
// 2、确定约束条件
// 2.1 循环开始前做点准备工作比如定义循环控制变量
// 2.3 确定执行循环条件
// 2.3 在循环中改变循环控制变量的值
 
注意点：当使用continue的时候，务必保证循环控制变量的修改放在continue前面，否则会导致死循环
 
do while
循环体中代码至少执行一次
 do{
 
 }while (条件表达式);//此处必须要写上一个分号
 
 
for(初始化表达式;条件表达式;循环后操作表达式){
   语句;
   ...
}

1.初始化表达式：在整个循环仅执行一次（在循环开始之前）
2、条件表达式：在每次循环开始的时候都会执行，若条件满足就执行循环体，否则就退出循环
3、循环后操作表达式：在每次循环结束的时候都会执行
 
控制循环的两个关键字：
 
break:
      1、用在switch中，用来结束switch语句
      2、用在循环语句，结束当前循环的 (break使用一次就失效)
      3、break只能放在循环语句和switch语句中
 
continue:
      1、continue只能要循环语句中
      2、跳过当前循环continue后面的语句，进入下一次的条件判断
 
 */
int main(int argc, const char * argv[]) {
   
    int age = 4;
    if(age == 2){
//        continue;
//        break;
    }
    
    for(int i = 0 ; i < 4; i++){
      
        for (int j = 0; j < 4; j++) {
            
            if (j == 2) {
                continue;
//                break;
            }
            printf("内循环%d ",j);
        }
        printf("外循环\n");
    }
    
    return 0;
}
