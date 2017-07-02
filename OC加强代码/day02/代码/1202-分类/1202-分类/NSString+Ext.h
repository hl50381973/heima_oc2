//
//  NSString+Ext.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Ext)

/**
 *  计算字符串中有多少个数字
 */
+ (int) countOfNumberInString:(NSString *) str;
/**
 *  计算字符串中有多少个数字
 */
- (int) countOfNumber;


@end
