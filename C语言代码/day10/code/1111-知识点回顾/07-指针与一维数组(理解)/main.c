//
//  main.c
//  07-指针与一维数组(理解)
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*

 数组像一个指针：访问数组中元素，使用数组与使用指向这个数组的指针是等价
 
 nums[1] ==== p[1]
 nums+1  ==== p + 1;
 
 nums[1] 的本质 *(nums + 1)
 
 指针 + 整数 =====  指针中的值 + sizeof(所指向的数据类型) * 整数


//    int nums[] = {1,2,3,4,5};
//
//    int *p = nums;

double nums[] = {1.0,2.0,3,4,5};
double * p = nums;

//    printf("%d,%d,%d,%d,%d,%d\n",nums[1],p[1],*(nums + 1),*(p + 1),*(++p),。);

printf("%p\n",nums);
printf("%p\n",nums+2);

printf("%p\n",p);
printf("%p\n",p+2);



 */

/*
   数组不是一个指针
   1、sizeof(array) != sizeof(pointer):当一个数组赋值一个指针变量的时候，那么数组中有些信息就丢失了，比如数组长度，这种现象指针信息遗失
   2、指针的指向是可以改变的，数组的指向是不可以改变
   3、array == &array 数组名就是数组地址，pointer != &pointer : 指针所指向地址不是指针本身地址
 
 
 */

int main(int argc, const char * argv[]) {

    int nums[] = {1,2,3,4,5};
    int *p = nums;
    p = nums;
//    nums = nums + 1;
    
     printf("%lu,%lu\n",sizeof(nums),sizeof(p));
    
    
    printf("%p\n",nums);
    printf("%p\n",&nums);
    
    
    printf("%p\n",p);
    printf("%p\n",&p);
    
    
    return 0;
}
