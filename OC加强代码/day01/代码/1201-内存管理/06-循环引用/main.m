//
//  main.m
//  06-循环引用
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
     
       CZPerson *person = [[CZPerson alloc] init];
       person.name = @"小花花";
       
        CZDog * dog = [[CZDog alloc] init];
        
        person.dog = dog;
        
        dog.person = person;
        
        [person release];
        [dog release];
        
    }
    return 0;
}
