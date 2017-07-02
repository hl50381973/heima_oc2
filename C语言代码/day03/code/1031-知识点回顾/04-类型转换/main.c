//
//  main.c
//  04-类型转换
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int test()
{
    int a = 10.0f;
    float b = 2.5f;
    
    // 自动类型转换-》类型提升:当表示范围小的类型与表示范围大类型进行运算，小类型会自动转换大类型
    float c =  a + b;
    printf("c = %f\n",c);
    
    char d  = 'a';
    printf("%d",d);
    
    int i = d + 10;
    printf("i = %d\n",i);
    
    return 0;
}

int test4()
{
    
    //  当两个相同数据类型的数进行运算的时候，那么他们运算出来结果还是什么类型
    //    double d = 10 / 4; // 2
    
    //    double d = 10 / 4.0;
    
    //   强制类型转换:在某个数前面加 (数据类型)数据
    //     double d =  (double)10 / 4;
    
    //    int a = 10;
    //    int b = 4;
    //
    //    double d = (double)a / b;
    
    int d = (int)14.6;
    
    
    printf("d = %d\n",d);
    
    return 0;
}


int main(int argc, const char * argv[]) {

//  当我们把一个大类型数赋值一个小类型数，大类型会自动转换小类型
//  注意点：导致精度丢失
    
    int a = 10.5;
    
    printf("%d",a);
    
    return 0;
}
