//
//  main.m
//  10-NSData
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 概念： IOS中二进制文件使用NSData保存
 音频、视频文件必须使用NSData来保存
 
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
//      读取文件
        NSMutableData *dataM = [NSMutableData data];
        NSData *d1 = [@"today is " dataUsingEncoding:NSUTF8StringEncoding];
        NSData *d2 = [@"a good day " dataUsingEncoding:NSUTF8StringEncoding];
//      添加数据
        [dataM appendData:d1];
        [dataM appendData:d2];
//      把NSData转换为NSString
        NSString *string  =  [[NSString alloc] initWithData:dataM encoding:NSUTF8StringEncoding];
        NSLog(@"%@",string);
    }
    return 0;
}

void testNSData()
{
    //      读取文件
    NSData *data = [NSData dataWithContentsOfFile:@"/Users/apple/Desktop/Snip20141111_21.png"];
    NSLog(@"%zd",data.length);
    //      数据写入文件
    BOOL isSuccess = [data writeToFile:@"/Users/apple/Desktop/dir/test.png" atomically:YES];
    if (isSuccess) {
        NSLog(@"写入成功！");
    }
}
