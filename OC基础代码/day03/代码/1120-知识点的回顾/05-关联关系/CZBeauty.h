//
//  CZBeauty.h
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZIPad.h"

/*
   当我们在一类中总是使用某个对象，作为形式参数，那么我们就把这个参数提取成员变量
 
 */
@interface CZBeauty : NSObject

//使用iPad看电影
- (void) lookAtMovieWithIPad:(CZIPad *) ipad;
//使用IPad听音乐
- (void) listenToMusicWithIPad:(CZIPad *) ipad;
/**
 * 美女玩游戏
 */
- (void) playGameWithIPad:(CZIPad *) ipad;
/**
 *  美女自拍
 */
- (void) takeSelfPhotoWithIPad:(CZIPad *) ipad;
@end
