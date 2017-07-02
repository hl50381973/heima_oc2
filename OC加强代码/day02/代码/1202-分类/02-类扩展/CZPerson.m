//
//  CZPerson.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"
/*
  1、小括号中不可以有任何内容
  2、一般写在.m文件中，增加类的私有成员变量、属性、方法

 */

@interface CZPerson ()
{
//   增加私有成员变量
    int _age;
}
// 增加私有属性
@property (nonatomic,copy) NSString *name;

//增加私有方法
- (void) show;

@end


@implementation CZPerson


- (NSString *)description
{
    [self show];
    return [NSString stringWithFormat:@"age = %d,name = %@",_age,_name];
}


- (void) show
{
    NSLog(@"%d,%@",_age,self.name);
    
}

@end
