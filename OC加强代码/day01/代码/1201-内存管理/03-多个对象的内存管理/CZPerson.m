//
//  CZPerson.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson

/**
1、当你需要一个对象时候，要对这个对象进行一次retain
2、当你不在需要一个对象的时候，那么就对象这个对象进行一次release
3、当你接受一个新的对象的时候，需要release旧对象，retain新对象
4、如果新对象与旧对象是一个对象，就不要内存管理的代码了
 
 */

- (void) setRoom:(CZRoom *) room
{
//  成员对象一创建的时候就被初始化为nil
//  此处要加一个判断
//  如果他们两不相同，才需要内存管理的代码
    if(_room != room){
        [_room release];
        //    [room retain];
        //    _room =room;
        _room =  [room retain];
    }
//    [_room release];
//    //    [room retain];
//    //    _room =room;
//    _room =  [room retain];
}


-(void) dealloc
{
//  释放你所占用的资源
    
//    [_room release];
//    _room =nil;
    
    self.room = nil;
    
    NSLog(@"CZPerson dealloc");
    [super dealloc];
}

@end
