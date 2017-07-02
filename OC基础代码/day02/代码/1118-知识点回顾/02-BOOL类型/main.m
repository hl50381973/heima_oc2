//
//  main.m
//  02-BOOL类型
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  BOOL OC提供的一种Boolean类型，就是用来表示逻辑上真与假这个类型
 
  BOOL 在OC中有两个取值  YES 和 NO
  YES 真 对应数字 1
  NO  假 对应数字 0
 
  使用BOOL可以提高代码可读性，减少代码的出错率
 
  所有数据类型都可以定义变量
  所有的数据类型都可以作为形参或实参
  所有数据类型类都可以作为返回值
 
 */


void testBool(BOOL flag)
{
    if (flag) {
        NSLog(@"真");
    }else{
        NSLog(@"假");
    }
}


@interface CZLogin : NSObject

- (BOOL) vilidateUserName:(NSString *)userName andPassword:(NSString *) password;

@end

@implementation CZLogin

- (BOOL)vilidateUserName:(NSString *)userName andPassword:(NSString *)password
{
//  当对象进行==比较时候，比较是它们所指向的是不是同一个地址
//  验证用户名不能为空
//  nil 空对象
    if (userName == nil || [userName isEqualTo:@""]) {
        
        NSLog(@"用户名不能为空");
        return NO;
    }
    
    if (password == nil || [password isEqualTo:@""]) {
        NSLog(@"密码不能为空");
        return NO;
    }
    
    if ([userName isEqualTo:@"大木"] && [password isEqualTo:@"123"]) {
        return YES;
    }
    
    return NO;
}

    

@end


int main(int argc, const char * argv[]) {
    
   
   CZLogin *login =  [CZLogin new];
    
   BOOL canLogin  =  [login vilidateUserName:@"大木" andPassword:@""];
    if (canLogin) {
        NSLog(@"可以登录！");
    }else{
        NSLog(@"登录失败！");
    }
    
    BOOL isTrue = YES;
    testBool(YES);
    testBool(NO);
    
    
//  找出10~100中可以被7整除的最小的数
    
    
//    for(int i = 10;i < 100;i++)
//    {
//        BOOL isDivisible = (i % 7 == 0);
//        if (isDivisible) {
//            NSLog(@"%d",i);
//            break;
//        }
//    }
    
    
    
    return 0;
}
