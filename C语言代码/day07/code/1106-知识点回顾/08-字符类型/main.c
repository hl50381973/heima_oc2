//
//  main.c
//  08-字符类型
//
//  Created by Apple on 14/11/6.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   字符 char  1字节 %c
   字符类型的本质就是整形数
   
   1、当我们把一个字符赋值给一个字符变量的时候，它首先会去查ASCII码表，找出该字符对应的ASCII值，然后把值放在对应变量中
   2、当我们把一个变量按照%c的格式输出的时候，它首先根据变量中的值去查ASCII码，找ASCII值对应的字符，显示在控制台商
 
   当我们表示一个范围比较小正数也可以使用char,这样更加节省内存
 
 */

void test()
{
    char c = 'a';
    
    
    printf("%d\n",c);
    printf("%c\n",97);
    
}

/*
   写一个函数把一个小字母转换为大写字母
 
 
 */
/**
    把一个小字母转换为大写字母
    'a' + 'A' - 'a' = 'A'
 */



char lowerToUpper(char lower)
{
    if (lower >= 'a' && lower <= 'z') {
        return  lower + ('A' -'a');
    }
    return lower;
}

void test1()
{
    char upper = lowerToUpper('0');
    printf("%c\n",upper);
    
}

/*
   字符类型的注意点：
    1、6 != '6'
    2、C语言的字符中是不包含中文的
    3、字符仅仅可以表示一个字符不可以写成 'ab'
 
 */

int main(int argc, const char * argv[]) {
    
//    printf("%c",'好');
    printf("%c",'ab');
    printf("%d,%d\n",6,'6');
  
    return 0;
}
