//
//  main.m
//  1205-集合
//
//  Created by Apple on 14/12/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  key 表示键
  value 表示值
 
 【掌握】概念：字典是一个无序的集合，它使通过键值对的方式来存储数据的
  key是有要求  NSCopying才能成为字典key,一般情况都是使用字符串作为字典的key
  NSDictionary 不可变得字典，一经创建里面的元素就不可以改变了
  Person
  age:@10
  name:@“张三“
 
 */
int main(int argc, const char * argv[]) {
    @autoreleasepool {

//      使用简便方式来创建字典
        NSDictionary *dict1 = @{@"age":@20,@"name":@"apple",@"height":@1.8};
//      字典写文件
        NSString *path = @"/Users/apple/Desktop/测试.txt";
//      如果返回YES表示写入成功
        BOOL isSuccess = [dict1 writeToFile:path atomically:YES];
        if(isSuccess){
            NSLog(@"写入成功！");
        }
        
        
//      从文件中读取字典
        NSDictionary *dict  =  [NSDictionary dictionaryWithContentsOfFile:path];
        NSLog(@"%@",dict);
        
    }
    return 0;
}

void testBianLi()
{
    //      使用简便方式来创建字典
    NSDictionary *dict1 = @{@"age":@20,@"name":@"apple",@"height":@1.8};
    
    //    第一种方式：先取出字典中的keys,然后使用数组的方式对keys遍历
    //     取出所有key
    //        [dict1 allKeys];
    NSArray *keys =  dict1.allKeys;
    //     使用数组方式来遍历keys
    //        for (NSString *key in keys) {
    //
    //            NSLog(@"%@ = %@",key,dict1[key]);
    //
    //        }
    ////   第二种方式，使用增强for(掌握)
    //        for (NSString *key in dict1) {
    //            NSLog(@"%@ = %@",key,dict1[key]);
    //        }
    //    第三种方式 枚举器(不常用)
    NSEnumerator *keyEnumerator =  dict1.keyEnumerator;
    NSString *key = nil;
    while ((key = keyEnumerator.nextObject)) {
        NSLog(@"%@ = %@",key,dict1[key]);
    }
    //     取出字典中所有值
    NSArray *values  = dict1.allValues;
    for (id value in values) {
        NSLog(@"%@",value);
    }
    //     第四种 使用block的方式
    [dict1 enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop) {
        NSLog(@"%@ : %@",key,obj);
    }];
}

void testDictCreate()
{
    //      创建一个字典对象，value,key,value,key,值,键...  来创建的
    NSDictionary *dict = [NSDictionary dictionaryWithObjectsAndKeys:@10,@"age",@"张三",@"name", nil];
    
    NSLog(@"%@",dict);
    //      取出某个键所对应的值
    NSNumber *number = [dict objectForKey:@"age"];
    NSLog(@"%@",number);
    //      简便的取值方式(常用)
    NSString *name = dict[@"name"];
    NSLog(@"%@",name);
    
    //      使用简便方式来创建字典
    NSDictionary *dict1 = @{@"age":@20,@"name":@"apple",@"height":@1.8};
    NSNumber *age1 = dict1[@"age"];
    NSLog(@"%@",age1);
    NSLog(@"%@",dict1);
    
    //      取出字典长度,字典中有几个键值对
    long  len = dict1.count;
    len = [dict1 count];
    NSLog(@"%zd",len);
    
}
