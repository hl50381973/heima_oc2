//
//  main.m
//  1204-字符串
//
//  Created by Apple on 14/12/4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 
 概念：NSString是不可变字符串，所有它所有产生其他字符串方法都是生成一个新的字符串，而不会改变原来字符串
 
 
 */

#import "NSString+CZ.h"
//字符串与URL
//URL: 概念:Uniform Resource Locator 统一资源定位符
//URL:格式 协议头://主机名称/资源路径
//http://www.itcast.cn:8080/images/beauty.png
//404 没找到
//file:///Users/apple/Desktop/test.txt
//由于file就是在本机上查找，所有没有主机名称
//ftp://

int main(int argc, const char * argv[]) {

        NSString *str = @"今天好冷啊！要多穿衣服！®";
    ////    把UTF8编码的字符串，编码成为URL中可用的字符串
//      NSString *str3 =  [str stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
////    把URL中可用的字符串，编码成为UTF8编码的字符串
//      str3 =[str stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
//      NSLog(@"%@",str3);
    
    NSString *path = @"file:///Users/apple/Desktop/测试.txt";
    path = [path stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    
    
//    NSURL *url = [NSURL URLWithString:@"file:///Users/apple/Desktop/test.txt"];
     NSURL  *url = [NSURL URLWithString:path];
      NSError *error = nil;
     [str writeToURL:url atomically:YES encoding:NSUTF8StringEncoding error:&error];
    
     if (error) {
        NSLog(@"%@",error);
     }else{
        NSLog(@"写入成功!");
     }
     NSString *content =  [NSString stringWithContentsOfURL:url encoding:NSUTF8StringEncoding error:&error];
    
    NSLog(@"%@",content);
    
    return 0;
}
//字符串与文件
void testStringAndfile()
{
    //  把字符串写入文件
    NSString *str = @"今天好冷啊！";
    NSString *path = @"/Users/apple/Desktop/test.txt";
    
    NSError *error = nil;
    BOOL isSuccess = [str writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:(&error)];
    
    //    if (isSuccess) {
    //        NSLog(@"写入成功！");
    //    }else{
    //        NSLog(@"%@",error.userInfo);
    //    }
    
    //    if (error) {
    //         NSLog(@"%@",error.userInfo);
    //    }else{
    //        NSLog(@"写入成功！");
    //    }
    //    读取文件
    NSString *string  = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:&error];
    if (error) {
        NSLog(@"%@",error);
    }else{
        NSLog(@"%@",string);
    }
}


void testStringPath()
{
    //  在原来的路径上拼接一个路径
    
    NSString *path = @"/Users/apple/test.txt";
    
    //    path = [path stringByAppendingPathComponent:@"Desktop"];
    //  获取扩展名(拓展名)
    //    path  = [path  pathExtension];
    path = [path stringByDeletingPathExtension];
    path = [path stringByAppendingPathExtension:@"png"];
    NSLog(@"%@",path);
}


void testRepeace()
{
    NSString *str = @" \nwww - itcast - cn ";
    //  在原有字符串的末尾拼接另一个字符产生一个新的字符串
    //  itcast
    NSString *str1 = [str stringByAppendingString:@"itcast"];
    NSLog(@"%@",str1);
    //  字符替换
    str1 = [str stringByReplacingOccurrencesOfString:@"-" withString:@"."];
    NSLog(@"%@",str1);
    //  去掉字符串中空格
    str1 = [str stringByReplacingOccurrencesOfString:@" " withString:@""];
    NSLog(@"%@",str1);
    //  使用某个字符串替换掉原来字符串中某个区间的字符串
    NSRange range = [str rangeOfString:@"itcast"];
    str1  = [str stringByReplacingCharactersInRange:range withString:@"传智播客"];
    NSLog(@"%@",str1);
    
    //  删除原字符串中的所有指定的字符
    str1 =  [str stringByReplacingOccurrencesOfString:@"itcast" withString:@""];
    NSLog(@"%@",str1);
    //  【掌握】去掉两头的空格
    
    str1 = [str stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    NSLog(@"%@",str1);
    
}


void testConvert()
{
    //  1、转大写
    NSString *str = @"today is cool";
    //  大写
    NSString *str2  = [str uppercaseString];
    //  小写
    str2 = [str2 lowercaseString];
    //  单词首字母大写
    str2 = [str capitalizedString];
    NSLog(@"%@",str);
    NSLog(@"%@",str2);
    //  基本数据类型转字符串
    NSString *intStr = [NSString stringWithFormat:@"%i",10];
    NSLog(@"%@",intStr);
    //  字符转基本数据类型
    int i = intStr.intValue;
    double d = intStr.doubleValue;
    float f = intStr.floatValue;
    NSLog(@"%d,%lf",i,d);
    
    //  把C语言字符串转换为OC字符串
    NSString *str8 = [NSString stringWithCString:"hehe" encoding:NSUTF8StringEncoding];
    NSLog(@"%@",str8);
    
    // 把OC语言字符串转换为C字符串
    const char *cStr = [str8 cStringUsingEncoding:NSUTF8StringEncoding];
    NSLog(@"%s",cStr);
}

void testCompare()
{
    //  字符串的比较
    NSString *str1 = @"abc";
    NSString *str2 = @"Abc";
    //  比较是内容,从前往后一个一个的比较
    NSComparisonResult result = [str1 compare:str2];
    /*
     NSOrderedAscending = -1L, str1 < str2
     NSOrderedSame,            str1 == str2
     NSOrderedDescending       str1 > str2
     
     */
    //    if(result == NSOrderedSame){
    //        NSLog(@"str1 == str2");
    //    }else if(result == NSOrderedAscending){
    //        NSLog(@"str1 < str2");
    //    }else if(result == NSOrderedDescending){
    //        NSLog(@"str1 > str2");
    //    }
    
    result = [str1 compare:str2 options:NSCaseInsensitiveSearch];
    /*
     NSCaseInsensitiveSearch 忽略大小写
     NSNumericSearch 用于数值类型的比较
     */
    if(result == NSOrderedSame){
        NSLog(@"str1 == str2");
    }else if(result == NSOrderedAscending){
        NSLog(@"str1 < str2");
    }else if(result == NSOrderedDescending){
        NSLog(@"str1 > str2");
    }
    
    str1 = @"0123";
    str2 = @"123";
    result = [str1 compare:str2 options:NSNumericSearch];
    
    if(result == NSOrderedSame){
        NSLog(@"str1 == str2");
    }else if(result == NSOrderedAscending){
        NSLog(@"str1 < str2");
    }else if(result == NSOrderedDescending){
        NSLog(@"str1 > str2");
    }
    
    
}

void testHas()
{
    //字符串以什么开头
    NSString *string = @"http://www.itcast.cn/images/beauty.png";
    //  判断协议是不http
    //                         前缀
    BOOL isHttp = [string hasPrefix:@"http://"];
    if (isHttp) {
        NSLog(@"是一个HTTP 协议");
    }
    // 判断资源是不是一个png的图片 mp4 mp3 jpeg txt doc xls pages
    //                     后缀
    BOOL isPng= [string hasSuffix:@".png"];
    if (isPng) {
        NSLog(@"是一个png类型的图片");
    }
}


void testIsEqual()
{
    NSString *str1 = @"";
    //    NSString *str2 = @"acc";
    
    //  比较字符的地址
    //    if (str1 == str2) {
    //        NSLog(@"相等");
    //    }
    NSString *str3 = [NSString stringWithFormat:@"a"];
    //  比较内容
    if ([str1 isEqualToString:str3]) {
        NSLog(@"相等");
    }
    if ([str1 isEqual:str3]) {
        NSLog(@"相等");
    }
    //
    if ([str1 myIsEqual:str3]) {
        NSLog(@"相等");
    }
    
}


void testCharacterAtIndex()
{
    NSString *str = @"www.itcast.cn";
    
    unichar c = [str characterAtIndex:4];
    NSLog(@"%c",c);
}


/*
 
 练习
 用3种方法将下面字符串中的中文截取出来
 <itcast>传智播客</itcast>
 
 */
void testSubString2()
{
    // 1、第一种方式 XML
    NSString *str = @"<itcast>传智播客</itcast>";
    NSRange range = {8,4};
    NSString *str2  = [str substringWithRange:range];
    NSLog(@"%@",str2);
    // 2、找“>”位置
    NSRange range1 = [str rangeOfString:@">"];
    NSLog(@"%@",NSStringFromRange(range1));
    //  <itcast>传智播客</itcast> -》 传智播客</itcast>
    NSString *str3 = [str substringFromIndex:range1.location+1];
    NSRange range2 = [str3 rangeOfString:@"<"];
    //  传智播客</itcast> ->   传智播客
    NSString *str4 = [str3 substringToIndex:range2.location];
    NSLog(@"%@",str4);
    // 3、第三种方式 <itcast>传智播客</itcast> -》 <itcast>传智播客
    NSRange range5 = [str rangeOfString:@"</"];
    NSLog(@"%@",NSStringFromRange(range5));
    //  <itcast>传智播客</itcast> -》  <itcast>传智播客
    NSString *str5 = [str substringToIndex:range5.location];
    //  <itcast>传智播客  ->   传智播客
    NSRange range6 = [str5 rangeOfString:@">"];
    
    NSString *str8 = [str5 substringFromIndex:range6.location+1];
    NSLog(@"%@",str8);
}


void testSubString()
{
    //  字符串的获取
    //  1、获取字符长度
    NSString *str = @"www.itcast.cn";
    long length = str.length;
    NSLog(@"%zd",length);
    //  2、获取子串
    //   从哪个索引开始截取到字符串的末尾(包含索引上字符)
    NSString *str2 = [str substringFromIndex:4];
    NSLog(@"%@",str2);
    //   从字符开头开始截取到索引的位置(不包含索引上的字符)
    NSString *str3  = [str substringToIndex:3];
    NSLog(@"%@",str3);
    
    /*
     typedef struct _NSRange {
     NSUInteger location;//起始位置
     NSUInteger length;//表示长度
     } NSRange;a
     
     */
    //  从哪个位置开始截取，截取多长
    NSRange range = {4,6};
    NSString *str4 = [str substringWithRange:range];
    NSLog(@"%@",str4);
    
    // 获取某个子串所在的区间
    NSRange range1 =  [str rangeOfString:@"itcast"];
    NSLog(@"%@",NSStringFromRange(range));
    
    NSRange range2 =  [str rangeOfString:@"icast"];
    if (range2.location == NSNotFound) {
        NSLog(@"没有这个子串");
    }
    
    if (range2.length == 0) {
        NSLog(@"没有这个子串");
    }
    
    NSLog(@"%@",NSStringFromRange(range2));
    
}


void testCreateString()
{
    
    //  第一种：字面量,它是常量字符串，存储常量区
    
    NSString *str = @"abc";
    NSString *str2 = @"abc";
    NSLog(@"%p",str);
    NSLog(@"%p",str2);
    //  第二种是通过 快捷的构造方法
    NSString *string = [NSString stringWithFormat:@"string = %@,int = %d",@"hello",10];
    NSLog(@"%p",string);
    
    //  第三种方式 初始化方法
    NSString * str3 = [[NSString alloc] initWithFormat:@"%@",@"abc"];
    NSLog(@"%p",str3);
}