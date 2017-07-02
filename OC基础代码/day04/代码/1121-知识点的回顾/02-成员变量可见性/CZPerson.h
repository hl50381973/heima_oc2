//
//  CZPerson.h
//  1121-知识点的回顾
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
   @private:私有的，只有本类的对象方法中中可以直接访问访问它
                   成员变量在那个类中定义的才能在那个类中使用
   @protected:受保护的：只能在本类和子类中可以直接访问，不再外部访问
 
   @public：公共的，大家都可以用，在本类，子类，外部都可以访问
 
   @package: 主要用在框架内部，在框架内部相当于@protected,在框架外部相当于@private（了解）
 
   本类：定义这个成员变量的类
   控制可见性的修饰符，从使用开始直到所有成员变量结束或遇到其他的控制可见性修饰符为止
 
 */
@interface CZPerson : NSObject
{
@private
    int _age;//年龄
@protected
    NSString *_name;//姓名
@public //公共
    double _height;//高度
@package
    double _weight;//体重
    
}

- (void) setAge:(int) age;

- (int) age;

@end
