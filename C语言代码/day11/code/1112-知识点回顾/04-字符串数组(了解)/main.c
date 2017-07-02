//
//  main.c
//  04-字符串数组(了解)
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
//  第一种方式：使用char类型的二维数组
//  这里的字符串的字符元素是放在栈中，字符串中的字符是可以修改的
    char names[][20] = {
        "CGX",
        "zbz",
        "xtf",
        "wf",
        "zf",
        "lyp"
    };
    
    names[0][0] = 'c';
    
    printf("%s\n",names[0]);
    
    
//  第二种方式：字符指针数组，数组中的字符串元素是不可以修改的
//  char 类型的指针数组，数组存储是指向常量区字符串的指针
    
    char *nms[] = {
        "CGX",
        "zbz",
        "xtf",
        "wf",
        "zf",
        "lyp"
    };
    
//    nms[0][0] = 'c';
    
    printf("%s\n",nms[0]);
    
    nms[0] = "cgx";
    printf("%s\n",nms[0]);
    
    
    return 0;
}
