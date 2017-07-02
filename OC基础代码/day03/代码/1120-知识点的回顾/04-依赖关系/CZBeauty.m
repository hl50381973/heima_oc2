//
//  CZBeauty.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZBeauty.h"

@implementation CZBeauty


- (void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}


/**
 *  给土豪打电话、
    对象作为形式参数
 */
- (void) callTuHaoWithPhone:(CZPhone *) phone
{
    NSLog(@"给土豪打电话了");
    [phone call:@"土豪的电话号码"];
}

- (void) sendMessageToDiaoSi
{
    NSLog(@"给屌丝发送短信了");
//  对象作为另外一个类的局部变量
    CZPhone *phone = [CZPhone new];
    
    [phone sendMessage:@"呵呵，要请我看电影吗？"];
}

@end
