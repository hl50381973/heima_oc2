//
//  main.m
//  03-@propery练习
//
//  Created by Apple on 14/11/23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZMovie.h"

int main(int argc, const char * argv[]) {
   
   CZMovie *movie  = [CZMovie new];
   
    movie.name = @"将爱进行到底！";
    movie.actor = @"徐静蕾 李亚鹏";
    movie.themeSong = @"因为爱情";
    movie.singer = @"王菲 陈奕迅";
    movie.director = @"张一白";
//  给一个结构体变量进行直接赋值的时候，需要类型强转
    movie.showDay = (CZDate){2011,2,12};
    
    NSLog(@"电影名称:%@",movie.name);
    NSLog(@"导演：%@",movie.director);
    NSLog(@"主演：%@",movie.actor);
    NSLog(@"主题曲：%@",movie.themeSong);
    NSLog(@"演唱：%@",movie.singer);
    NSLog(@"上映时间：%d-%d-%d",movie.showDay.year,movie.showDay.month,movie.showDay.day);
    
    
//    movie.showDay.year = 2015; 不能通过点语法直接给类中的结构体类型成员变量中的成员赋值
//  只有通过下面三个步骤来完成
    CZDate date  =  movie.showDay;
    date.year = 2015;
    movie.showDay = date;
    
    return 0;
}
