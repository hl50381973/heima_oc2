//
//  CZPerson.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson



- (void) dealloc
{
    
//    [_room release];
//    _room = nil;
//  这一句代码等效前面两句
    self.room = nil;
    
    NSLog(@"%s",__func__);
    [super dealloc];
}

@end
