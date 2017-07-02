//
//  Beauty.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IPad.h"
#import "iPhone.h"
#import "Play.h"
@interface Beauty : NSObject

//@property (nonatomic,strong) IPad * iPad;

//@property (nonatomic,strong) iPhone * iphone;

@property (nonatomic,strong) id <Play> player;

- (void) wantPlayGame;

@end
