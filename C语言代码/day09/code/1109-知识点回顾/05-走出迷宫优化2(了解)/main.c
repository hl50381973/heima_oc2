//
//  main.c
//  03-走出迷宫
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 游戏说明：玩家通过键盘录入 w,s,a,d控制小人向不同方向移动，其中w代表向上移动，s代表向下移动，a代表向左移动，d 代表向右移动，当小人移动到出口位置，玩家胜利
 
 地图如下：
 ######
 #O#
 # ## #
 #  # #
 ##   #
 ######
 说明： # 代表 墙 O代表小人 ‘ ’ 代表路
 
 
 分析：
 1、打印地图
 1、保存地图
 2、打印
 2、让玩家移动小人
 1、提示玩家如何移动小人
 2、接收玩家的录入
 3、根据玩家录入来移动小人
 3、判断输赢
 */

/**
 打印地图
 */

//宏定义：它是一种编译预处理指令

#define ROWS 6
#define COLS 6

/**
 打印地图
 */
void printMap();
/**
  计算下一个位置
 */
void calculateNextPosition(char direction);
/**
 移动小人到下一个位置
 */
void moveToNextPosition();
/**
   判断输赢
 */
int isWin();
//定义在函数外部变量，我们全局变量
//1、它在整个程序还没有启动的时候就进行分配内存并初始化了
//2、它在所有函数中都是可见，它是全局共享的

//  1、保存地图
char map[ROWS][COLS] = {
    {'#','#','#','#','#','#'},
    {'#','O','#',' ',' ',' '},
    {'#',' ','#','#',' ','#'},
    {'#',' ',' ','#',' ','#'},
    {'#','#',' ',' ',' ','#'},
    {'#','#','#','#','#','#'}
};

//  为了计算小人下一个位置，我们必须首先直到小人当前位置
//  小人当前位置的X坐标
int currentX = 1;
//  小人当前位置的Y坐标
int currentY = 1;

//      根据不同方向来计算下一个要移动位置
//      假设下一个位置就是当前位置
int nextX = 1;
int nextY = 1;

//   为了判断小人的移动，我们需要定义变量来表示路
char street = ' ';


int main(int argc, const char * argv[]) {
  
    //   打印地图
    printMap(map);

    //  3.1根据玩家的录入移动小人
    while (1) {
        
        //  2.1 提示玩家移动小人
        printf("请移动小人，w表示向上，s表示向下，a表示向左，d表示向右\n");
        
        //  2.2接收用户的录入
        char direction;
        //       %c 前面加一个空格，来吃掉后面的回车
        scanf(" %c",&direction);
        
//      计算下一个位置
        calculateNextPosition(direction);
//      移动到下一个位置
        moveToNextPosition();
        //     移动小人
   
        //   打印地图
        printMap(map);
//       判断输赢
        if (isWin()) {
            break;
        }
    }
    
    
    return 0;
}
/**
   判断输赢
 */
int isWin()
{
    if(currentX == ROWS -1 || currentY == COLS - 1)
    {
        printf("你好牛X!\n");
        return 1;
    }
    
    return 0;
}


/**
   移动小人到下一个位置
 */
void moveToNextPosition()
{
    
    //     判断下一个位置是不是路
    if(map[nextX][nextY] == street){
        //          交换位置
        char temp = map[currentX][currentY];
        map[currentX][currentY] = map[nextX][nextY];
        map[nextX][nextY] = temp;
        //          改变小人当前位置
        currentX = nextX;
        currentY = nextY;
    }else{
//      如果不是路，那么就不能移动小人，复原下一个位置为当前位置
        nextX = currentX;
        nextY = currentY;
    }
}

void calculateNextPosition(char direction)
{
    switch (direction) {
        case  'w':
            nextX = currentX -1;
            break;
        case 's':
            //          如果小人下一个位置是路就移动小人
            nextX = currentX + 1;
            break;
        case 'a':
            //          计算小人下一个位置
            nextY = currentY - 1;
            break;
        case 'd':
            //          计算小人下一个位置
            nextY = currentY + 1;
            break;
        default:
            break;
    }
}

/**
 打印地图
 */
void printMap()
{
    for (int i = 0 ; i < ROWS; i++) {
        
        for (int j = 0; j < COLS; j++) {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
    
    
}



