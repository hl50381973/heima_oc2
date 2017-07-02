//
//  CZStudent.h
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@interface CZStudent : CZPerson

@property NSString * no;//学号

//声明自己初始化方法
-(id) initWithAge:(int)age andName:(NSString *)name andNo:(NSString *) no;

@end
