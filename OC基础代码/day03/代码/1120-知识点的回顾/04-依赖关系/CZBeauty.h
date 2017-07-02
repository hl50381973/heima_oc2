//
//  CZBeauty.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPhone.h"

@interface CZBeauty : NSObject
{
    NSString * _name;//姓名
}

- (void) setName:(NSString *) name;

- (NSString *) name;
/**
 *  给土豪打电话
 */
- (void) callTuHaoWithPhone:(CZPhone *) phone;


- (void) sendMessageToDiaoSi;

@end
