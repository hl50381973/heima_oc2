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
void printMap(char map[][ROWS]);

/*
   总结：凡是遇到位置移动，移动后所做的操作都是相同那么就可以先找出要移动下一个位置，然后进行统一的处理
 */


int main(int argc, const char * argv[]) {
    
    //  1、保存地图
    char map[ROWS][COLS] = {
        {'#','#','#','#','#','#'},
        {'#','O','#',' ',' ',' '},
        {'#',' ','#','#',' ','#'},
        {'#',' ',' ','#',' ','#'},
        {'#','#',' ',' ',' ','#'},
        {'#','#','#','#','#','#'}
    };
    
    //   打印地图
    printMap(map);
    
    //  为了计算小人下一个位置，我们必须首先直到小人当前位置
    //  小人当前位置的X坐标
    int currentX = 1;
    //  小人当前位置的Y坐标
    int currentY = 1;
    
    //  3.1根据玩家的录入移动小人
    //   为了判断小人的移动，我们需要定义变量来表示路
    char street = ' ';
    
    while (1) {
        
        //  2.1 提示玩家移动小人
        printf("请移动小人，w表示向上，s表示向下，a表示向左，d表示向右\n");
        
        //  2.2接收用户的录入
        char direction;
        //       %c 前面加一个空格，来吃掉后面的回车
        scanf(" %c",&direction);
        
//      根据不同方向来计算下一个要移动位置
//      假设下一个位置就是当前位置
        int nextX = currentX;
        int nextY = currentY;
        
        
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
        
//     移动小人
        
//     判断下一个位置是不是路
        if(map[nextX][nextY] == street){
//          交换位置
            char temp = map[currentX][currentY];
            map[currentX][currentY] = map[nextX][nextY];
            map[nextX][nextY] = temp;
//          改变小人当前位置
            currentX = nextX;
            currentY = nextY;
        }
        //   打印地图
        printMap(map);
        
        if(currentX == 1 && currentY == 5)
        {
            printf("你好牛X!\n");
            break;
        }
    }
    
    
    return 0;
}


/**
    打印地图
 */
void printMap(char map[][COLS])
{
    for (int i = 0 ; i < ROWS; i++) {
        
        for (int j = 0; j < COLS; j++) {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
    
    
}



