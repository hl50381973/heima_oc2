//
//  main.c
//  10-推箱子(理解)
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 推箱子游戏:
 
 游戏说明：玩家通过键盘录入 w,s,a,d控制小人向不同方向移动，
 其中w代表向上移动，s代表向下移动，a代表向左移动，d 代表向右移动，
 当小人在箱子后面的时候可以推着箱子向前移动，当箱子移动到出口的位置，玩家胜利
 
 地图如下：
 (3,2) (2,2) （1,2）
 ##########
 #  ####  #
 #OX####  #
 #        #
 ######   #
 #  ####  #
 #        #
 #   ######
 #
 ##########
             2               2                3
 nextBoxX = currentBoxX + (currentBoxX - currentPersonX);
 nextBoxY = currentBoxY + (currentBoxY - currentPersonY);
 
 
 说明： # 代表墙, O代表小人 ,' ' 代表路, X代表箱子
 
分析：
 1、打印地图
    1、保存地图
    2、打印地图
 
 2、让玩家控制小人移动，来推箱子
    1、写一个死循环
    2、根据玩家的录入，来移动小人
       1、知道小人当前位置
       2、箱子的当前位置
       3、什么是墙
       4、什么是路
 
//     5、计算小人移动下一个位置
//     6、箱子移动下一个位置
       7、移动小人和箱子
       8、再次打印地图
       9、判断输赢
 
 */
/**
 *  打印地图
 *
 *  @param map 地图数组
 *  @param len 数组长度
 */
void printMap(char map[][11],int len);
/**
 *  交换地图上的两个位置
 *
 *  @param map  地图
 *  @param oldX 原来X
 *  @param oldY 原来Y
 *  @param newX 新X
 *  @param newY 新Y
 */
void changePositionOfMap(char map[][11],int oldX,int oldY,int newX,int newY);

/**
 *  计算小人下一个位置
 *
 *  @param direction   小人要移动方向
 *  @param nextPersonX 下一个位置X的指针
 *  @param nextPersonY 下一个位置Y的指针
 */
void calculatePersonNextPosition(char direction,int *nextPersonX,int *nextPersonY);

int main(int argc, const char * argv[]) {
  
    char map[10][11] = {
            "##########",
            "#O ####  #",
            "# X####  #",
            "#        #",
            "######   #",
            "#  ####  #",
            "#        #",
            "#   ######",
            "#         ",
            "##########"
    };
    
//  打印地图
//    for(int i = 0; i < 10; i++){
//        printf("%s\n",map[i]);
//    }
    int len = sizeof(map) / sizeof(map[0]);
    printMap(map,len);
//  定义变量记录小人当前位置
    
    int currentPersonX = 1;
    int currentPersonY = 1;
    
//  定义箱子当前位置
    int currentBoxX = 2;
    int currentBoxY = 2;
    
//  定义路
    char street = ' ';
//  定义箱子
    char box = 'X';
    
//  让用可以一直操作这个小人移动，那么这时候，就需要一个死循环
    while (1) {
        
//      定义人的下一个位置
        int nextPersonX = currentPersonX;
        int nextPersonY = currentPersonY;
        
//      提示用户录入
        printf("移动小人，只有小人在箱子后面的时候，才能推动箱子，w表示向上，s表示向下，a表示向左，d表示向右\n");
//      定义变量接收玩家的录入
        char direction;
//      接收玩家的录入
        scanf(" %c",&direction);
        
//      根据方向来计算小人下个位置
        calculatePersonNextPosition(direction, &nextPersonX, &nextPersonY);
        
//     根据小人的下一个位置来移动小人和箱子
        if(map[nextPersonX][nextPersonY] == street){
//          小人的当前位置与下一个位置进行交换
//            char temp  =  map[currentPersonX][currentPersonY];
//            map[currentPersonX][currentPersonY] = map[nextPersonX][nextPersonY];
//            map[nextPersonX][nextPersonY] = temp;
            changePositionOfMap(map, currentPersonX, currentPersonY, nextPersonX, nextPersonY);
//          改变小人的当前位置为下一个位置
            currentPersonX = nextPersonX;
            currentPersonY = nextPersonY;
        }else if(map[nextPersonX][nextPersonY] == box){

           int  nextBoxX = currentBoxX + (currentBoxX - currentPersonX);
           int  nextBoxY = currentBoxY + (currentBoxY - currentPersonY);
//         如果箱子的下一个位置是路
           if (map[nextBoxX][nextBoxY]  == street) {
//             交换箱子与箱子的下一个位置
//                char temp  =  map[currentBoxX][currentBoxY];
//                map[currentBoxX][currentBoxY] = map[nextBoxX][nextBoxY];
//                map[nextBoxX][nextBoxY] = temp;
               
               changePositionOfMap(map, currentBoxX, currentBoxY, nextBoxX, nextBoxY);
                currentBoxX = nextBoxX;
                currentBoxY = nextBoxY;
               
               
//               temp  =  map[currentPersonX][currentPersonY];
//               map[currentPersonX][currentPersonY] = map[nextPersonX][nextPersonY];
//               map[nextPersonX][nextPersonY] = temp;
               changePositionOfMap(map, currentPersonX, currentPersonY, nextPersonX, nextPersonY);
               // 改变小人的当前位置为下一个位置
               currentPersonX = nextPersonX;
               currentPersonY = nextPersonY;
            }
            
        
            
            
            
        
        }
       
        
        //  打印地图
        printMap(map,len);
        
        
//      判断输赢
        if(currentBoxX == 9 || currentBoxY == 9)
        {
            printf("恭喜你\n");
            break;
        }
   
    }
    
    
    return 0;
}

/**
 *  计算小人下一个位置
 *
 *  @param direction   小人要移动方向
 *  @param nextPersonX 下一个位置X的指针
 *  @param nextPersonY 下一个位置Y的指针
 */
void calculatePersonNextPosition(char direction,int *nextPersonX,int *nextPersonY)
{
    switch (direction) {
        case 'w':
        case 'W':
            (*nextPersonX)--;
            break;
        case 's':
        case 'S':
            (*nextPersonX)++;
            break;
        case 'a':
        case 'A':
            (*nextPersonY)--;
            break;
        case 'd':
        case 'D':
            (*nextPersonY)++;
            break;
        default:
            break;
    }
    
}



/**
 *  交换地图上的两个位置
 *
 *  @param map  地图
 *  @param oldX 原来X
 *  @param oldY 原来Y
 *  @param newX 新X
 *  @param newY 新Y
 */
void changePositionOfMap(char map[][11],int oldX,int oldY,int newX,int newY)
{
    char temp = map[oldX][oldY];
    map[oldX][oldY] = map[newX][newY];
    map[newX][newY] = temp;
}




/**
 *  打印地图
 *
 *  @param map 地图数组
 *  @param len 数组长度
 */
void printMap(char map[][11],int len)
{
    //  打印地图
    for(int i = 0; i < 10; i++){
        printf("%s\n",map[i]);
    }
}
