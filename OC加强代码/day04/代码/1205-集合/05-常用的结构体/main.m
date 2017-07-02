//
//  main.m
//  05-常用的结构体
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
       
//      1、NSRange 区间
        
        NSRange range;
//        range.location  表示开始的位置
//        range.length 表示长度
//      2、NSPoint/CGPoint 位置
//        NSPoint
        CGPoint point;
//        point.x x坐标
//        point.y y坐标
        point = CGPointMake(10, 10);
        
        NSLog(@"%@",NSStringFromPoint(point));
        
        
//      3、NSSize/CGSize 尺寸/大小
        CGSize size;
//        size.width  宽度
//        size.height  高度
        size = CGSizeMake(20, 30);
        NSLog(@"%@",NSStringFromSize(size));
        
//      4、NSRect/CGRect 位置和大小
        CGRect rect;
//        rect.origin  位置
//        rect.size    大小
        rect  = CGRectMake(10, 10, 20, 30);
        NSLog(@"%@",NSStringFromRect(rect));
    }
    return 0;
}
