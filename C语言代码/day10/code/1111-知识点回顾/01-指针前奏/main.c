//
//  main.c
//  01-指针前奏
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//基本数据类型作为函数参数传递是值传递
//void moveFront(int x ,int y)
//{
//    x  = x + 2;
//}



void test()
{
    //  确定当前坐标
    int x = 20;
    int y = 150;
    
    printf("%p\n",&x);
    printf("%lu\n",&x);
    
    *((int *)(0x7fff5fbff76c)) = 22;
    
    printf("(%d,%d)\n",x,y);
    //    moveFront(x, y);
    //    printf("(%d,%d)\n",x,y);
    
}

//如果你想访问指针所指向存储空间，就必须使用访问指针所指向的存储空间的操作符
void moveFront(int *x ,int *y)
{
//  x  = x + 2;//此时是改变指针的指向，而不是访问指针所指向的存储空间
    *x  = *x + 2;
    
}



int main(int argc, const char * argv[]) {
 

    //  确定当前坐标
    int x = 20;
    
    int y = 150;
    
    
    printf("(%d,%d)\n",x,y);
    moveFront(&x, &y);
    printf("(%d,%d)\n",x,y);
    
    
    return 0;
}
