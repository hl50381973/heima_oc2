//
//  CZDog.m
//  1204-字符串
//
//  Created by Apple on 14/12/4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZDog.h"

@implementation CZDog


/**
 *  比较方法
 */
- (NSComparisonResult) compare:(CZDog *) other
{
//  年龄优先
    if(self.age == other.age){
          return [self.name compare:other.name];
    }else if(self.age > other.age){
        return NSOrderedDescending;//降序
    }else{
        return NSOrderedAscending;//升序
    }
}

//叫
- (void) bark{
    NSLog(@"%@",self.name);
}

- (void) eat:(NSString *) food
{
    NSLog(@"%@ 吃 %@",self.name,food);
}

-(BOOL)isEqual:(id)object
{
    if (self == object) {
        return YES;
    }
    return [self.name isEqualToString:[object name]];
}



-(NSString *)description
{
    return [NSString stringWithFormat:@"CZDog name = %@,age = %d",_name,_age];
}

@end
