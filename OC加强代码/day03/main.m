//
//  main.m
//  02-可变字符串
//
//  Created by Apple on 14/12/4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 NSMutableString 可变字符，它是NSString子类
 增改删的操作
 
 */

/*
   把 20 itcast 拼接起来使用空格隔开
 
 */

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSString *str = @"";
//       使用循环进行拼接
        for(int i =0 ;i < 20 ; i++){
           str = [str stringByAppendingString:@" itcast"];
        }
        str = [str substringFromIndex:1];
        NSLog(@"%@",str);
        
    }
    return 0;
}
