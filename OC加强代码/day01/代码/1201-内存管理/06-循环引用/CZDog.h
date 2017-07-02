//
//  CZDog.h
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CZPerson;

@interface CZDog : NSObject

//@property (nonatomic,retain) CZPerson *person;
//当有循环引用的时候，其中一方必须是assign
@property (nonatomic,assign) CZPerson *person;

@end
