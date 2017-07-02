//
//  CZShop.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZShop.h"

@implementation CZShop


-(void)dealloc
{
    NSLog(@"%s",__func__);
    
    self.name = nil;
    self.product = nil;
    [super dealloc];
}
@end
