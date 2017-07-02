//
//  CZPerson.h
//  1201-内存管理
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"
@interface CZPerson : NSObject
{
    CZDog * _dog;
}

- (void) setDog:(CZDog *) dog;


@end
