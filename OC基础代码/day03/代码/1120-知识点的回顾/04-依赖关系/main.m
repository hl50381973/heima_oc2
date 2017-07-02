//
//  main.m
//  04-依赖关系
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  依赖关系：A对象作为B对象的局部变量或是方法形参的，B依赖与A,这时候我们称A与B之间存在一种依赖关系
 
__________________________________以下内容了解
  面向对象设计中：
  耦合度：当修改一个对象的时候，对另外一个对象的影响程度
  低耦合: 当修改一个对象的对其他对象影响比较小
  高内聚:一个对象仅仅做自己相关的事情
  面向对象设计原则：单一职责原则
 
 */

#import "CZBeauty.h"

int main(int argc, const char * argv[]) {
//  创建一个美女
    CZBeauty *beauty = [CZBeauty new];
//  创建一个电话
    CZPhone *phone = [CZPhone new];
    
    [beauty setName:@"fbb"];
 
    [beauty callTuHaoWithPhone:phone];
    
    [beauty sendMessageToDiaoSi];
    
    return 0;
}
