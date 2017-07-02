//
//  main.m
//  09-NSFileManager文件管理器
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  NSFileManager  单例对象
 
 
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        //     获取NSFileManager单例对象
       NSFileManager *fm = [NSFileManager defaultManager];
//     创建目录/Users/apple/Desktop/hhh
       NSString *path = @"/Users/apple/Desktop/dir/test";
//     withIntermediateDirectories 中间目录要不要创建
        NSError *error = nil;
//     这个方法只能创建文件目录(文件夹)
       BOOL isSuccess =  [fm createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:&error];
        if (isSuccess) {
            NSLog(@"创建成功！");
        }else{
            NSLog(@"%@",error);
        }
        
        path = @"/Users/apple/Desktop/dir/test/abc.txt";
//     创建文件
        NSString *str = @"今天OC最后一天！";
//      NSData OC中用于保存二进制数据的，对应图片、视频这些类型的文件只能使用NSData来保存
         NSData *data  =  [str dataUsingEncoding:NSUTF8StringEncoding];
        isSuccess = [fm createFileAtPath:path contents:data attributes:nil];
        if (isSuccess) {
            NSLog(@"文件创建成功！");
        }
    }
    return 0;
}


void test()
{
    //     获取NSFileManager单例对象
    NSFileManager *fm = [NSFileManager defaultManager];
    
    NSString *path = @"/Users/apple/Desktop/OC总结.m";
    //     即可判断文件也可以是文件夹
    BOOL isExists  = [fm fileExistsAtPath:path];
    if(isExists){
        NSLog(@"存在");
    }
    
    BOOL isDir = NO;//是否为文件夹
    isExists  = [fm fileExistsAtPath:path isDirectory:&isDir];
    //      只有存在isDir才有意义
    if(isExists){
        NSLog(@"存在 ,%d",isDir);
    }else{
        NSLog(@"不存在 ,%d",isDir);
    }
    //      判断文件权限
    //      判断文件是否可读
    BOOL isReadable = [fm isReadableFileAtPath:path];
    NSLog(@"%d",isReadable);
    //     判断文件是否可写
    BOOL isWritable = [fm isWritableFileAtPath:path];
    NSLog(@"%d",isWritable);
    NSError *error = nil;
    //     获取文件或目录的属性
    NSDictionary *attr = [fm attributesOfItemAtPath:path error:&error];
    if (!error) {
        NSLog(@"%@",attr);
    }
    //      获取文件或文件夹的大小
    NSNumber *size = attr[@"NSFileSize"];
    size = attr[NSFileSize];
    NSLog(@"szie = %@",size);
    NSDate *date  = attr[NSFileModificationDate];
    NSLog(@"%@",date);
    
    //      拷贝文件 复制文件(可以是文件也可是文件夹)
    NSString *dest = @"/Users/apple/Desktop/test.m";
    
    BOOL isSuccess = [fm copyItemAtPath:path toPath:dest error:&error];
    if (isSuccess) {
        NSLog(@"拷贝成功！");
    }
    NSString *moveTo = @"/Users/apple/Desktop/testMove/test.m";
    //     移动文件/剪切
    isSuccess =  [fm moveItemAtPath:path toPath:moveTo error:&error];
    if (isSuccess) {
        NSLog(@"移动成功！");
    }
}

