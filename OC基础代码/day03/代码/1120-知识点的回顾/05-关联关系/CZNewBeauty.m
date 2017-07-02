//
//  CZNewBeauty.m
//  1120-知识点的回顾
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZNewBeauty.h"

@implementation CZNewBeauty


//写方法，买一个IPad
- (void) setIPad:(CZIPad *) iPad
{
    _iPad = iPad;
}


//看电影
- (void) lookAtMovie
{
    NSLog(@"美女看电影");
    [_iPad playMovie];
}
//听音乐
- (void) listenToMusic
{
    NSLog(@"美女听音乐");
    [_iPad playMusic];
}
/**
 * 美女玩游戏
 */
- (void) playGame
{
    NSLog(@"美女玩游戏");
    [_iPad playGame];
}
/**
 *  美女自拍
 */
- (void) takeSelfPhoto
{
    NSLog(@"美女自拍");
    [_iPad takePhoto];
}

@end
