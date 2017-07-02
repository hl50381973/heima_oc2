//
//  CZMovie.h
//  1123-知识点回顾
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
//定义一个日期的结构体
typedef struct{
    int year;
    int month;
    int day;
} CZDate;

@interface CZMovie : NSObject

//电影名称,这里就不要再加“_”了
@property NSString * name;
//主演
@property NSString * actor;
//导演
@property NSString * director;
//主题歌
@property NSString * themeSong;
//演唱
@property NSString * singer;
//上映时间
@property CZDate showDay;

@end
