1.对象方法类方法
#import <Foundation/Foundation.h>
@interface Person : NSObject
{
    int _age;
}
- (void)test1;
+ (void)test2;
@end

@implementation Person
- (void)test1
{
    NSLog(@"调用了test1方法");
}

+ (void)test2
{
    //[self test1];//类方法不能通过self调用对象方法
    // NSLog(@"调用了test2方法-%d", _age);//类方法中不能访问成员变量
    NSLog(@"调用了test2方法");
}
@end

int main()
{
    Person *p = [Person new];
    //[p test2];//不能通过对象来调用类方法
    [Person test2]
    
    //[Person test1];//可以通过类名调用对象方法
    [p test1];
}

2.继承
#import <Foundation/Foundation.h>

@interface Animal : NSObject
{
    int _age;
    double _weight;
}
- (void)test1;
+ (void)test2;
@end

@implementation Animal
- (void)test1
{
    NSLog(@"test1----");
}
+ (void)test2
{
    NSLog(@"test2----");
}
@end

//父类必须先于子类声明
@interface Dog : Animal
{
     //int _age;//子类中不可以有与父类同名的成员变量
    double _height;
}

@end

@implementation Dog
- (void)test1
{
    NSLog(@"Dog test1----");
    
    //[super test2];//不可以在子类的对象方法中调用父类的类方法
    [super test1];
}
@end

