//
//  CZPhone.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPhone.h"

@implementation CZPhone

/**
 *  发短信
 *
 *  @param message 信息内容
 */
- (void) sendMessage:(NSString *) message
{
    NSLog(@"发送一条 %@ 短信",message);
}
/**
 *  打电话
 */
- (void) call:(NSString *) phoneNum
{
    NSLog(@"给电话号码为 %@ 的人打电话",phoneNum);
}


@end
