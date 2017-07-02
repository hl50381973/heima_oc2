//
//  main.c
//  12-昨天练习
//
//  Created by Apple on 14/11/6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  5.A/B/C/D/E 5个人在某天夜里合伙去捕鱼，到凌晨时都疲惫不堪，于是各自找地方睡觉，第二天，A第一个醒来，他将鱼分成5份，把多余的一条鱼扔掉，拿走自己的一份。B第二个醒来，也将鱼分成5份，把多余的一条鱼扔掉，拿走自己的一份。C/D/E依次醒来，按同样的方法拿鱼。问他们合伙至少捕了多少条鱼？
   假设 
   fun(1)
   fun(2) = ((fun(1) - 1) / 5) * 4 // 隐含 (fun(1) - 1) % 5 == 0
   fun(3) = ((fun(2) - 1) / 5) * 4 // 隐含 (fun(2) - 1) % 5 == 0
   fun(4) = ((fun(3) - 1) / 5) * 4 // 隐含 (fun(3) - 1) % 5 == 0   
   fun(5) = ((fun(4) - 1) / 5) * 4 // 隐含 (fun(4) - 1) % 5 == 0
   fun(6) = ((fun(5) - 1) / 5) * 4 // 隐含 (fun(5) - 1) % 5 == 0
 
 
 */

int theNumberOfFish(int n)
{
    //  1、假设捕鱼6条
    int totalFish = 6;
    
    for (int i = totalFish; 1 ; i++) {
        //      定义一个变量记录分鱼后剩余鱼
        int leftFish = i;
        
        //      假设找到了
        int isFind = 1;
        //      分五次鱼
        for (int j = 0; j < n; j++) {
            //          尝试能否分鱼
            if ((leftFish - 1) % n == 0) {
                //              记录剩余的鱼的条数
                leftFish =  ((leftFish - 1) / n) * (n - 1);
            }else{
                //              如果不能分鱼就跳出循环，继续猜测
                isFind = 0;
                break;
            }
        }
        //      如果找到了，就把它打印出来
        if (isFind) {
            totalFish = i;
//            printf("%d",i);
            break;
        }
        
    }
    
    return totalFish;
}



int main(int argc, const char * argv[]) {
  
   int total =  theNumberOfFish(2);
    printf("%d\n",total);
    return 0;
}
