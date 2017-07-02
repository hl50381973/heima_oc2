1.计数器的基本操作
//     少了 #import <Foundation/Foundation.h>
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
    [p retain];   //多了
    
    Person *p2 = [[Person alloc] init];
    [p2 dealloc];//不能直接调用dealloc方法
    [p2 release];
    
    Person *p3 = [[Person alloc] init]; //没减1
    
    Dog *d = [[Dog alloc] init];
    [d release];//已经说野指针
    
    p3.dog = d;//野指针错误
    
    [p3 release];
    return 0;
}

2.@property
//假有设car class(类) car，dog class(类)

@interface Person : NSObject
@property (nonatomic, assign) Car *car;//对象应该用retain修饰
@property (nonatomic, atomic, retain) int age;//nonatomic和atomic谁同一种修饰词，只能用一个，一般都用nonatomic；retain用来修饰OC对象类型，非OC对象类型用assign修饰
@property (nonatomic, readwrite, readonly) int height;//readwrite和readonly是同一种修饰词，只能用一个
@property (nonatomic, retain, setter=setMyDog) Dog *dog;//setter要用冒号 :
@end

@implementation Person
- (void)dealloc
{
    [_car release];
    [_age release];//非对象类型不用进行内存管理
    [_height release];//非对象类型不用进行内存管理
    [_dog release];
    [super dealloc];
}
@end

3.autorelease

int main()
{
    @autoreleasepool
    {
          Person *p = [[[Person alloc] init] release];//不能一开始就release，否则刚刚创建就销毁了，等于无操作
        Person *p1 = [[Person alloc] init] autorelease];
        
        [p1 release];//已用autorelease修饰不能再用release，否则会内存混乱
        
        Person *p2 = [[[[Person alloc] init] autorelease] autorelease];//autorelease只能调用一次
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
        }//自动释放池销毁后，p调用了release方法，p变成了野指针
        
        [p setAge:10];//此处调用野指针，会发生指针错误（野指针错误）
    }
    return 0;
}