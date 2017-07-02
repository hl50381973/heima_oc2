//
//  main.c
//  09-switch注意点
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int age = 8;
// 在case后面的语句中不能直接定义变量，如果要定义变量就必须加上大括号，来明确定义变量的作用域
    switch (age) {
        case 10:{
//            int num = 5;
            printf("age == 10\n");
            break;
        }
        case 11:
            printf("age == 10\n");
            int num = 11;//尽管此处编译不报错也不要这么写
            break;
        default:
            break;
    }
    
    return 0;
}
