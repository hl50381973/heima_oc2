//
//  main.c
//  08-结构体指针
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/**
   结构体指针：指向结构体的指针
   指针所指向的数据类型 * 指针变量名称;
  
   结构类型 * 指针变量名称;
 
 */

struct Student{
    char *name;//姓名
    int no;//学号
    double score;//成绩
};

int main(int argc, const char * argv[]) {
   
    struct Student stu = {"大木",60,59};
    
//   定义结构体指针
    struct Student *sp1;
    sp1 = &stu;
//  定义的同时进行初始化
    struct Student *sp = &stu;
//  通过指针访问结构体的成员的第一种方式
    (*sp).score = 60;
    
//  第二种方式(重点)
    sp->name = "小木";
    sp->no = 59;
    
    printf("name = %s,no = %d,score = %.2lf\n",stu.name,stu.no,stu.score);
    
  
    return 0;
}
