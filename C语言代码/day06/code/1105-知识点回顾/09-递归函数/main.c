//
//  main.c
//  09-递归函数
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   递归函数：自己调用自己的函数
 
   计算： 1 + 2 + 3 + ... + n
   
    1、确定fun(n) 与 fun(n - 1) 的关系
    2、确定函数终止条件
    fun(n) = 1 + 2 + 3 + ... + n;
    fun(n - 1) = 1 + 2 + 3 + ... + n -1;
    fun(n) 与 fun(n - 1) 之间的关系
    fun(n) = fun(n - 1) + n
    函数终止条件
    fun(1) = 1;
 
    计算： n! = 1 * 2 * ... * n
    1、确定fun(n) 与 fun(n - 1) 之间的关系
    fun(n) = fun(n - 1) * n;
    2、确定函数终止条件
    fun(1) = 1;
 
    3、计算法  m的n次方
    fun(m,n) = m * m *... * m (一共有n个m)
    fun(m,n-1) = m * m *... * m (一共有n - 1个m)
    确定关系n 与 n -1 之间的关系
    fun(m,n) = fun(m,n-1) * m;
    确定终止条件
    fun(m,1) = m;
 
 
 1、递归函数如果能不使用就不要使用
 
    因为函数调用是由成本，也就是说它要消耗一定的资源的
 
 */


int myPow(int m, int n)
{
    if (n == 1) {
        return m;
    }
    
    return myPow(m,n-1) * m;
}

int jieCheng(int n)
{
    if (n == 1) {
        return 1;
    }
    return jieCheng(n - 1) * n;

}


int sum(int n)
{
    printf("死调用%d\n",n);
    if (n == 1) {
        return 1;
    }
    
    return sum(n - 1) + n;
}



int main(int argc, const char * argv[]) {
    
//    int result  =  sum(3);
//    int result = jieCheng(3);
    int result = myPow(2,3);
    
    printf("result = %d\n",result);
    
    return 0;
}
