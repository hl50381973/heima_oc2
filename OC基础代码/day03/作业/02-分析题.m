1.self的使用
#import <Foundation/Foundation.h>
@interface Person : NSObject
{
    int _age;
}
- (void)test1;
- (void)test2;
+ (void)test2;

+ (void)test3;
+ (void)test4;
- (void)test4;
@end

@implementation Person
- (void)test1
{
    _age = 20;
    
    int _age = 10;
    NSLog(@"调用了-test1方法-%d", _age);
    [self test2];
}

- (void)test2
{
    int _age = 10;
    NSLog(@"调用了-test2方法-%d", self->_age);
}

+ (void)test2
{
    int _age = 20;
    NSLog(@"调用了+test2方法-%d", _age);
}

+ (void)test3
{
    NSLog(@"调用了+test3方法");
    [self test4];
}

+ (void)test4
{
    NSLog(@"调用了+test4方法");
}

- (void)test4
{
    NSLog(@"调用了-test4方法");
}
@end

int main()
{
    [Person test3];
    
    Person *p = [Person new];
    [p test1];
    return 0;
}

2.继承
#import <Foundation/Foundation.h>
@interface Animal : NSObject
- (void)test1;
- (void)test2;
- (void)test3;
@end

@implementation Animal
- (void)test1
{
    NSLog(@"Animal-test1");
}
- (void)test2
{
    NSLog(@"Animal-test2");
}
@end

@interface Dog : Animal
@end

@implementation Dog
- (void)test1
{
    NSLog(@"Dog-test1");
}

- (void)test3
{
    NSLog(@"Dog-test3");
}
@end

int main()
{
    Dog *dog = [Dog new];
    [dog test1];
    [dog test2];
    [dog test3];
    return 0;
}

3.继承
#import <Foundation/Foundation.h>
@interface Animal : NSObject
- (void)test1;
+ (void)test1;
@end

@implementation Animal
- (void)test1
{
    NSLog(@"--test1");
}
+ (void)test1
{
    NSLog(@"++test2");
}
@end

@interface Dog : Animal
- (void)test3;
@end

@implementation Dog
- (void)test3
{
    NSLog(@"--test3");
    [super test1];
}
@end

int main()
{
    Dog *dog = [Dog new];
    [dog test1];
    [dog test2];
    [dog test3];
    return 0;
}

4.多态
#import <Foundation/Foundation.h>
@interface Animal : NSObject
- (void)test1;
@end

@implementation Animal
- (void)test1
{
    NSLog(@"Animal-test1");
}
@end

@interface Dog : Animal
@end

@implementation Dog
- (void)test1
{
    NSLog(@"Dog-test1");
}
@end

int main()
{
    Animal *a = [Dog new];
    [a test1];
    
    Animal *a2 = [Animal new];
    [a2 test1];
    
    Dog *a3 = [Dog new];
    [a3 test1];
    
    return 0;
}