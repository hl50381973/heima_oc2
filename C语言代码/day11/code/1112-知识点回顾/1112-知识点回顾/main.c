//
//  main.c
//  1112-知识点回顾
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   指针：就是地址
   指针变量：存放地址变量
 
   指针的作用：有了指针就可以访问它所指向的存储空间；
 
   定义指针： 指针所指向数据类型 *指针变量名称;
 
   *作用：
        1、在定义指针变量的时候，它是类型说明符，它说明定义的这个变量是一个指针变量
        2、如果不是在定义指针的时候，它是一个操作符，用在指针变量的前面是访问指针所指向的存储空间
 
   &作用：
        1、取地址符，取出变量的地址
 
   当*作为操作符的时候，它与&是一对反操作符
 
   指针初始化：
   1、先定义再初始化
     int num = 10;
     int *p;
     p = &num;
     
     p = 1000;//错误
   2、定义同时进行初始
      int *p2 = &num;
 
      *p2 = &num;//错误 *在这里它是一个操作符，是访问p2所指向存储空间
 
 
注意点：
     1、只有定义没有初始化的指针里面是垃圾值，也是说它指向是不确定的，这时我们称这个指针是一个野指针
     2、你如果访问一个野指针所指向的存储空间
       2.1 程序崩溃
       2.2 潜在逻辑错误
     3、我们不能给指针直接复制一个整形数，因为内存由操作系统管理，我们不了解当前电脑中，那一块内存是被占用的，那块是空闲，所以内存是由操作系统分配，我直接写指针我们不明确这个指在哪里；如果指在我们没有访问权限的区域，程序就崩溃，如果指在我们可以访问区域，那么就可能会修改我们不该修的数据，造成程序的逻辑错误
     4、指针的指向是可以改变的
     5、多这个指针可以同时指向一个变量
 
 指针作为函数参数：
     1、指针作为函数参数传递是地址传递
        1、你只有通过修改这个指针所指向的存储空间，才能能修改主调函数的中变量的值，如果你仅仅是修改指针本身，不影响主调函数
     2、数组作为函数参数传递地址传递
     3、基本数据类型作为函数参数是值传递

 指针的使用场景：
     1、同过被调函数，修改主调函数中某个变量的值
     2、让函数返回多个值
 
 void change(int *num){
 
     *num = 10;
 }
 
 int main()
 {
    int  a = 1;
    change(&a);
 
 
 }
 
 **************************************************
 多级指针：
      二级指针：指向一级指针的指针
      int num = 10;
      int *p = &num;
      int **pp = &p; // 定义了一个二级指针
      **pp = 20;
      三级指针：指向二级指针的指针
      int ***ppp = &pp;
      ***ppp = 40;
      .......
 指针运算：
     算术运算： pointer 代表指针,num 代码一个整形数,var代表变量
     pointer + num：把指针向后移动num个它所指向的数据类型个单元
     pointer - num:把指针向前移动num个它所指向的数据类型个单元
     pointer1 - pointer2:pointer1所指向的数组的下标 - pointer2所指向的数组的下标
 
     char chars[] = {a,b,c};
     char *pointer = chars[0];
     *(pointer + 1) === chars[1];
 
     char *pointer2 = chars[2];
     pointer2 - pointer = 2
 
     赋值运算
    pointer = &var;
    pointer += num === pointer = pointer + num;
    pointer -= num;
 
    关系运算(比较运算)：这时候你可以把指针想象成一个整形的数字
    pointer1 == pointer2 :pointer1 与 pointer2 指向同一个地址
    pointer1 != pointer2
 
    pointer1 > pointer2  :pointer1 在 pointer2 的前面
    pointer1 < pointer2  :pointer1 在 pointer2 的后面
    pointer1 >= pointer2
    pointer1 <= pointer2
   
    自增自减
    ++pointer;
    pointer++;
    --pointer;
    pointer--;
 
 指针与一维数组
     1、数组像一个指针：使用数组名访问数组中元素，与使用指向这个数组的指针的访问其元素是等价
       int nums[] = {1,2,3,4};
       int *pointer = nums;
       nums[1] == pointer[1] == *(num +1) = *(pointer +1);
 
     2、数组不是一个指针
       1、sizeof(nums) != sizeof(pointer)
       2、nums = &nums 但 pointer != &pointer
       3、指针的指向是可改变的，数组指向是不可以改变的
 
  指针与二维数组
 
  1、指针数组：元素为指针的数组
    指针类型 ： 它说指向的数据类型 *
    定义个数  指针类型 数组名称[指针的元素个数] 比如： int *ps[5];
  2、数组指针：指针数组的指针
    指向一维数组的指针： int （*pointer)[元素个数];
    指向一维数组的指针它是和二维数组对应
    int nums[3][3] = {{1,2,3},{4,5,6},{7,8,9}}
    pointer = nums;
   
    pointer++；//它是+一个其所指向的一维数组的长度
 
    nums + 1 //它里面的一维数组的长度
 
    nums[1] + 1; // 它是加上一个一维数组中元素长度
 
 
 
 */
int main(int argc, const char * argv[]) {
   
    int num = -(-1);
    int *p = &num;
    
    printf("%d\n",*&num);
    
    return 0;
}
