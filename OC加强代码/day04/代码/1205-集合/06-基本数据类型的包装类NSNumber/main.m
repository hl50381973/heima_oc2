//
//  main.m
//  06-基本数据类型的包装类NSNumber
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
   OC中集合类中只能存储OC对象不能存储基本数据类型
  
   存储基本数据类型
   基本数据类型 -》包装类型(NSNumber) ->存入集合类
 
   从集合中取出包装类型 -》包装类型(NSNumber) -》基本数据类型

 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
//      基本数据类型转包装类型
        NSNumber *number = [NSNumber numberWithInt:19];
        number = [NSNumber numberWithFloat:10.1f];
        number = [NSNumber numberWithDouble:10.10];
        number = [NSNumber numberWithBool:YES];
//      包装类型转基本数据类型
       int i =  number.intValue;
        number.floatValue;
        number.doubleValue;
        number.boolValue;
//      快速创建NSNumber对象
        number = @1;
        number = @1.1;
        number = @1.2f;
        
        
        
    }
    return 0;
}
