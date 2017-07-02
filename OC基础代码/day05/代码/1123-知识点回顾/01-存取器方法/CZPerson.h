//
//  CZPerson.h
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZPerson : NSObject
{
@public
    int _age;//年龄
    NSString * _name;
}
/*
 @property 它是一个编译器指令
 
 当我们在类的声明中使用 @property，它会自动生成标准的setter和getter方法的声明
 后面的这个名字是在使用.语法的时候,.右边的名字
 */
@property int age;


//- (void) setAge:(int) age;
//
//- (int) age;


@end
