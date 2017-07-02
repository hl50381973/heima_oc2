//
//  main.c
//  10-scanf函数基本使用
//
//  Created by Apple on 14/10/30.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int test()
{
    //  1、定义变量
    //    int i;
    ////  2、使用scanf接收用户从键盘上输入
    //    scanf("%i", &i);
    //
    //    printf("%d\n",i);
    
    float f;
    scanf("%f\n",&f);//scanf格式字符串最后面不要加\n
    printf("%f\n",f);
    
    return 0;
}

/*
    scanf中在%d，%f,%lf前面输入空格、回车、Tab忽略掉，%c除外
 */

int test3()
{
    //       int i = 0;
    //    scanf("%d",&i);
    //    printf("%d\n",i);
    
    //    int a,b,c,d;
    //    scanf("%d%d%d%d",&a,&b,&c,&d);
    //    printf("%d,%d,%d,%d\n",a,b,c,d);
    
//  scanf录入数据的时候，录入格式必须与格式化字符串中格式一致
    int a,b,c,d;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    printf("%d,%d,%d,%d\n",a,b,c,d);
    
    return 0;
}

int test4()
{
    int a,b,c,d;
    //  scanf是从前到后匹配的，遇到格式不匹配的字符就结束
    //  scanf占位符中间分割符可以是任意的
    scanf("%d=%d=%d=%d",&a,&b,&c,&d);
    printf("%d,%d,%d,%d\n",a,b,c,d);
    
    return 0;
}

int test5()
{
    int a;
    //  % 与 d之间可以有数字N,这个N表示接受数据的宽度
    scanf("%2d",&a);
    
    printf("%d",a);

    return 0;
}


int main(int argc, const char * argv[]) {

    int i;
    float f;
    double d;
    char c;
    //  1、当录入单精度的浮点数的时候，只需要录入小数，不要再后面加f
    //  2、当我们录入字符的时候，只需要录入字符，不要加单引号
    scanf("%d,%f,%lf,%c",&i,&f,&d,&c);
    printf("%d,%f,%lf,%c\n",i,f,d,c);

    return 0;
}
