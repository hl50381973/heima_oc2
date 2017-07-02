//
//  main.c
//  06-动态存储空间的使用
//
//  Created by Apple on 14/11/12.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

/*
   堆：动态存储区
 
   1、它的内存由程序猿管理
   
   使用动态存储区
   1、导入 stdlib.h
    malloc(size_t size);
   向操作系统申请堆中一块存空间，如果操作系统分配成功，就会返回这个存储空间的地址，否则返回NULL
 
   2、free(viod *); 告诉操作系统这块存储空间不再使用了，
      有一个malloc 就必须有一个free与之对应，否则造成内存泄露
      释放过的指针就不可以再次释放了，否则程序崩溃了
 
 
 
 */
int main(int argc, const char * argv[]) {

//   向操作系统申请内存
     int *pi  = malloc(sizeof(int));
    
    
     if(pi != NULL)
     {
//       使用内存
         *pi = 20;
         printf("%d\n",*pi);
//       释放内存
         free(pi);
         printf("%d\n",*pi);
//       清空指针
         pi = NULL;
//       清空后的指针使用free不会有任何效果，free对空指针是无效的
         free(pi);
         
     }

   
    
    
    return 0;
}
