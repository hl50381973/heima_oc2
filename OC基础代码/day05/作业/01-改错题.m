1.description
#import <Foundation/Foundation.h>
@interface Person : NSObject
@property int age;
@end

@implementation Person
+ (NSString *)description
{
    return [NSString stringWithFormat:@"_age=%d", _age];
}
@end

/*-------------------------牛B的分隔线-------------------------*/

2.id、SEL、类对象
#import <Foundation/Foundation.h>
@interface Person : NSObject
- (void)test;
@property int age;
@end

@implementation Person
- (void)test
{
    [self performSelector:_cmd];
}
@end

int main()
{
    id *p = [[Person alloc] init];
    [p setAge:10];
    p.age = 10;
    
    Class c = [Person class];
    [c test];
    
    return 0;
}