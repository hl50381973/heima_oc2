//
//  main.m
//  13-复制与引用计数
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
   不可变对象进行copy操作的时候，它的引用计数器+1(NSString除外)
   不可变对象进行mutableCopy操作的时候，它会产一个新对象，新对象的引用计数是1，原来的引用计数不变
 
   可变对象进行copy 或 mutableCopy都会产生一个全新的对象，原的对象引用计数不变，新对象引用计数为1
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
      
//        NSString *str = [NSString stringWithFormat:@"abc"];
//        NSLog(@"%zd",[str retainCount]);
        
        NSArray *array = [[NSArray alloc] initWithObjects:@1,@2,nil];
        NSLog(@"%zd",[array retainCount]);
//        [array copy];
//        NSLog(@"%zd",[array retainCount]);
        
        NSMutableArray *arrayM  = [array mutableCopy];
//        NSLog(@"%zd",[array retainCount]);
//        NSLog(@"%zd",[arrayM retainCount]);
        
//        NSArray *array3 = [arrayM copy];
        NSArray *array3 = [arrayM mutableCopy];
        NSLog(@"%zd",[arrayM retainCount]);
        NSLog(@"%zd",[array3 retainCount]);
    }
    return 0;
}
