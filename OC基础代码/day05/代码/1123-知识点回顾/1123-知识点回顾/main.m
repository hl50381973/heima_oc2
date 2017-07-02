//
//  main.m
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
   1、self关键字
      1、在对象方法中，它是调用这个方法的那个对象
      2、在类方法中，它是这个类的类对象
      3、无论在对象方法中，还是在类方法中，谁调用这个方法，那么self就是谁
      4、如果你要对象方法中去调用该类的其他的对象方法只能self来调用
   2、继承：当B类继承A类，那么B类会拥有A类的所有成员变量和方法
      OC是单继承：一个类只能一个直接父类
      OC是多层继承：B类继承A类，C类可以继承B类，D类可以继承C类  A->B->C->D
      在OC如何实现继承：声明类的时候，在类名后面 :父类名称 的语法来实现继承
     
      优点：代码复用
      缺点：高耦合
      继承关系也成为isA关系
      使用场景：一般情况下，当我们可以说通B是一个A的时候，那么就可以使用B类继承A
   3、多态：一个对象指针的多种表现形态
      多态条件
      1、必须要继承关系
      2、子类重写父类方法
      3、父类的指针指向子类对象
      优点：
      1、提高代码的灵活性
      编程原则：依赖于抽象不依赖于具体
   4、点语法：通过.号，来访问setter 和 getter方法
      1、当这个点语法在=左边的时候，就是调setter方法
      2、当这个点语法在=右边的时候，就是调getter方法
      3、当没有=号的时候，就是调用getter方法
      注意点：
      1、不要setter方法中，使用.语法给变量赋值
      2、不要getter方法中，使用.语法读取变量的值
      3、因为上面的两种情况会死循环
   5、decription方法
      1、NSLog使用%@输出一个对象的时候，就会调用这个对象的上的decription方法
      2、对象方法 decription方法在NSObject类中有个默认实现就是类名和这个对象的地址
      3、如果你要定制对象的输出就需要重写decription方法
      4、当使用NSLog输出类对象的时候，就调用该类的类方法decription
      注意点：
          不要再重写description方法时候，NSLog(@"%@",self);
   6、类的本质：类就是类对象
     
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
    }
    return 0;
}
