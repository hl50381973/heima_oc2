//
//  CZSeller.h
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZShop.h"
@interface CZSeller : NSObject

//姓名
@property (nonatomic,copy) NSString *name;
//商店
@property (nonatomic,retain) CZShop * shop;

@end
