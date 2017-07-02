//
//  CZPerson.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"
#import "CZBook.h"

@implementation CZPerson

//写方法 setter
- (void) setAge:(int) age
{
    _age = age;
}
//读方法 getter
- (int) age
{
    return _age;
}

- (void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

- (void) readBook:(CZBook *) book
{
    
}
@end
