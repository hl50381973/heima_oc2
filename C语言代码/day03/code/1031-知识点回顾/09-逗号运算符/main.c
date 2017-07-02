//
//  main.c
//  09-逗号运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
//在C语言中所有表达式都由返回值(结果)
//结合方向：从左往右
//返回值：  最后一个表达式的值

int main(int argc, const char * argv[]) {
 
    
    printf("%d\n",(1,2,3));
    
    int a = 10;
    int b = 2;
    
    int result  = (a += 2,b + 4,4 + a);
    
    printf("result = %d\n",result);
    
    
//  注意点：
    
    int e,f,g;//这不是一个逗号表达式，这个是定义多个变量的简便方式
    
    
    return 0;
}
