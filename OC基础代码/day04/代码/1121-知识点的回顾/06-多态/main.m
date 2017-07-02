//
//  main.m
//  06-多态
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
   多态：一个对象多种形态
   
 
   实现多态必须满足三个条件
   1、必须要有继承关系
   2、子类要重写父类的方法
   3、父类指针指向子类对象
 
   当使用父类指针指向子类对象的时候，那么同这个这个指针调用方法就是它实际指向的这个对象的方法
*/
//导入动物的头文件
#import "CZAnimal.h"
#import "CZDog.h"
#import "CZCat.h"
#import "CZManager.h"
#import "CZTiger.h"
/*
 2014-11-21 16:46:33.986 06-多态[1859:1393720] *** Terminating app due to uncaught exception 'NSInvalidArgumentException', reason: '-[CZCat bark]: unrecognized selector sent to instance 0x10010c870'
 调用对象上没有方法的时候，就报这个异常！
 
 
 */

int main(int argc, const char * argv[]) {
   
    CZAnimal *animal = [CZDog new];

//  如果你要使用子类对象中的特有方法（只有子类中有父类中没有的方法）
//  需要把父类对象强转位子类对象
//  但是这个时候你必须保证这个指针确实是指向这个子类对象
    [(CZDog *)animal bark];
    
    
    CZAnimal *ani = [CZAnimal new];
//  千万不要把一个指向父类对象的指针强转为子类对象
    CZDog *dog = (CZDog *)ani;
    
//    [dog bark];//此处报经典的方法没有找到的错误的
    
    
    return 0;
}

void test1()
{
    // 多态
    
    CZAnimal *animal = [CZDog new];
    //
    [animal eat];
    //  让父类指针指向CZCat对象
    animal = [CZCat new];
    
    [animal eat];
    
    /**  以下是多态使用场景         ****/
    //   创建一个管理员
    CZManager *manager = [CZManager new];
    
    CZCat * cat  = [CZCat new];
    //  管理员喂猫
    [manager feedAnimal:cat];
    
    CZDog *dog = [CZDog new];
    [manager feedAnimal:dog];
    
    
    CZTiger *tiger  = [CZTiger new];
    [manager feedAnimal:tiger];
    /*
     多态优点：
     1、让代码更加灵活
     2、可以提高代码的可维护性
     3、可以提高代码的复用性
     */
    
    /****** 面向对象的原则 ******/
    // 依赖于抽象不要依赖具体
    
}


void test()
{
    CZAnimal *animal = [CZAnimal new];
    
    [animal eat];
    // 创建一个狗
    CZDog *dog =  [CZDog new];
    
    [dog bark];
    //  狗吃
    [dog eat];
    //   创建一只猫
    CZCat *cat  = [CZCat new];
    [cat eat];
}