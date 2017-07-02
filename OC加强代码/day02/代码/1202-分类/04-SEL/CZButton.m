//
//  CZButton.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZButton.h"

@implementation CZButton


- (void) click
{
    if ([self.delegate respondsToSelector:self.selector]) {
        [self.delegate performSelector:self.selector];
    }
}

@end
