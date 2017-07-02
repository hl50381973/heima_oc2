//
//  CZManager.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZAnimal.h"
#import "CZCat.h"
#import "CZDog.h"


@interface CZManager : NSObject
//喂动物
-(void) feedAnimal:(CZAnimal *) animal;

//如果没有多态
//-(void) feedDog:(CZDog *) dog;
//
//-(void) feedCat:(CZCat *) cat;

@end
