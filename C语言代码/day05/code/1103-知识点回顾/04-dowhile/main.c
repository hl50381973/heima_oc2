//
//  main.c
//  04-dowhile
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int test()
{
    int i = 5;
    while (i < 4) {
        printf("i = %d\n",i);
        i++;
    }
    printf("***********************\n");
    
    i = 5;
    do{
        printf("i = %d\n",i);
        i++;
    }while (i < 4);
    
    /*
     循环体中语句至少执行一次
     */
    return 0;
}



int main(int argc, const char * argv[]) {

//  使用场景：买彩票
    int isWin = 0;
    do{
        printf("买彩票\n");
        printf("中了没？\n");
        scanf("%d",&isWin);
    }while (!isWin);
//  while 腼腆
//  do while 直接
    
    return 0;
}
