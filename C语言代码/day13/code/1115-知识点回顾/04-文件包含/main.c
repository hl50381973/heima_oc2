//
//  main.c
//  04-文件包含
//
//  Created by Apple on 14/11/15.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
  #include 拷贝文件
 
  #include " " 自己写的文件
  #include <>  系统头文件
 
   
  1、#include 可能会导致文件重复包含
  2、循环包含
 
 */

#include "me.h"

int main(int argc, const char * argv[]) {
  
    int rs = sum(10, 20);
    printf("%d",rs);
    
    return 0;
}
