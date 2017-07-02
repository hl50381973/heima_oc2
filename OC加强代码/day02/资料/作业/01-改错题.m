1.计数器的基本操作
// 假设有狗这个类
@class Dog;
@interface Person : NSObject
@property (nonatomic, assign) Dog *dog;
@end
@implementation Person
@end

int main()
{
    Person *p = [[Person alloc] init];
    [p release];
    [p retain];
    
    Person *p2 = [[Person alloc] init];
    [p2 dealloc];
    [p2 release];
    
    Person *p3 = [[Person alloc] init];
    
    Dog *d = [[Dog alloc] init];
    [d release];
    
    p3.dog = d;
    
    [p3 release];
    return 0;
}

2.@property
// 假设有Dog类、Car类
// 请找出不合理或者错误的地方
@interface Person : NSObject
@property (nonatomic, assign) Car *car;
@property (nonatomic, atomic, retain) int age;
@property (nonatomic, readwrite, readonly) int height;
@property (nonatomic, retain, setter=setMyDog) Dog *dog;
@end

@implementation Person
- (void)dealloc
{
    [_car release];
    [_age release];
    [_height release];
    [_dog release];
    [super dealloc];
}
@end

3.autorelease
// 假设有个Person类
int main()
{
    @autoreleasepool
    {
        Person *p = [[[Person alloc] init] release];
        
        Person *p1 = [[[Person alloc] init] autorelease];
        
        [p1 release];
        
        Person *p2 = [[[[Person alloc] init] autorelease] autorelease];
        
    }
    return 0;
}

4.autorelease
// 假设有个Person类，有个@property (nonatomic, assign) int age;
int main()
{
    Person *p = nil;
    @autoreleasepool
    {
        p = [[Person alloc] init];
        
        @autoreleasepool
        {
            [p autorelease];
        }
        
        [p setAge:10];
    }
    return 0;
}