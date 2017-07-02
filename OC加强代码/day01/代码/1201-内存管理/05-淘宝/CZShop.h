//
//  CZShop.h
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZProduct.h"

@interface CZShop : NSObject

@property (nonatomic,copy) NSString *name;
//产品
@property (nonatomic,retain) CZProduct * product;


@end
