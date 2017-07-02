//
//  main.m
//  06-课堂练习
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZCar.h"


int main(int argc, const char * argv[]) {
    
    CZCar *car = [CZCar new];
    [car setSpeed:20];
    CZCar *other = [CZCar new];
    [other setSpeed:10];
    
    double minus  = [car compareSpeedWithOtherCar:other];
    
    [car setSpeed:30];
    
    minus = [CZCar compareSpeedBetweenThisCar:car andAnotherCar:other];
    
    NSLog(@"%.2lf",minus);
    
    return 0;
}
