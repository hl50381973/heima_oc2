//
//  main.m
//  test2-继承
//
//  Created by CZ on 14-11-14.
//  Copyright (c) 2014年 CZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Shape.h"
#import "Rectangle.h"
#import "Square.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //长方形
        Rectangle *rectangle = [[Rectangle alloc]init];
        rectangle.width = 2;
        rectangle.height = 3;
        
        //长方形面积
        float area = [rectangle area];
        float girth = [rectangle girth];
        
        NSLog(@"长方形面积:%f", area);
        NSLog(@"长方形周长:%f", girth);
        
        
        Square *square = [[Square alloc]init];
        //边长
        square.width = 5;
        //正方形的面积
        float squareArea = [square area];
        float squareGirth = [square girth];
        
        NSLog(@"正方形面积:%f", squareArea);
        NSLog(@"正方形周长:%f", squareGirth);
        
        
    }
    return 0;
}

