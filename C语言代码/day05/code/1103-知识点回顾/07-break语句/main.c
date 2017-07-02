//
//  main.c
//  07-break语句
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
//  定义一个变量记录当前是否饿了
    int isHungry = 1;
    
    while (isHungry) {
        printf("吃面包\n");
        printf("反胃了吗？\n");
        int fanWei;
        scanf("%d",&fanWei);
        if (fanWei) {
            break;
        }
        printf("喝咖啡\n");
        printf("还饿吗？\n");
        scanf("%d",&isHungry);
    }
//  break:用在循环语句中，用来结束当前的循环语句
    
    return 0;
}
