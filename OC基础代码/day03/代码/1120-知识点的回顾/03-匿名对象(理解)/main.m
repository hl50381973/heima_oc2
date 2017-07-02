//
//  main.m
//  03-匿名对象(理解)
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
    匿名对象：就是没有名字对象
    1、匿名对象仅用一次
    使用场景：
    1、当我们只要调用一个对象的某个方法一次的时候可以使用匿名对象
    2、匿名对象可以作为函数的实际参数
 */

#import "CZPerson.h"
#import "CZBook.h"
int main(int argc, const char * argv[]) {

    [[CZPerson new] setAge:10];
    
    /*
      1、首先创建一个匿名人对象
      2、调用刚创建出来的人对象的 readBook方法
      3、传入一个匿名的CZBook对象
       [CZPerson new] 创建一个匿名的人对象
       [CZBook new] 创建一个匿名的Book对象
     */
    
    [[CZPerson new] readBook:[CZBook new]];
  
    
    NSLog(@"%d",[[CZPerson new] age]);
    
    
    return 0;
}
