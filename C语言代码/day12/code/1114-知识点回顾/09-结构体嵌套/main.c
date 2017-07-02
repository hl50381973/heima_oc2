//
//  main.c
//  09-结构体嵌套
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

//定义了一个日期的结构体

struct Time{
    int hour; // HH
    int minute;//mm
    int second;//ss
};

struct Date{
    int year;
    int month;
    int day;
    struct Time time;
};
/*
   结构体嵌套：一个结构体内部可以有其他类型的结构体成员
 */

struct Employee{
    
    int no;
    char name[20];
//  入职日期
//    int year;
//    int month;
//    int day;
    struct Date inDate;
//  生日
//    int birthyear;
//    int birthmonth;
//    int birthday;
    struct Date birthday;
//  离职日期
//    int goyear;
//    int gomonth;
//    int goday;
    struct Date outDate;
};

void test()
{
    struct Employee emp = {1,"大幕",{2014,10,14,{12,12,12}},{1990,10,14},{2014,11,14}};
    
    printf("no = %d,name = %s,入职日期 = %d-%d-%d %d:%d:%d\n"
           ,emp.no,emp.name,emp.inDate.year,emp.inDate.month,emp.inDate.day,
           emp.inDate.time.hour,emp.inDate.time.minute,emp.inDate.time.second);
    
}


/*
   结构体嵌套的注意点：
   1、结构体不可以嵌套自己,不能有字节这种类型的成员
   2、结构体可以嵌套自己类型的指针
 */

struct Person{
    char *name;
//    struct Person son;
    struct Person *son;
};

/*
 1.某班有5个学生，三门课。分别编写3个函数实现以下要求：
 （1） 求各门课的平均分；
 （2） 找出有两门以上不及格的学生，并输出其学号和不及格课程的成绩；
 （3） 找出三门课平均成绩在85-90分的学生，并输出其学号和姓名
 */
int main(int argc, const char * argv[]) {
   
    struct Person father = {"father"};
    
    struct Person son = {"son"};
    
    father.son = &son;
    
    printf("son name = %s\n",father.son->name);

    return 0;
}
