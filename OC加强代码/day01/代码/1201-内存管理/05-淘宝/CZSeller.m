//
//  CZSeller.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZSeller.h"

@implementation CZSeller


//- (void) setName:(NSString *)name
//{
//    if (_name != name) {
//        [_name release];
//        _name = [name retain];
//    }
//}


-(void)dealloc
{
//  释放自己的资源
    NSLog(@"%s",__func__);
    self.name = nil;
    self.shop = nil;
    
    [super dealloc];
}
@end
