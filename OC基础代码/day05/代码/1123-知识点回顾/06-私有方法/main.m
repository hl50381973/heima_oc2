//
//  main.m
//  06-私有方法
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
#import "CZCat.h"

int main(int argc, const char * argv[]) {
  
//   CZPerson *person = [CZPerson new];
//    [person show];
// 为CZPerson的实例对象开辟存储空间，把所有成员变量都置零
//  给CZPerson类 发送一个alloc 消息
//  但是仅仅有这个是不够的，还必须调用init来完成初始化
    CZPerson *person = [CZPerson alloc];
//  person对象发送一条init消息
    person  =  [person init];

    
    person.age = 20;
    
    id pi = person;

    [pi show];
    
    return 0;
}
