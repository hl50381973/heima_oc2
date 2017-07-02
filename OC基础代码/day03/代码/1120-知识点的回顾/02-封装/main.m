//
//  main.m
//  02-封装
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  封装：
  1、类是数据与功能的封装，数据就是成员变量，功能就类方法或对象方法
  2、对数据的封装
     如果我们把属性设置为@public那么，这个属性外部就可以任意的修改，我们就失去管理这个属性的权利
     1、当你把属性暴露在外部的时候，那么你就是失去对它的管理，一旦这个属性被多个人用的时候，如果再像管理这个属性就变得非常麻烦，这个类的可维护性就变得很差
     
     2、怎么对数据进行封装
        1、为每一个属性提供getter 和 setter方法
        2、setter方法：又称为写方法，赋值给对象赋值
           1、必须是对象方法
           2、它没有返回值
           3、名字 set + 属性名称去掉下划线，首字母大写
           4、必须提供一个参数，参数类型必须与所对象的成员变量的类型一致
        3、getter方法：又称为读方法，赋值读取属性的值
           1、必须是对象方法
           2、必须要返回值，并且返回值类型要与成员变量类型一致
           3、方法名必须是成员变量去掉下划线
           4、一定是空参的
 */

#import "CZCat.h"
/**
 设计车类，提供getter和setter方法
 1> 车
 (1)属性
 * 轮子数
 * 速度
 
 (2)方法
 * 属性相应的setter和getter方法
 
 */

@interface CZCar : NSObject
{
    int _wheels;//车轮数‘
    double _speed;//速度
}

//_wheels setter
- (void) setWheels:(int) wheels;

- (int) wheels;

- (void) setSpeed:(double) speed;

- (double) speed;

@end

@implementation CZCar

//_wheels setter
- (void) setWheels:(int) wheels
{
    _wheels = wheels;
}

- (int) wheels
{
    return _wheels;
}

- (void) setSpeed:(double) speed
{
    _speed = speed;
}

- (double) speed
{
    return _speed;
}

@end



int main(int argc, const char * argv[]) {
  
    CZCat *cat =  [CZCat new];
    
//    cat->_age = -100;
    [cat setAge:100];
    
    [cat setName:@"小黑"];
    
    NSLog(@"age = %d,name = %@",[cat age],[cat name]);
    
    
    return 0;
}
