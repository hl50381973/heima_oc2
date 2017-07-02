//
//  main.c
//  06-变量的注意点
//
//  Created by Apple on 14/10/30.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
// 1、变量只有定义了才能够进行初始化
    
    int score;
// 2、变量只有初始化了才可以使用
    printf("%d",score);
    
    score = 20;
  
    return 0;
}
