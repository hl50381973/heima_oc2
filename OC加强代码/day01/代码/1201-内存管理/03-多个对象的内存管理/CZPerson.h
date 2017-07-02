//
//  CZPerson.h
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZRoom.h"
/*
  手动内存管理黄金法则
 
  谁调用new,alloc,retain,copy,multableCopy,谁就要调用对应的release或autorelease;
 
  口诀：有加就有减
 
  当你需要一个对象的时候，那么就给他发送一条retain的消息
  当你不需要一个对象的时候，那么就给他发送一条release的消息
*/


@interface CZPerson : NSObject
{
    CZRoom *_room;
}

//setter声明
- (void) setRoom:(CZRoom *) room;



@end
