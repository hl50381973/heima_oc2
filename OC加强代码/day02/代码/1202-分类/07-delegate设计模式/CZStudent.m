//
//  CZStudent.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZStudent.h"
#import "CZBaby.h"
@implementation CZStudent

//喂婴儿
- (void) feedBabay:(CZBaby *) baby
{
    baby.food += 30;
    NSLog(@"%s,food = %d",__func__,baby.food);
}

@end
