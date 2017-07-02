//
//  main.c
//  10-关系运算符
//
//  Created by Apple on 14/10/31.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   关系运算符
   所有的关系运算符都是用来比较两个数据的，它们的结果只有两个要么是真(1)要么假(0)
 
   >   大于
   <   小于
   >=  大于等于
   <=  小于等于
 
  上面的四个比较运算符的优先级要大于后面的两个
 
   !=  不等于
   ==  等于
 
   赋值运算符的优先级 < 比较运算符的优先级 < 算术运算符的优先级
 
 
   比较运算符的结合性： 从左往右的
 */

int test()
{
    int result  =  1.5 < 1.6;
    
    result = 5 != 6;
    
    printf("%d\n",result);
    
    return 0;
}


int main(int argc, const char * argv[]) {
//  比较运算符的结合性从左往右的
    
    int result = 5 > 6 < 4 < 3;
    
//  当我们不确定某些运算符的优先级的时候，可以使用() 来明确优先级
    result = (5 == 5) < 4;
    
    printf("%d\n",result);
    
    int a = 10;
    double b = 20.0;
    
    result = a < b;
    printf("%d\n",result);
   
    
    result = 10 + 20 < 15 * 3;
    
    printf("%d\n",result);
    
    
    
    
    return 0;
}
