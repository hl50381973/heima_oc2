//
//  main.m
//  01-存取器方法
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CZPerson.h"

int main(int argc, const char * argv[]) {
  
   CZPerson *person = [CZPerson new];
   
   person.age = 10;


   NSLog(@"%d",person->_age);
    
    
    return 0;
}
