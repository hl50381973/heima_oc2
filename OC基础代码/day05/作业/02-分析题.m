1.description方法
#import <Foundation/Foundation.h>
@interface Person : NSObject
@property int age;
@end

@implementation Person
+ (NSString *)description
{
    return @"A";
}
- (NSString *)description
{
    return @"B";
}
@end

int main()
{
    Person *p = [Person new];
    Person *p2 = [[Person class] new];
    NSLog(@"%@", p);
    NSLog(@"%@", p2);
    NSLog(@"%@", [Person class]);
    NSLog(@"%@", [p class]);
    return 0;
}

/*-------------------------牛B的分隔线-------------------------*/

2.类的加载过程
#import <Foundation/Foundation.h>
@interface Person : NSObject
@end

@interface Student : Person
@end

@interface GoodStudent : Student
@end

int main()
{
    Student *s = [[Student alloc] init];
    return 0;
}

@implementation Student
+ (void)load
{
    NSLog(@"Student+load");
}
+ (void)initialize
{
    NSLog(@"Student+initialize");
}
@end

@implementation GoodStudent(MJ)
+ (void)load
{
    NSLog(@"GoodStudent-MJ+load");
}
+ (void)initialize
{
    NSLog(@"GoodStudent-MJ+initialize");
}
@end

@implementation GoodStudent
+ (void)load
{
    NSLog(@"GoodStudent+load");
}
+ (void)initialize
{
    NSLog(@"GoodStudent+initialize");
}
@end

@implementation Person
+ (void)load
{
    NSLog(@"Person+load");
}
+ (void)initialize
{
    NSLog(@"Person+initialize");
}
@end