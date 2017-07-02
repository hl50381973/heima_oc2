//
//  main.c
//  02-分支结构if基本概念
//
//  Created by Apple on 14/11/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   
   if (条件表达式){
       语句;
       ...
   }
 
 */
int main(int argc, const char * argv[]) {
 
    
    int age = 5;
    
    if (age >= 18) {
        printf("给你上网卡\n");
//  否则
    }else{
        printf("叫上爸妈一起来\n");
    }
 
    
    return 0;
}
