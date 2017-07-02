//
//  main.m
//  01-对象在内存存储细节
//
//  Created by Apple on 14/11/17.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//定义Person类型
@interface Person : NSObject
{
    int _age;
    
}

- (void) say;

@end



@implementation Person

- (void) say
{
    NSLog(@"快放学了，好搞笑哦");
}


@end



int main(int argc, const char * argv[]) {
  
    Person *p = [Person new];
    
    [p say];
    
    return 0;
}
