//
//  CZBaby.h
//  1202-分类
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>




@class CZBaby;

//@protocol BaoMu <NSObject>
//
////喂婴儿
//- (void) feedBabay:(CZBaby *) baby;
//
//@end

@protocol CZBabayDelegate <NSObject>

//喂婴儿
- (void) feedBabay:(CZBaby *) baby;

@end

@interface CZBaby : NSObject

@property (nonatomic,strong) id<CZBabayDelegate> delegate;


//@property (nonatomic,strong) id<BaoMu> baomu;

//用于记录婴儿吃了多个克奶粉
@property (nonatomic,assign) int food;

- (void) wantToEat;


@end
