//
//  main.c
//  08-指针与二维数组(理解)
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 
 
 
 */

void test()
{
    
    int nums[3][2] = {{1,2},{3,4},{5,6}};
    
    int *p = nums[0];
    
    printf("%p\n",p);
    printf("%p\n",nums);
    
    for (int i = 1; i < 6; i++) {
        printf("%d ",*(p + i));
    }
    
    
}
/*
  定义指针数组的格式：
  数据类型 * 指针变量名称[指针个数]
 */
void test2()
{
    int nums[3][2] = {{1,2},{3,4},{5,6}};
    
    //    int * p[2] = {nums[0],nums[1]};
    //        p = nums;
    //
    //    printf("%d\n",p[0][1]);
    
    int a = 10;
    int b = 20;
    int c = 30;
    
    int *p = &a;
    
    //    *p === p[1]; 没有这么写的
    
    int *ps[3] = {&a,&b,&c};
    
    printf("%d,%d,%d",*ps[0],*ps[1],*ps[2]);
    
}
/*
  定义一个指向一维数组的指针
  数据类型 (*指针名称)[所指向的一维数组的元素个数]
 
  指针 + 整数 === 指针中的值 + 所指向数据类型的长度 * 整数
 */

int main(int argc, const char * argv[]) {

    int nums[3][2] = {{1,2},{3,4},{5,6}};
    
    int (*ps)[2];
    
    ps = nums;//可以认为ps 与 nums是等价的
    
    
    int num = ps[0][1];
    printf("%d\n",num);
    
    
    printf("%p\n",nums);
    printf("%p\n",nums+1);
    
    printf("%p\n",ps);
    printf("%p\n",ps+1);
    
    
    for (int i =0 ; i < 3; i++) {
    
        for (int j = 0; j < 2 ; j++) {
            printf("%d ",ps[i][j]);
        }
        printf("\n");
    }
   
    
    
//    nums   nums[0]
    
//    相同点：对应地址都是一样的
//    不同点:指针类型是不同
//    nums + 1 = nums + sizeof(nums[0])
//    nums[0] + 1 = nums + sizeof(int)
    
//   sizeof(nums) 二维数组所用占用存储空间字节数
//   sizeof(nums) / sizeof(int) 二维数组中一共有多少个int的数据
    
    int *p = nums[0];
    for (int i = 0; i < sizeof(nums) / sizeof(int); i++) {
        printf("%d ",p[i]);
    }
    
    
    
    
    return 0;
}
