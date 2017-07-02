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
 
 一个字符串需要经常修改其中的内容，那么就使用NSMutableString
 
 */

/*
   把 20 itcast 拼接起来使用空格隔开
 
 */
//不要使用这种方式，效率低
void test()
{
    //      只是空的指针
    NSString *str = @"";
    //       使用循环进行拼接
    for(int i =0 ;i < 20 ; i++){
        str = [str stringByAppendingString:@" itcast"];
    }
    str = [str substringFromIndex:1];
    NSLog(@"%@",str);
    
}

int main(int argc, const char * argv[]) {
//    NSLog(@"1");
//    test();
    @autoreleasepool {
//        NSMutableString *strM  = [NSMutableString string];
//        Capacity 表示容量，可以容纳多少字符，如果你字符串超这个存储空间它扩展它
        NSMutableString *strm  =  [NSMutableString stringWithCapacity:140];
        for(int i = 0;i < 20; i++){
            [strm appendString:@" itcast"];
        }
        NSRange range = {0,1};
        [strm deleteCharactersInRange:range];
        NSLog(@"%@",strm);
        NSRange r = [strm rangeOfString:@"itcast"];
//      替换某个区域的字符串
        [strm replaceCharactersInRange:r withString:@"www"];
        NSLog(@"%@",strm);
//
        NSRange range1 = {0,strm.length};
//      NSRange range1 = {0,strm.length+1};//此处会有一个越界的错误
//      注意使用range时候不要超过字符的长度
        [strm replaceOccurrencesOfString:@"itcast" withString:@"传智播客" options:NSLiteralSearch range:range1];
        NSLog(@"%@",strm);
        
//      在某个位置插入一个字符串
        [strm insertString:@"." atIndex:3];
        NSLog(@"%@",strm);
        
        strm.string = @"www.itcast.cn";
        NSLog(@"%@",strm);
//
        
//        NSString *str = @"abc";
//      可变字符串不能使用字面量的方式赋值，字面量定义的是一个不可以变字符串
//        NSMutableString *strMM = @"abc";
         NSMutableString *strMM = [NSMutableString string];
         strMM.string = @"abc";
//         NSString *string10  =  strMM.string;
         [strMM insertString:@"d" atIndex:1];
         NSLog(@"%@",strMM);
    }
    return 0;
}
