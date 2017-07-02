//
//  main.c
//  10-石头剪刀布
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

int test()
{
    //  实现随机数方法1
    //    int random  = arc4random();
    //    random = random % 3;
    //    random = random < 0 ? -random : random;
    //    printf("%d\n",random);
    
    int random =   arc4random_uniform(3);
    printf("%d\n",random);
    
    return 0;
}

/*
   假设
   0 表示石头
   1 表示剪刀
   2 表示布
 
 
 */



int main(int argc, const char * argv[]) {
 

//    1、玩家出拳
//    1.1 提示玩家出拳
    printf("请出拳，0表示石头，1表示剪刀，2表示布\n");
//    1.2 定义变量接收玩家的出拳
    int playerChoose;
    scanf("%d",&playerChoose);
//    2、电脑出拳
    int computerChoose = arc4random_uniform(3);
//    3、判断输赢
//    3.1 玩家赢了
      if((playerChoose == 0 && computerChoose == 1)||
         (playerChoose == 1 && computerChoose == 2)||
         (playerChoose == 2 && computerChoose == 0)){
          printf("恭喜你\n");
//    3.2 平局
      }else if(playerChoose == computerChoose){
          printf("平局\n");
      }else{
          printf("好可惜，在来一次\n");
      }
    
    return 0;
}
