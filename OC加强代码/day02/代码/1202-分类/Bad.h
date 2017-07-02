//
//  Bad.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 @protocol 开头
 @end 结尾
 
 @required 表示遵守这个协议的类必须实现方法(默认)
 @optional 表示可选的,遵守这个协议的类可以不实现的方法
 */
@protocol Bad <NSObject> //基协议

@required
/**抢劫*/
- (void) rob;

//- (void) fire;

@optional

- (void) kill;


@end
