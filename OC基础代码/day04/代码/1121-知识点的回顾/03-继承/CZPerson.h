//
//  CZPerson.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//只有继承NSObject那么这个对象才有创建对象能力
//NSObject是大部分类的基类（根类 root class），
/*
  当 A 类 继承 B类，那么A类就拥有B类中所有成员变量和方法
  1、继承好处：代码重用
  2、继承缺点：父类的改变影响所有的子类，子类与父类的耦合度很高
 
  A类 继承 B类目的就是为了使用B类中的成员变量和方法
  使用场景：
  当我们发现一个类是另外一个类的时候就可以使用继承，例如学生是一个人，那么这个时候定义学生类的时候，就可以让学生继承人类
 
 
  3、当子类中不想使用父类的方法，那么把父类的方法覆盖掉
 
 */

@interface CZPerson : NSObject
{
    int _age;//年龄
    NSString * _name;//姓名
}

- (void) setAge:(int) age;

- (int) age;


- (void) setName:(NSString *) name;

- (NSString *) name;


- (void) eat;

@end
