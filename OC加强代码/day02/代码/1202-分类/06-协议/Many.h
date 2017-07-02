//
//  Many.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Good.h"
#import "Bad.h"
//一个协议可以遵守其他的多个协议
@protocol Many <Good,Bad>


@end
