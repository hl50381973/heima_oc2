//
//  CZNurse.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZNurse.h"
#import "CZBaby.h"
@implementation CZNurse

//喂婴儿
- (void) feedBabay:(CZBaby *) baby
{
    baby.food += 15;
    NSLog(@"%s,food = %d",__func__,baby.food);
}
@end
