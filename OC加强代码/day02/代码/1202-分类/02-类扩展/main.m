//
//  main.m
//  02-类扩展
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  类扩展：一般情况下在.m文件中，为类增加私有的属性和方法
 
 */
#import "CZPerson.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
       CZPerson * person = [[CZPerson alloc] init];
//        [person show];
        
        NSLog(@"%@",person);
    }
    return 0;
}
