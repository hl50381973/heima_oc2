//
//  main.m
//  04-@property的使用
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"

int main(int argc, const char * argv[]) {
   
    CZPerson *p = [[CZPerson alloc] init];
    
    [p setMyMan:YES];
    
    BOOL isMan =  p.isMan;
    
    
    return 0;
}

void test()
{
    CZPerson *p = [[CZPerson alloc] init];
    
    CZRoom *r = [[CZRoom alloc] init];
    
    p.room = r;
    
    [r release];
    
    p.room = r;
    
    CZRoom * r2 = [[CZRoom alloc] init];
    
    p.room = r2;
    
    [r2 release];
    r2 = nil;
    
    [p release];
    p = nil;
}