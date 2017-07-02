//
//  CZPerson.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CZPerson : NSObject
{
    int _age;//年龄
    NSString * _name;
}

-(void) changeAge:(int) age;


- (void) setAge:(int) age;

- (int) age;


+ (int) sumOfNum:(int) num andOther:(int) other;


+ (int) averageOfNum:(int) num andOther:(int) other;


@end
