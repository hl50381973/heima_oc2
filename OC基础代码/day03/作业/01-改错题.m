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
    [self test1];
    NSLog(@"调用了test2方法-%d", _age);
}
@end

int main()
{
    Person *p = [Person new];
    [p test2];
    
    [Person test1];
}

2.继承
#import <Foundation/Foundation.h>
@interface Dog : Animal
{
    int _age;
    double _height;
}

@end

@implementation Dog
- (void)test1
{
    NSLog(@"test1----");
    [super test2];
}
@end

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