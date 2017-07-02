//
//  CZPerson.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
@class  CZBook;

@interface CZPerson : NSObject
{
    int _age;//年龄
    NSString *_name;//名字
}
//写方法 setter
- (void) setAge:(int) age;
//读方法 getter
- (int) age;

- (void) setName:(NSString *) name;

- (NSString *) name;

- (void) readBook:(CZBook *) book;

@end
