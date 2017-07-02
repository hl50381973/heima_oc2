//
//  CZBaby.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>


@class CZTeacher;
@class CZStudent;
@class CZNurse;

@interface CZBaby : NSObject

//@property (nonatomic,strong) CZTeacher *baomu;
//@property (nonatomic,strong) CZStudent *baomu;

@property (nonatomic,strong) CZNurse *baomu;

//用于记录婴儿吃了多个克奶粉
@property (nonatomic,assign) int food;

- (void) wantToEat;


@end
