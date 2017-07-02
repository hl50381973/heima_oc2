//
//  main.c
//  12-typedef
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   typedef:给已有数据类型起别名
    
   基本数据类型
   int char float double
   结构体
   枚举
   指针
      1、普通变量的指针
      2、结构体指针
      3、函数指针
 
 
 */

/*
   基本数据类型
   定义格式：typedef 已有数据类型 别名;
 
 */
void testBaseType()
{
    
    typedef int  Int;
    
    Int num = 10;
    
    typedef Int Integer;
    
    Integer a = 20;
    
    printf("%d\n",a);
    
}
/*
    给结构体类型起别名
 
 */


void testStruct()
{
    
//  第一种方式：先定义结构体类型再给结构体类型起别名
    struct _Person{
        int age;
        char *name;
    };
    
    typedef struct _Person Person;
    
    Person p1 = {10,"小红"};
    printf("age = %d,name = %s\n",p1.age,p1.name);
    
// 第二种方式，定义结构体类型的同时给结构体类型起别名
    
    
    typedef struct _Dog{
        int age;
        char *name;
    } Dog;
    
    Dog dog = {1,"大黄"};
    
//  第三种方式：定义匿名结构体类型的同时给结构体起一个别名
    
    typedef struct{
        int age;
        char * name;
    } Cat;
    
    
    Cat cat = {1,"tom"};
    
}

//给枚举起别名

void testEnum()
{
//  1、先定义枚举类型然后给枚举起别名
    
    enum _Sex{
      Man,
      Woman,
      Other
    };
    
    typedef enum _Sex Sex;
    
    Sex sex = Man;
//  2、定义枚举类型的同时给枚举类型起一个别名
    
   typedef enum _Season{
        Spring,
        Summer
    } Season;
    
    
    Season season = Spring;
    
//  3、定义匿名枚举类型同时给枚举起一个别名
    
    typedef enum {
         Cong,
         Suan,
         Jiang
    } TiaoWei;
    
    
    TiaoWei zuoLiao = Cong;
 
}

//4、指针类型
//4.1 基本数据类型的指针
void testTypedefBasicPointer()
{
    typedef  int * IntPointerType;
    int a = 10;
    
    IntPointerType p = &a;
    
    *p = 20;
    
    printf("%d\n",a);
    
}

//4.2 给结构体类型的指针起别名
void testTypedefStructPointer()
{
    typedef struct {
        char *name;
        int age;
    } Person;
    
    
    typedef Person * PersonPointerType;
    
    Person p = {"张三",10};
    
    PersonPointerType pp = &p;
    
    
    typedef struct _Cat{
        char *name;
        int age;
    
    } Cat, * CatPointerType;
    
    Cat cat = {"小猫",1};
    
    CatPointerType catPointer = &cat;
    
    printf("name = %s,age = %d\n",catPointer->name,catPointer->age);
    
}

//4.3 给枚举类型的指针起别名

void testTypedefEnumPointer()
{
//  先定义枚举类型
    enum _Sex{
         Man,
        Woman,
        Other
    };
    
    typedef enum _Sex * SexPointer;
    
    enum _Sex sex = Man;
    
    
    SexPointer sexPointer = &sex;
    
    *sexPointer = Woman;
    
    printf("%d\n",sex);
    
}


//4.4 给函数指针起别名

int sum(int num1,int num2){
    
    return num1 + num2;
}

int minus(int num1,int num2){
    
    return num1 + num2;
}

//给函数指针起别名

//typedef 指针所指向的函数的返回值类型 (*函数指针类型别名)(所指向的函数的形参列表);

void testTypedefMethodPointer()
{

    
//    int (*sumPointer)(int num1,int num2) = sum;
//    
//    int (*minusPointer)(int num1,int num2) = minus;
    
    typedef  int (*MethodPointerType)(int num1,int num2);
    
    MethodPointerType sumPointer = sum;
    
    MethodPointerType minusPointer = minus;
    
    int rs =  sumPointer(10,20);
    printf("rs = %d\n",rs);
    
}
//了解
void testTypedefArrayPointer()
{
    char names[][10] = {"xtf","zbz","wf"};
    
    char (*arrayPoiner)[10];
   
    arrayPoiner = names;
    
    typedef char (*ArrayPointerType)[10];
    
    ArrayPointerType pointer = names;
    
    printf("%s\n",pointer[0]);
    
}



int main(int argc, const char * argv[]) {
    
    
    
//
//    testBaseType();
//    testStruct();
    testTypedefBasicPointer();
    
    testTypedefStructPointer();
    
    testTypedefEnumPointer();
    
    testTypedefMethodPointer();
    
    testTypedefArrayPointer();
    return 0;
}
