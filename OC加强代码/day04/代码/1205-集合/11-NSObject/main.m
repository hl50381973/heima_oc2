//
//  main.m
//  11-NSObject
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZStudent.h"
#import "Bad.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
      
        NSObject *obj;
        
        CZStudent *stu =  [[CZStudent alloc] init];
//      判断是否是一个类或其子类的对象
//        if([stu isKindOfClass:[CZStudent class]]){
//            NSLog(@"YES");
//        }
//      判断是否是一个本类的对象
        if([stu isMemberOfClass:[CZPerson class]]){
            NSLog(@"YES");
        }else{
            NSLog(@"NO");
        }
        
//     创建一个协议对象
        Protocol *pro = @protocol(Bad);
//      判断是否遵守某个协议
        if([stu conformsToProtocol:pro]){
               NSLog(@"YES");
        }else{
             NSLog(@"NO");
        }
        
    }
    return 0;
}
