//
//  main.m
//  05-继承的注意点
//
//  Created by Apple on 14/11/21.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
    在OC中类方法也是可以继承的
    在OC中类方法也是可以重写的
    在OC中类方法可以和对象方法重名
    +表示类方法
    -表示对象方法
 
   子类中不可以定义与父类同名的成员变量
 */
#import "CZSubCalculator.h"

int main(int argc, const char * argv[]) {

//  通过子类的类名调用父类的类方法，在OC中类方法也是可以继承的
    int num  =  [CZSubCalculator sumOfNum:10 andOther:20];
    
    
    
    NSLog(@"%d",num);
    
    return 0;
}
