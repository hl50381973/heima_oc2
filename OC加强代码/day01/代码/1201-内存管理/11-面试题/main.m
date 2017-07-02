//
//  main.m
//  11-面试题
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        for (long i = 0; i < NSIntegerMax; i++) {
             @autoreleasepool {
                   NSString *str =  [NSString stringWithFormat:@"呵呵%@",@"哈哈"];
                   str = [str uppercaseString];
                   str = [str lowercaseString];
                   str = [str capitalizedString];
             }
        }
        
    }
    return 0;
}
