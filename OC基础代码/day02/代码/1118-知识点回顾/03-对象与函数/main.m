//
//  main.m
//  03-对象与函数
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>


//定义Person类
@interface Person : NSObject
{
@public
    int age;
}

- (void) say:(NSString *) words;

@end

@implementation Person

- (void) say:(NSString *) words
{
    NSLog(@"%@",words);
}

@end

//对象作为函数参数传递是地址传递
//在函数可以通过对象访问它里面成员变量
//也可以对象调用它的对象方法(成员方法)
void changePerson(Person *person)
{
    person->age = 10;
    
    [person say:@"大家好！"];
}

//因为对象是被创建堆中所以可以作为函数的返回值，
//而局部变量不可以作为函数的返回值的，应为它在栈中，离开函数就被消耗
Person *createPerson()
{
    return [Person new];
}





int main(int argc, const char * argv[]) {
  
    Person *p = [Person new];
    
    p->age = 1;
    
    changePerson(p);
    
    NSLog(@"%d",p->age);
    
    Person *p1 = createPerson();
    
    p1->age = 100;
    
    NSLog(@"%d",p1->age);
    
    
    return 0;
}
