//
//  main.m
//  09-ARC中@property
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
     
        
        CZPerson * person = [[CZPerson alloc] init];
        CZDog *dog = [[CZDog alloc] init];
        
        //      把狗给人
        person.dog = dog;
        //      把人给狗
        dog.person = person;
        
    }
    return 0;
}
