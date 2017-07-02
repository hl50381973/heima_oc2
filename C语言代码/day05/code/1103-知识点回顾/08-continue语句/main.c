//
//  main.c
//  08-continue语句
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   continue只能用循环内部，作用跳过当前循环的后面的内容，继续下一次条件判断
 
 
 */
int main(int argc, const char * argv[]) {
   
    int isHungry = 1;
    while (isHungry) {
        
        printf("午餐时间到了没?\n");
        int isLunchTime;
        scanf("%d",&isLunchTime);
        if (!isLunchTime) {
            continue;
        }
        printf("吃午餐了\n");
        isHungry = 0;
    }
    
    return 0;
}
