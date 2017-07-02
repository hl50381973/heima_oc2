//
//  main.m
//  NSArray
//
//  Created by Apple on 14/12/4.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"
#import "CZPerson.h"
/*
 NSArray:不可以变
 */

int main(int argc, const char * argv[]) {
// 字符串转数组
    NSArray *array = @[@"a",@"b",@"c",@"d"];
   
//  写入文件
//    NSString *path = @"/Users/apple/Desktop/test.plist";
//    BOOL isSuccess = [array writeToFile:path atomically:YES];
//    if (isSuccess) {
//        NSLog(@"写入成功！");
//    }
//    
////  从文件中读取内容
//    array = [NSArray arrayWithContentsOfFile:path];
//    NSLog(@"%@",array);
//    
//  URL 写入
    NSURL *url = [NSURL URLWithString:@"file:///Users/apple/Desktop/test.plist"];
    BOOL isSuccess = [array writeToURL:url atomically:YES];
    if (isSuccess) {
        NSLog(@"写入成功！");
    }
//  URL 读
    array = [NSArray arrayWithContentsOfURL:url];
    NSLog(@"%@",array);

    
    return 0;
}

void testCompent()
{
    // 字符串转数组
    NSString *string = @"1 2 3 4 5 6";
    //  使用字符串来分割原来的字符串成一个数组
    NSArray *array =  [string componentsSeparatedByString:@" "];
    
    NSLog(@"%@",array);
    //  把数组组装字符串
    NSString *str = [array componentsJoinedByString:@"-"];
    NSLog(@"%@",str);
}

void testSorted()
{
    // 数组遍历（4种方式）
    CZDog *dog = [[CZDog alloc] init];
    dog.name = @"xiaohei";
    dog.age = 10;
    CZDog *dog2 = [[CZDog alloc] init];
    dog2.name = @"xiaohuang";
    dog2.age = 11;
    CZDog *dog3 = [[CZDog alloc] init];
    dog3.name = @"xiaohong";
    dog3.age = 6;
    CZDog *dog4 = [[CZDog alloc] init];
    dog4.name = @"xiaobai";
    dog4.age = 6;
    NSArray *array = @[dog,dog2,dog3,dog4];
    //  排序
    //  通过selecor 选择器 进行排序
    //    array = [array sortedArrayUsingSelector:@selector(compare:)];
    NSLog(@"%@",array);
    //  第二种方式 使用比较器(block)
    //    array = [array sortedArrayUsingComparator:^NSComparisonResult(CZDog * obj1, CZDog *  obj2) {
    //
    //        if(obj1.age == obj2.age){
    //            return [obj1.name compare:obj2.name];
    //        }else if(obj1.age > obj2.age){
    //            return NSOrderedDescending;//降序
    //        }else{
    //            return NSOrderedAscending;//升序
    //        }
    ////
    ////        return [obj1.name compare:obj2.name];
    //    }];
    NSLog(@"%@",array);
    //  第三种方式：属性描述器
    NSSortDescriptor *desc1 = [NSSortDescriptor sortDescriptorWithKey:@"age" ascending:YES];
    NSSortDescriptor *desc2 = [NSSortDescriptor sortDescriptorWithKey:@"name" ascending:YES];
    
    array = [array sortedArrayUsingDescriptors:@[desc1,desc2]];
    NSLog(@"%@",array);
    
}


void testMakeObjectsPerform()
{
    // 数组遍历（4种方式）
    CZDog *dog = [[CZDog alloc] init];
    dog.name = @"xiaohei";
    
    CZDog *dog2 = [[CZDog alloc] init];
    dog2.name = @"xiaohuang";
    
    CZDog *dog3 = [[CZDog alloc] init];
    dog3.name = @"xiaohong";
    
    CZDog *dog4 = [[CZDog alloc] init];
    dog4.name = @"xiaobai";
    NSArray *array = @[dog,dog2,dog3,dog4];
    //  让数组中的所有元素执行某个方法
    [array makeObjectsPerformSelector:@selector(bark)];
    [array makeObjectsPerformSelector:@selector(eat:) withObject:@"骨头"];
}



void testBianLi()
{
    // 数组遍历（4种方式）
    CZDog *dog = [[CZDog alloc] init];
    dog.name = @"xiaohei";
    
    CZDog *dog2 = [[CZDog alloc] init];
    dog2.name = @"xiaohuang";
    
    CZDog *dog3 = [[CZDog alloc] init];
    dog3.name = @"xiaohong";
    
    CZDog *dog4 = [[CZDog alloc] init];
    dog4.name = @"xiaobai";
    NSArray *array = @[dog,dog2,dog3,dog4];
    //  使用普通for
    
    //    for (int index = 0; index < array.count; index++) {
    //          CZDog *dog =  array[index];
    //          NSLog(@"%@",dog);
    //    }
    //  使用增加for(最常用)
    //    for (CZDog *dog in array) {
    //
    //        NSLog(@"%@",dog);
    //
    //    }
    
    //  通过枚举器
    //    NSEnumerator *enumer  =  [array objectEnumerator];
    //    CZDog *newDog;
    //    while (newDog = [enumer nextObject]) {
    //        NSLog(@"%@",newDog);
    //    }
    
    //  通过block方式
    //   idx 表示这个元素在数组索引
    //   stop 设置为YES 那么就不往后遍历的
    [array enumerateObjectsUsingBlock:^(CZDog * dog, NSUInteger idx, BOOL *stop) {
        NSLog(@"%@-%zd",dog,idx);
        if (idx == 2) {
            *stop = YES;
        }
    }];
}


void testArray()
{
    CZDog *dog = [[CZDog alloc] init];
    dog.name = @"xiaohei";
    
    CZDog *dog2 = [[CZDog alloc] init];
    dog2.name = @"xiaohei";
    
    CZPerson *person = [[CZPerson alloc] init];
    person.name = @"apple";
    NSArray *arr = @[dog,person];
    //  获取数组中的元素
    //  通过对象方法 取出第0个元素
    CZDog *dog1 = [arr objectAtIndex:0];
    NSLog(@"%@",dog1);
    
    //  快捷方式  取出第0个元素
    dog1 = arr[0];
    NSLog(@"%@",dog1);
    
    // 获取数组长度
    long len  = [arr count];
    len = arr.count;
    NSLog(@"%zd",len);
    //  判断数组中是否包含某个元素
    //  判断是不是包含某个对象，调用这个对象上isEqual方法
    BOOL isContain = [arr containsObject:dog2];
    if (isContain) {
        NSLog(@"包含！");
    }
    
}


void testCreateArray()
{
    //  NSArray 的创建
    
    //  简洁的构造方法
    //   nil 表示数组结束了，不要创建数组的中间加入nil
    //     NSArray *array = [NSArray arrayWithObjects:@"a",nil,@"b",@"c",nil];
    CZDog *dog = [[CZDog alloc] init];
    dog.name = @"xiaohei";
    CZPerson *person = [[CZPerson alloc] init];
    person.name = @"apple";
    
    NSArray *array = [NSArray arrayWithObjects:dog,person,@"a",nil];
    NSLog(@"%@",array);
    //   通过初始化方法
    array = [[NSArray alloc] initWithObjects:dog,person,@"a",nil];
    NSLog(@"%@",array);
    //   通过字面量方法:常用
    NSArray *arr = @[dog,person,@"abc"];
    NSLog(@"%@",arr);
}
