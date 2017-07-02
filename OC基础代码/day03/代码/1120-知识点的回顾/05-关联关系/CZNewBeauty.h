//
//  CZNewBeauty.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZIPad.h"

@interface CZNewBeauty : NSObject
{
//  让美女拥有一个IPad
    CZIPad * _iPad;
}

//写方法，买一个IPad
- (void) setIPad:(CZIPad *) iPad;

//看电影
- (void) lookAtMovie;
//听音乐
- (void) listenToMusic;
/**
 * 美女玩游戏
 */
- (void) playGame;
/**
 *  美女自拍
 */
- (void) takeSelfPhoto;


@end
