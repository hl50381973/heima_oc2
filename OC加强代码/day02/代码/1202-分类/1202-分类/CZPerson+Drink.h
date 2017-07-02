//
//  CZPerson+Drink.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@interface CZPerson (Drink)
{
//   不能为原有的类增加实例变量
//    float _height;
    
}

//只能生成getter 与 setter方法的声明，不能生成方法的实现，更不会生成成员变量
//@property (nonatomic,assign) float height;

/**
 *  给CZPerson增加一个喝的方法
 */

- (void) drink;

@end
