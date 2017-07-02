//
//  main.c
//  05-赋值运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   =  赋值运算符
 
   复合赋值运算符
   +=
   -=
   *=
   /=
   %=
 
 */

int test()
{
    /*
     赋值运算符：就是把等号右边的数值放到左边的变量中，同时它做一个表达式本身有值，它值就是右边那个数
     赋值运算算的结合方向：从右往左的
     
     算术运算符的优先级要高于赋值运算符的优先级
     */
    int a;
    a = 10;
    printf("%d\n",a);
    printf("%d\n",a = 10);
    
    int b,c;
    b = c = 2;
    
    b = a + c;
    
    printf("b = %d",b);
    
    return 0;
}

int test1()
{
    int a = 2;
    a += 10;// 等价于 a = a + 10;
    a -= 8; //  等价于 a = a - 8
    a *= 2; //  等价于 a = a * 2;
    a /= 4; //  等价于 a = a / 4;
    a %= 2; // 等价于  a = a % 2;
    
    printf("a = %d\n",a);
    return 0;
}


int main(int argc, const char * argv[]) {
  
// 所有赋值运算符的优先级都是小于算术运算符的，
// 赋值运算符是所有运算符中除了逗号运算符以外优先级最低的
    int a = 4;
    
    a *= 2 + 3;
   
    printf("a = %d\n",a);
    
    
    
    return 0;
}
