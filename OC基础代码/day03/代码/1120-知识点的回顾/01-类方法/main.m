//
//  main.m
//  01-类方法
//
//  Created by Apple on 14/11/20.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 对象方法：
 1、声明和实现方法时候，以 -开头
 2、对象方法是隶属于对象，只能通过对象调用
 3、对象方法中可以直接访问成员变量，因为对象方法和成员变量都是隶属于该对象的
 4、对象方法中可以调用其他对象方法
 5、对象方法中也可以调用类方法
 类方法：
 1、声明和实现的标识符都是 +
 2、类方法它是属于类本身的
 3、类方法是直接通类名调用的，不能通过对象调用
 4、类方法不能访问成员变量，因为成员变量是对象的，不是类的
 5、在类方法中不能直接调用对象方法，也就是说不能通过self来调用对象方法
   如果你要再类方法中调用对象方法
   1、在类方法中创建一个对象
   2、把对象作为形参传入

 类方法优点：
    1、调用类方法不用创建对象，所以节省内存
    2、通过对象调用对象方法，首先要通过对象找他isA指针，然后在去类中找相应的方法，所有比较慢
    3、直接通过类调用方法，直接找到这个类然后调用相应的方法就OK了，所有类方法的效率比较高
    4、当方法中不需要使用到成员变量的时候就使用类方法

 */

//
//@interface CZPerson : NSObject
//{
//@public
//    int _age;
//    NSString * _name;
//}
//
//- (void) setAge:(int) age;
//
//+ (int) sumOfNum:(int)num andOther:(int) other;
//
//+ (void) changePersonAge:(CZPerson *) person;
//
//@end
//
//
//@implementation CZPerson
//
//- (void) setAge:(int) age
//{
//    _age = age;
//}
//
//+ (int) sumOfNum:(int)num andOther:(int) other
//{
////    _age = 10;//不能成员变量
//    
//    
//    return num + other;
//}
//
//
//+ (void) changePersonAge:(CZPerson *) person
//{
//    person->_age = 200;
//    
//    [person setAge:20];
//}
//
//@end



//void test()
//{
//    // 类方法是直接通类名调用的
//    int sum  = [CZPerson sumOfNum:10 andOther:20];
//    
//    CZPerson *p = [CZPerson new];
//    //    [p  sumOfNum:10 andOther:20];
//    
//    //    Person->-age;
//    [CZPerson changePersonAge:p];
//    
//    NSLog(@"%d",p->_age);
//}


/*
 类方法练习：
 创建一个计算器类，实现 + - * / 计算一个数平方
 
 */
//声明计算器类
@interface CZCalculator : NSObject
//加法
+ (double) sumOfNum:(double) num andOther:(double)other;

//减法
+ (double) minusOfNum:(double) num andOther:(double)other;
//乘法
+ (double) productOfNum:(double) num andOther:(double)other;
//除法
+ (double) divisionOfNum:(double) num andOther:(double)other;
//平方
+ (double) squareOfNum:(double) num;

@end


@implementation CZCalculator

//加法
+ (double) sumOfNum:(double) num andOther:(double)other
{
    return num + other;
}

//减法
+ (double) minusOfNum:(double) num andOther:(double)other
{
    return num - other;
}
//乘法
+ (double) productOfNum:(double) num andOther:(double)other
{
    return num * other;
}
//除法
+ (double) divisionOfNum:(double) num andOther:(double)other
{
    return num / other;
}
//平方
+ (double) squareOfNum:(double) num
{
    return num * num;
}

@end



#import "CZCat.h"
#import "CZPerson.h"
int main(int argc, const char * argv[]) {
    double num = 2.0;
    double num1 = 4.0;
    
//    double rs = [CZCalculator sumOfNum:num andOther:num1];
//    NSLog(@"%.2lf",rs);
//    rs = [CZCalculator minusOfNum:num andOther:num1];
//    NSLog(@"%.2lf",rs);
//    rs = [CZCalculator productOfNum:num andOther:num1];
//    NSLog(@"%.2lf",rs);
//    rs = [CZCalculator divisionOfNum:num andOther:num1];
//    NSLog(@"%.2lf",rs);
//    rs = [CZCalculator squareOfNum:num];
//    NSLog(@"%.2lf",rs);
    
    [CZPerson  sumOfNum:10 andOther:20];
    
    return 0;
}
