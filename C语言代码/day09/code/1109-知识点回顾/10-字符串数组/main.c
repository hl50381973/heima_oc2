//
//  main.c
//  10-字符串数组
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char name[] = "zsf";
    
//  定义一个字符串数组
    char names[][10] = {
        "zsf",
        "mcf",
        "oyf",
        "qf",
        "bdf",
        "dhf",
        "sbx"
    };
    
//  遍历字符串数组
//  计算二维数组中有多少个一位数组
    int len = sizeof(names) / sizeof(names[0]);
    
    for(int i = 0;i < len;i++)
    {
        printf("%s\n",names[i]);
    }
    
    
    return 0;
}
