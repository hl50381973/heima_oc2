//
//  main.c
//  07-#include预编译指令
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
  #include 是预编译指令
  预编译指令：在编译之前就需要解析处理的指令
 
  #include作用：在预编译的时候拷贝#include 后面文件的内容到#include指令所在位置
 
  #include "文件名称"
  1、在当前文件所在目录查找
  2、如果在当前目录下没有找到就去编译器的include路径下查找
  3、如果还没有找到就去系统的include路径下查找
  4、如果还没有找到就报错了
 
  #include <文件名称>
 1、去编译器的include路径下查找
 3、如果还没有找到就去系统的include路径下查找
 4、如果还没有找到就报错了
 
 总结：当你需要包含项目中文件(程序员自己写的文件)就是 #include ""
      当你需要包含系统的库文件的时候就使用 #include <>
 
 */
int main(int argc, const char * argv[]) {
  
#include "test/a.txt"

    
    
    return 0;
}
