//
//  CZBaby.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZBaby.h"

@implementation CZBaby

- (void) wantToEat
{
// 如果代理真正的实现这个方法，我们才去调用它
   if ([self.delegate respondsToSelector:@selector(feedBabay:)]) {
         [self.delegate feedBabay:self];
    }
   
}

@end
