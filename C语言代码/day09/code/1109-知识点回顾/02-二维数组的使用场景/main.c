//
//  main.c
//  02-二维数组的使用场景
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
      0 灰色
      1 淡蓝色
      2 深蓝色
      3 红色
      4 黄色
     
     */
    
    int elsfk[5][5] = {
        {1,0,0,0,0},
        {1,1,0,2,0},
        {3,1,2,2,2},
        {3,4,4,4,4},
        {3,4,4,4,4}
    };
    
    /*
      0 表示空
      1 表示白棋
      2 表示黑棋
     */
    
    int wzq[6][6] = {
        {0,0,0,0,2,2},
        {0,1,0,0,1,0},
        {0,1,2,0,2,1},
        {1,0,2,1,2,2},
        {0,0,2,2,0,1},
        {0,0,1,1,0,0}
    };
    
    
    return 0;
}
