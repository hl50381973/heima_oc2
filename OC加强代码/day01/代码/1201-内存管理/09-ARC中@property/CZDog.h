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
//当出现循环引用的时候，必须保证一端是weak的
@property (weak,nonatomic) CZPerson *person;

@end
