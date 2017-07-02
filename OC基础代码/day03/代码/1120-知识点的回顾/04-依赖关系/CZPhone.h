//
//  CZPhone.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZPhone : NSObject

/**
 *  发短信
 *
 *  @param message 信息内容
 */
- (void) sendMessage:(NSString *) message;
/**
 *  打电话
 */
- (void) call:(NSString *) phoneNum;

@end
