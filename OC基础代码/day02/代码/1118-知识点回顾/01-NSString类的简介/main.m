//
//  main.m
//  01-NSString类的简介
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>


#import <string.h>

int main(int argc, const char * argv[]) {
   
//  NSString 对象的创建
    
// 1、通过字面量创建
    NSString *str  =  @"天气冷了，注意身体！";
    NSLog(@"%@",str);
// 2、通过对象方法
//    NSString *str1  = [NSString new];
    NSString *str1 = [NSString alloc];
//    str1 = [str1 init];
     str1 = [str1 initWithUTF8String:"大家要努力学习啊！"];
    NSLog(@"%@",str1);

// 3、通过类方法创建对象
//    类方法它是隶属于类的，它是通过“类名”调用
//    此处的格式化字符串与NSLog中的格式化字符串是一样的
    NSString *str2 = [NSString stringWithFormat:@"今天股票有跌%d个点！", 10];
    NSLog(@"%@",str2);
    
    
// 4、NSString 对象中表示长度函数
//   command + 鼠标左键点击进去
//  length 计算的是字符串中有几个字符
    long len  = [str length];
    NSLog(@"%ld",len);
    
    char *strc = "天气冷了，注意身体！";
//  strlen计算字符串所占用的字节数，在UTF8编码中一个中文占用3个字节
    len  =  strlen(strc);
    NSLog(@"%ld",len);
    
    
    len = [@"abc你好" length];
    NSLog(@"%ld",len);
    
    
    
    
    return 0;
}
