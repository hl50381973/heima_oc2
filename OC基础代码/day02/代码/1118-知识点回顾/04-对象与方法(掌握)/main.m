//
//  main.m
//  04-对象与方法(掌握)
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
  定义狗类
  类名 CZDog
  属性 _name
  行为 biteOtherDog
 
 */
@interface CZDog : NSObject
{
@public
    NSString *_name;
}

- (void) biteOtherDog:(CZDog *) other;


@end


@implementation CZDog

- (void) biteOtherDog:(CZDog *) other
{
    NSLog(@"%@ 咬了 %@ 一口",_name,other->_name);
}

@end
/*
   Person类
   changeDog
   orderDog: biteOtherDog:
 
 */
@interface CZPerson : NSObject

//用于改变狗名字
- (void) changeDog:(CZDog *) dog;
/**
 *  指使一个狗去咬另外一个狗
 *
 *  @param dog   去咬的那个狗
 *  @param other 被咬那只狗
 */
- (void) orderDog:(CZDog *) dog biteOtherDog:(CZDog *) other;


@end


@implementation CZPerson

//对象作为方法参数
- (CZDog *) sellDog
{
    return [CZDog new];
}


//用于改变狗名字
- (void) changeDog:(CZDog *) dog
{
    dog->_name = @"大黄";
}
/**
 *  指使一个狗去咬另外一个狗
 *
 *  @param dog   去咬的那个狗
 *  @param other 被咬那只狗
 
 */
- (void) orderDog:(CZDog *) dog biteOtherDog:(CZDog *) other
{
//   让去这只狗去咬另外一只狗
    [dog biteOtherDog:other];
}

@end

/*
   1、对象做方法参数传递是地址传递
   2、对象可以在方法中进行连续的传递
   3、对象可以作为方法的返回值
*/

int main(int argc, const char * argv[]) {
  
    
    CZDog *dog = [CZDog new];
    dog->_name = @"旺财";
    
    
    CZDog *other = [CZDog new];
    other->_name = @"小黑";
    
    CZPerson *person = [CZPerson new];
//
    [person changeDog:dog];
    
    NSLog(@"%@",dog->_name);
//  对象作为方法参数的连续传递
    [person orderDog:dog biteOtherDog:other];
    
    CZDog *newDog  =  [person sellDog];
    
    newDog->_name = @"小狗！";
    
    NSLog(@"%@",newDog->_name);
    
    return 0;
}
