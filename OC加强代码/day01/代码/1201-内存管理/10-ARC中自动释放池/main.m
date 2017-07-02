//
//  main.m
//  10-ARC中自动释放池
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
/*
  只要是通过简洁的构造方法，或者是普通方法返回的对象都放在自动释放池中
 
*/
int main(int argc, const char * argv[]) {
    @autoreleasepool {
    
       CZPerson *person = [CZPerson person];
  
       @autoreleasepool{
        
            @autoreleasepool {
                CZDog *dog = [[CZDog alloc] init];
                person.dog = dog;
            }
           CZDog *dog  = person.dog;
           dog = nil;
        }
    }
    return 0;
}
