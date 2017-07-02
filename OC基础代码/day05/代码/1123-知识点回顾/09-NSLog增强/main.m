//
//  main.m
//  09-NSLog增强
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
int main(int argc, const char * argv[]) {
   
    
//    NSLog(@"测试 %s",__FILE__);
    
    CZPerson *person = [[CZPerson alloc] init];
    
    [person show];
    
    return 0;
}
