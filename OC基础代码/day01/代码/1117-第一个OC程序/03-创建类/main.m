//
//  main.m
//  03-创建类
//
//  Created by Apple on 14/11/17.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>


//OC中创建类
//OC中一个类包含两个部分
//声明和实现
/*
 
  类的声明必须以@interface开头，必以@end结尾
  类的实现必须以@implementation开头，必以@end结尾
 
  NSObject:基类，所有类的祖先类
  : NSObject 作用是让Person类具有创建对象的能力
 
  Person
 
  注意点：如果一个类中只有声明没有实现，那么这个类在链接的就报错，是不可创建成功
 
  OC中方法声明的格式
  无形参：  方法类型符 (返回值类型) 方法名称
  对象方法：是属于对象的，只能通过对象调用，他的 方法类型符 是 -
 
 
  注意点：
        1、成员的声明必须放在@interface 与 @end之间{}中，不能放在大括号外
        2、方法的声明必须放在{} 与@end之间
        3、@implementation 作用就是用来实现方法的
        4、如果你类只有声明没有实现那么链接就会报错
 */


@interface Person : NSObject
{
// 一定要在大括号中声明类的属性(成员变量)
//  命名规则：标识符规则
//  命名规范：必须以_开头，_后面的首字母是小写，其后的单词首字母大写
@public
    char *_name;
    int _age;
}

/**
 *  秀
 */
- (void) show;

/**
 *  吃
    带有一个参数的方法
 */
- (void) eat:(char *)food;
/**
 *  吃
 *
 *  @param food  食物
 *  @param tools 工具
 */
- (void) eat:(char *)food using:(char *)tools;

/*
   1、:是方法名称的一部分
   2、一个:对应一个形参
   3、方法声明中的所有数据类型都要使用小括号括起来
   4、:前面的文字用来描述参数的作用的
   5、:前面的参数说明符是可以省略的，但是开发千万不要省略的

 */

@end

/*

 Terminating app due to uncaught exception 'NSInvalidArgumentException', reason: '-[Person eat:using:]: unrecognized selector sent to instance 0x100208bf0'
 
  出现这个错误原因是你给一个对象上发送它上面没有实现的方法
 
 
 */

@implementation Person

- (void) show
{
//  对象方法中可以直接访问，该对象的成员变量
    NSLog(@"name = %s,age = %d",_name,_age);
}

/**
 *  吃
 *
 *  @param food 食物
 */
- (void) eat:(char *)food
{
    NSLog(@"吃了 %s",food);
}


- (void) eat:(char *)food using:(char *)tools
{
    NSLog(@"使用 %s 吃 %s  ",tools,food);
}

@end




int main(int argc, const char * argv[]) {
 /*
    [类名 new] 作用 通过类来创建一个对象
     1、为Person这个对象在堆中分配内存
     2、初始化成员变量
     3、返回指向刚刚创建出来的对象的指针
  
  */
    Person *p1  = [Person new];
    
    p1->_age = 10;
    p1->_name = "xiaohu";
    
    
//    NSLog(@"%p,%d",p1,p1->_age);

    [p1 show];
    
    [p1 eat:"beef"];
    
    [p1 eat:"beef" using:"knife"];
    
    
    return 0;
}
