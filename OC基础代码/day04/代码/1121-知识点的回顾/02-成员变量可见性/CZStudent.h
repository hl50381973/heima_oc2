//
//  CZStudent.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@interface CZStudent : CZPerson
{
//  父类中私有的成员变量，在子类中已经存在了，只是没有权限访问
//  在子类中不可以定义与父类同名变量，哪怕这个变量在父类中是私有
//  int _age;
}
//测试@private的变量的
- (void) testPrivate;

@end
