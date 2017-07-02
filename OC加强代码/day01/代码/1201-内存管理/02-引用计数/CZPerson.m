//
//  CZPerson.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson


- (void) test
{
    NSLog(@"CZPerson");
}

//永远不要试图自己调用这个方法
-(void) dealloc
{
//   这里可以验证对象是否被回收了
    
    NSLog(@"CZPerson 回收");
    
//  这个方法中必须调用父类该方法，并且必须放在最后
    [super dealloc];
}

@end
