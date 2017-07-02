//
//  main.m
//  02-成员变量可见性
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"

int main(int argc, const char * argv[]) {

    CZPerson *p = [CZPerson new];
    
//    p->_age = 10;
    
//    p->_name = @"hhh";
    
    p->_height = 50.0;
    
    return 0;
}
