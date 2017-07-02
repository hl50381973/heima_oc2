//
//  CZPerson.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZPerson : NSObject
{
//  年龄
    int _age;
//  姓名
    NSString * _name;
}

- (void) setAge:(int) age;

- (int) age;

- (void) setName:(NSString *) name;

- (NSString *) name;



@end
