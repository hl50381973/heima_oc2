//
//  CZTeacher.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZTeacher.h"
#import "CZBaby.h"

@implementation CZTeacher

- (void) feedBabay:(CZBaby *) baby
{
    
    baby.food += 20;
    NSLog(@"%s,food = %d",__func__,baby.food);
}

@end
