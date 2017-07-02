//
//  CZCat.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZCat : NSObject
{
//    @public 不可把属性公开在外部
    int _age;
    NSString * _name;
}

//但是外界还是要访问这个属性的，但我们不让直接方法，而是提供一个读方法 getter方法，写方法setter
//当我们把提供setter方法后，程序就会更好的灵活性，可以快速响应外界需求的变化
//age写方法(setter)
/*
  1、必须是对象方法
  2、它没有返回值
  3、名字 set + 属性名称去掉下划线，首字母大写
  4、必须提供一个参数，参数类型必须与所对象的成员变量的类型一致
 */
- (void) setAge:(int) age;

//age读 (getter方法)
/*
 1、必须是对象方法
 2、必须要返回值，并且返回值类型要与成员变量类型一致
 3、方法名必须是成员变量去掉下划线
 4、一定是空参的
*/

- (int) age;

//setter方法

- (void) setName:(NSString *) name;

//getter方法
- (NSString *) name;



@end
