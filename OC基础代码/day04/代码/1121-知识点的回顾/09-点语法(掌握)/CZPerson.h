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
    int _age;//年龄
    NSString * _name;//姓名
}

- (void) setAge:(int) age;

- (int) age;

- (void) setName:(NSString *) name;

- (NSString *) name;


@end
