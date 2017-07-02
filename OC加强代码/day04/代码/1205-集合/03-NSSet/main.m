//
//  main.m
//  03-NSSet
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
    特点：无序，元素不可以重复，可以用快速去除数组中的重复元素，效率比数组要高
    NSSet:特点：不可以变，一经创建不能增删改
    NSMutableSet:可以增删，没有改
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {
       NSSet *set = [NSSet setWithObjects:@1,@2,@3,@4,@1,nil];
//      创建
//      NSMutableSet *setM = [NSMutableSet set];
        NSMutableSet *setM = [NSMutableSet setWithCapacity:10];
        setM.set = set;
//      添加元素
        [setM addObject:@10];
//       删除元素
        [setM removeObject:@1];
//      删除所有元素
        [setM removeAllObjects];
        NSLog(@"%@",setM);
    }
    return 0;
}

void test()
{
    NSSet *set = [NSSet setWithObjects:@1,@2,@3,@4,@1,nil];
    NSLog(@"%@",set);
    //        NSSet *set1 = @[@1,@2,@3]; 错误的
    //      遍历
    for (NSNumber *number in set) {
        NSLog(@"%@",number);
    }
    //      判断是否包含某个元素
    BOOL isContains  = [set containsObject:@2];
    if (isContains) {
        NSLog(@"包含！");
    }
    
    //    给数组去重
    NSArray *array = @[@1,@2,@3,@4,@1];
    //      通过数组创建一个set
    NSSet *set1 = [NSSet setWithArray:array];
    //      把Set转换为数组
    NSArray *arr  =  [set1 allObjects];
    NSLog(@"%@",arr);
}
