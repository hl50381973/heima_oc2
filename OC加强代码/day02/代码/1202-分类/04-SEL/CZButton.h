//
//  CZButton.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZButton : NSObject

//当点击按钮的时候要调用person上面的方法
@property (nonatomic,assign) SEL selector;


//当点击按钮的时候要调用谁上面的方法
@property (nonatomic,strong) id delegate;


- (void) click;

@end
