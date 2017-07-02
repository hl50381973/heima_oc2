//
//  main.m
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 分类(类别)作用：扩展已有类的功能
 1、分类是原来的类增加方法
 2、在方法内部可以访问原有类的成员变量(定义头文件中)
 
 步骤
 1、为原有类创建一个分类
 2、在分类中增加新的方法的声明和实现
 
 注意点：
    1、分类中不能扩展原有类的成员变量
    2、@property在分类中只能生成getter setter方法的声明，不能生成实现和成员变量
 
// 分类可以扩充系统自带的类的功能
    给NSObject增加分类会影响到所有的类，但是这个东西一定要谨慎小心
    3、你不能在分类中定义与原有类同名方法，不同的分类之间也不可以有同名的方法
*************************************
    4、如果你再分类中增加一个原有类同名方法 ，那么分类中个方法会覆盖原有类的方法（哪怕你没有导入这个分类）
    5、多个分类中如果有相同方法，最后编译分类的方法
 */

#import "CZPerson+Drink.h"
#import "NSObject+Run.h"

void test()
{
    CZPerson *person  = [[CZPerson alloc] init];
    person.name = @"大木";
    [person eat];
    
    //        person.height = 10.0;
    
    
    [person  drink];
    //
    [person run];
    //
    //        [@"" run];
    
}

/*
   计算字符串中有多个数字 0~9

 
 */

void test2()
{
    NSString * str = @"itcast 123456 it 6789";
    
    int counter = 0;
    for (int i = 0; i < str.length; i++) {
        
        unichar c = [str characterAtIndex:i];
        if (c >= '0' && c <= '9') {
            counter++;
        }
    }
    NSLog(@"%d",counter);
}

#import "NSString+Ext.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSString * str = @"itcast 123456 it 23456789";
        
//        int counter = [NSString countOfNumberInString:str];
        
        int counter = [str countOfNumber];
        [str countOfNumber];
        
        
        
        
        NSLog(@"%d",counter);
        
    }
    return 0;
}
