//
//  CZBeauty.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZBeauty.h"

@implementation CZBeauty

//使用iPad看电影
- (void) lookAtMovieWithIPad:(CZIPad *) ipad
{
     NSLog(@"美女要看电影了！");
     [ipad playMovie];
}

//使用IPad听音乐
- (void) listenToMusicWithIPad:(CZIPad *) ipad
{
    NSLog(@"美女要听音乐了！");
    [ipad playMusic];
}

/**
 * 美女玩游戏
 */
- (void) playGameWithIPad:(CZIPad *) ipad
{
    NSLog(@"美女要玩游戏了！");
    [ipad playGame];
}

/**
 *  美女自拍
 */
- (void) takeSelfPhotoWithIPad:(CZIPad *) ipad
{
    NSLog(@"美女要自拍了！");
    [ipad takePhoto];
}

@end
