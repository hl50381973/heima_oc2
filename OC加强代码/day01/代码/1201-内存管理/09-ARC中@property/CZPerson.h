//
//  CZPerson.h
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"
/*
 内存管理
    strong   对于普通对象
    copy     字符串
   assign    基本数据类型
   weak      循环引用一端必须使用weak
 
 
 */

@interface CZPerson : NSObject


//年龄
@property (nonatomic,assign) int age;
//姓名
@property (nonatomic,copy) NSString * name;
//狗
@property (nonatomic,strong) CZDog * dog;


@end
