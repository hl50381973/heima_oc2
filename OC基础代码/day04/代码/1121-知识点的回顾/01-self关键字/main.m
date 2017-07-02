//
//  main.m
//  01-self关键字
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//在类的方法内部，系统提供了两个关键字，self 和 super





#import "CZPerson.h"

int main(int argc, const char * argv[]) {

   CZPerson *person = [CZPerson new];
    
   [person changeAge:60];
    
   NSLog(@"%d",[person age]);
   
    int avg = [CZPerson averageOfNum:20 andOther:50];
    
    NSLog(@"%d",avg);
    
    return 0;
}
