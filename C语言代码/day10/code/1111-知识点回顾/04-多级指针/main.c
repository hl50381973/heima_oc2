//
//  main.c
//  04-多级指针
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

void test()
{
    int num = 10;
    
    int *p = &num;
    
    //  定义一个指针来指向变量p
    //  pp就是一个二级指针
    int **pp = &p;
    
    **pp = 30;
    printf("%d\n",num);
    
    int ***ppp = &pp;
    ***ppp = 50;
    printf("%d\n",num);
    
    //  四级指针
    int ****pppp = &ppp;
    ****pppp = 100;
    printf("%d\n",num);
    
}


void readFile(char **error)
{
    *error = "读取错误";
    
}

int main(int argc, const char * argv[]) {
  
//    char error[100];
    
    char *error;
    
    readFile(&error);
    
    printf("%s",error);
    
    return 0;
}
