//
//  main.m
//  06-创建类的注意点
//
//  Created by Apple on 14/11/17.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>


//1、类的声明和实现不能嵌套的,声明中也不能嵌套其他声明，实现也不能嵌套其他的实现
//2、类的声明中仅仅能放成员变量和方法的声明
//3、成员变量一定要声明在大括号中,
//4、不能在声明的时候给变量赋值
//5、方法不可以写大括号中
//6、成员变量不能定义在大括号外部
//7、方法定义一定要在大括号与@end之间
//8、对象方法只能同多对象调用，不可以使用C语言的方式进行调用
//9、外部不能识别定义在@interface 与 @end 函数，但是可以放在@implementation 与 @end
//10、函数定义在.m文件的任何位置，但是一般情况下不会把定义在类的声明或实现中
//11、实现可以放在主调函数后面，只要声明放在在前就可以了
//11、@interface  或 @implementation 不要忘记 @end

@interface Person : NSObject
{
    int age;

}

- (void) say;

@end




void sayHello(){
    NSLog(@"哈哈,真变态！");
}

int main(int argc, const char * argv[]) {
   
//    say();
    
    Person *person = [Person new];
    [person say];
//    [person sayHello];
    
    return 0;
}


@implementation Person

- (void) say
{
    NSLog(@"快放学了，好搞笑哦");
}


@end