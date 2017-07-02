//
//  main.c
//  11-逻辑运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  逻辑运算符：所有逻辑运算符他们的结果只有两个要么真(1)要么是假(0)
  
  && 逻辑与  (并且)
  && 只要有一个表达式为假，那么整个表达式的结果就为假
  && 如果左边的表达式为假，那么右边的表达式就不参与运算(与断路)
  口诀： 一假则假
  结合方向： 从左往右
 
  || 逻辑或 (或者)
  1、只要有一个表达式为真，那么整个表达式的结果就为真
  2、如果前面的表达式为真，那么后面的表达式就不参与运算了(或断路)
  口诀：一真则真
  结合方向：从左往右

  && 和 || 的优先级要小于 关系运算符的优先级 大于 赋值运算符的优先级
 
 
  !  逻辑非
  1、真变假，假变真
  2、结合方向：从右往左
  3、它优先级要高于比较运算符和算术运算符的优先级
 
 */


int test()
{
    double heightOfXM = 1.6;
    double heightOfXB = 1.7;
    double heightOfXH = 1.64;
    
    int result =  heightOfXH < heightOfXM && heightOfXH < heightOfXB;
    
    printf("result = %d\n",result);
    
    return 0;
}

int test2()
{
    //  在C语言中所有数值都是有真假性，所有非零的数都为真，只有0为假
    //
    int result = 2 && 1;
    int a = 1;
    
    result = a-- && a++ && a--;
    
    printf("%d,%d\n",result,a);
    
    printf("result = %d\n",result);
    
    return 0;
}

int test3()
{
    
    int result =  0 || 6;
    
    int a = 10;
    int b = 12;
    //  优先级越高的只是越先结合(剥洋葱)
    result =  (b > a) || (a++ > b && 0);
    
    
    printf("result = %d,a = %d \n",result,a);
    
    return 0;
}

int main(int argc, const char * argv[]) {

    int result  = !(1 > 3);
    
    printf("%d\n",result);
    

    
    return 0;
}
