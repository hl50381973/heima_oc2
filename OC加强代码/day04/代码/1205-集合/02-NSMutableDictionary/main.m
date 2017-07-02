//
//  main.m
//  02-NSMutableDictionary
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 在字典中所有key(键)都是唯一的
 值没有要求，可以重复
 
 NSMutableDictionary:是NSDictionary的子类，它是可变的字典，它支持增删除改的操作
 
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSMutableDictionary *dict  = [NSMutableDictionary  dictionaryWithCapacity:10];
        //        NSLog(@"%zd,%zd",dict.count,dict1.count);
        dict.dictionary = @{@"age":@10,@"name":@"lisi",@"height":@1.8};
        
//      首先找到要删除的key方在数组中
        NSMutableArray *removeKeys = [NSMutableArray array];
        for (NSString *key in dict) {
//          注意字典中存储都是对象
            if ([dict[key] isEqual:@10]) {
                [removeKeys addObject:key];
            }
            
        }
//      删除数组中key对应的键值对
        [dict removeObjectsForKeys:removeKeys];
        
        NSLog(@"%@",dict);
    }
    return 0;
}

void testCreate()
{
    //     创建一个可变的字典
    //     创建一个空字典
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    //     创建一个有容量的字典
    NSMutableDictionary *dict1  = [NSMutableDictionary  dictionaryWithCapacity:10];
    //        NSLog(@"%zd,%zd",dict.count,dict1.count);
    dict1.dictionary = @{@"age":@10,@"name":@"lisi",@"height":@1.8};
    
    //     插入元素,如果字典有这个key就是修改，如果没有就插入
    //     第一种方式
    [dict1 setObject:@50.0  forKey:@"weight"];
    //      第二种方式
    dict1[@"sex"] = @"男";
    //      修改
    dict1[@"age"] = @30;
    //       删除
    [dict1 removeObjectForKey:@"age"];
    //       删除多个元素，数组中存储是你要删除的key
    [dict1 removeObjectsForKeys:@[@"name",@"sex"]];
    //       清空字典
    [dict1 removeAllObjects];
    
}