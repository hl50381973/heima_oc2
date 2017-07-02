//
//  main.c
//  09-循环嵌套基本认识
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
int test()
{
    int age = 10;
    //  if嵌套
    if(age < 18){
        
        if (age < 3) {
            printf("幼年\n");
        }
        
    }
    return 0;
}

int test1()
{
    //    int i = 0;
    //    while (i < 4) {
    //        if (i == 2) {
    //            continue;
    //        }
    //        printf("i = %d\n",i);
    //        i++;
    //    }
    ////    printf("i = %d",i);
    //    for (int i = 0; i < 4; i++) {
    //        if (i == 2) {
    //            continue;
    //        }
    //        printf("i = %d\n",i);
    //    }
    
    //    printf("i = %d",i);
    //  1、for不容易出错
    //  2、代码更加整洁，可读性更好
    
    
    //  当整个循环结束后还需要使用循环控制变量的时候就使用while
    //  如果条件表达式不写系统默认为真
    // for循环变体
    for (;;) {
        printf("死循环\n");
    }
    int i = 0;
    for(;i < 4;){
        printf("i = %d\n",i);
        i++;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
//  总执行次数 = 外循环执行的次数 * 内循环执行的此时
    for (int i = 0; i < 2; i++) {
        printf("外循环\n");
        for (int j = 0; j < 3; j++) {
            printf("美女\n");
//            printf("内循环\n");
        }

    }
    
//    for (int i = 0; i < 3; i++) {
//        printf("美女\n");
//    }
//
//    for (int i = 0; i < 3; i++) {
//        printf("美女\n");
//    }
    
    return 0;
}
