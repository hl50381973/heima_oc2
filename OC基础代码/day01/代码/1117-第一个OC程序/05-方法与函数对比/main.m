//
//  main.m
//  05-方法与函数对比
//
//  Created by Apple on 14/11/17.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

//方法是属于对象或类的，函数全局共享的
// 函数的调用只需要根据函数的名称就可以调用

int sum(int num1,int num2)
{
    return num1 + num2;
}

//方法是属于对象或类的，所以必须在类中声明和实现
//OC中的类的定义中可以没有类的声明，但是在开发中必须要写类的声明
//对象方法必须通过对象调用

//相同点：都是封装特定的功能代码
@interface CZCalculator : NSObject


- (int) sum:(int) num1 and:(int) num2;


@end

@implementation CZCalculator

- (int) sum:(int) num1 and:(int) num2
{
    return num1 + num2;
}

@end





int main(int argc, const char * argv[]) {
 
    int rs = sum(10, 20);
    
    CZCalculator *calculator = [CZCalculator new];
    
    int sum = [calculator sum:10 and:20];
    NSLog(@"%d",sum);
    
    
    return 0;
}
