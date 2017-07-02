//
//  CZPerson.m
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZPerson.h"

@implementation CZPerson
{
    CZDog * _dog;
}
//自动释放池中第二使用场景在快捷的构造方法
+ (instancetype) person
{
    return [[[self alloc] init] autorelease];
}

-(void)setDog:(CZDog *)dog
{
    if (_dog != dog) {
        [_dog release];
        _dog = [dog retain];
    }
}

//在getter方法中，使用autorelease
-(CZDog *)dog
{
    
    [_dog retain];
    
    [_dog autorelease];
    
    return _dog;
}



- (void)dealloc
{
    self.name = nil;
    self.dog = nil;
    NSLog(@"%s",__func__);
    [super dealloc];
}

@end
