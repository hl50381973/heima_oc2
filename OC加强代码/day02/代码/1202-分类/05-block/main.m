//
//  main.m
//  05-block
//
//  Created by Apple on 14/12/2.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZPerson.h"
/*
  block 是一种数据类型，封装代码
        函数不能在方法内部或函数内部，但是block可以
 
返回值类型
void     (*指针名称)();
 定义block类型的变量的格式
 返回值类型 (^block变量名称)(形参列表);
 
 实现格式
 ^ 返回值类型 (形参列表){   语句.....  };
 
 */
void test()
{
    //   定义一个无参无返回值block类型的变量
    void (^block)() = ^{
        
        NSLog(@"testBlock");
    };
    
    block();
    //    有参无返回值
    void (^block1)(NSString *name) = ^(NSString *name){
        
        NSLog(@"%@",name);
        
    };
    
    block1(@"大木");
    //      有参有返回值
    int (^sum) (int num1,int num2) = ^(int num1,int num2){
        return num1 + num2;
    };
    
    
    int rs  =  sum(10,30);
    
    NSLog(@"%d",rs);
}


void test3()
{
    CZPerson *person = [[CZPerson alloc] init];
    
    [person test:^{
        
        NSLog(@"哈哈");
        
    }];
    
    int avr  = [person average:^int(int num1, int num2) {
        return num1 * num2;
    }];
    NSLog(@"%d",avr);
    
}

void test4()
{
    CZPerson *person = [[CZPerson alloc] init];
    //        [person day2];
    
    [person day:^{
        NSLog(@"约会");
    }];
    
    
    [person day:^{
        NSLog(@"打豆豆");
    }];
}
/*
  1、在block 中可以访问局部变量的
     默认在block内部不能修改局部变量的值
     如果想修改局部变量的值，要再定义这个变量的时候，在前面加上__block
 */
void test5()
{
    //   int num = 10;
    __block  int num = 10;
    //        NSLog(@"%p",&num);
    
    void (^test)() = ^{
        num = 20;
        //            NSLog(@"%p",&num);
        NSLog(@"%d",num);
    };
    
    test();
    NSLog(@"%d",num);
    
    
}

void test6()
{
    //     当你在block内部使用对象的时候，那么block内部就对这个对象有一个强引用
    CZPerson *person =  [[CZPerson alloc] init];
    void (^test)() = ^{
        [person day1];
    };
    person = nil;
}

//typedef 返回值类型 (^block类型名称)(参数列表);

typedef  void (^voidType)();


int main(int argc, const char * argv[]) {
    @autoreleasepool {
       
        voidType test = ^{
            NSLog(@"test");
        };
        
        test();
        
    }
    return 0;
}
