//
//  main.c
//  11-练习
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
int main() {
//    int card = 1;
//    if (card > 1){
//       card = card - 1;
//       if (card < 7)
//        printf("小牌");
//    }else {
//        printf("王牌!");
//    }
    
    int card = 7 ;
    if (card > 1) {
        card = card - 1;
        if (card < 7)
            printf("小牌");
    }else
            printf("王牌!");
    
    return 0;
}