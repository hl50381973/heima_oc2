//
//  main.m
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  1、类方法
     1、声明定义以+开头
     2、类方法隶属类的，只能通过类来调用
     3、不可以直接访问成员变量
     4、不可以直接调用对象方法
     5、类可以调用其他类方法
  2、对象方法
     1、声明或定义的时候，以-开头
     2、对象方法隶属于对象的，只能同过对象调用
     3、可以直接访问成员变量
     4、可以直接调用其他对象方法
     5、可以调用类方法
 
 注意点：
    类方法和对象方法可以重名的
 
  2、匿名对象：没有名字对象
     1、当我们不需要重复使用这个对象的时候，就使用匿名对象，因比较简洁
     场景：1、创建一个对象后仅仅调用一次某个方法
          2、作为函数或方法的实参
     2、缺点：创建出来对象仅能使用一次
 
 3、封装
    1、类是属于与功能封装
    2、数据的封装：不让外界直接访问成员变量，而是提供getter 和 setter 供外界调用
    3、提高成员健壮性
       提高代码的灵活性
      提高程序的可维护性
    如何进行封装
      1、为每一个成员变量提供getter 和 setter 方法
      2、setter 方法，写方法,给成员变量赋值
        1、必须是对象方法，必须以- 开头
        2、必须没有返回值
        3、方法名必须以set + 成员变量名称去掉下划线首字母大写
        4、必须有一个形参，并且参数类与成员变量类型一致
      3、getter 方法，读方法，读取成员变量的值
        1、必须是对象方法，必须以- 开头
        2、必须要一个返回值，并且返回值的类型与成员变量类型一致
        3、方法名就是成员变量去掉下划线
        4、必须空参的
 4、类与类关系
    1、依赖关系
       当A类的对象作为B的方法中的形参或局部变量,B依赖于A,B和A之间就存一种依赖关系
    2、关联关系，HasA关系，当B类中有一个成员变量是A类的对象，那么我们说B类拥有一个A类对象，A 与 B之间的关系为关联关系
       1、当B中很多地方都使用A类对象，那么这时候我们A类对象作为B类成员变量
    3、依赖关系与关联关系的区别
       依赖关系是一种短期的依赖，当方法执行完毕这种依赖就不存在了
       关联关系式一种长期依赖，只要对象存在那么这种依赖关系都是存在的
       关联关系的耦合度高于依赖关系
       耦合度：一个类的修改对另外一个类的影响程度

 */




int main(int argc, const char * argv[]) {

    
    
    
    return 0;
}
