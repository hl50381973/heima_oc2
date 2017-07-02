1.autorelease
// 假设有个Person类，请问p1、p2、p3、p4指向的对象分别在第几行代码后会销毁
int main()
{
    Person *p1 = nil;
    
    @autoreleasepool
    {
        p1 = [[Person alloc] init];
    }
    
    @autoreleasepool
    {
        [p1 autorelease];
        
        Person *p2 = [[[Person alloc] init] autorelease];
        
        Person *p3 = [[Person alloc] init];
        
        @autoreleasepool
        {
            NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
            
            [p3 autorelease];
            
            Person *p4 = [[Person alloc] init];
            
            [pool release];// p3 被销毁
            
            [p4 autorelease];
        }// p4 被销毁
    } // p1,p2 被销毁
    
    
    return 0;
}

2.set方法内存管理
@class Dog;
@interface Person : NSObject
@property (nonatomic, retain) Dog *dog;
@end
@implementation Person
- (void)dealloc
{
    self.dog = nil;
    [super dealloc];
}
@end
// 请问main函数中有无代码出现内存泄露
int main()
{
    @autoreleasepool
    {
        // 1.有内存泄露
        Person *p = [[[Person alloc] init] autorelease];
        p.dog = [[Dog alloc] init];
        // 正确做法是p.dog = [[[Dog alloc] init] autorelease];
        
        // 2.没有内存泄露
        [[[Person alloc] init] autorelease].dog = [[[Dog alloc] init] autorelease];
    }
    return 0;
}

3.set方法内存管理
@class Dog;
@interface Person : NSObject
@property (nonatomic, retain) Dog *dog;
@end
@implementation Person
- (void)dealloc
{
    self.dog = nil;
    [super dealloc];
}
@end
// 请问d1、d2、d3、p1、p2指向的对象分别在第几行代码后被销毁
int main()
{
    @autoreleasepool
    {
        Dog *d1 = [[Dog alloc] init];
        Dog *d2 = [[Dog alloc] init];
        Dog *d3 = [[[Dog alloc] init] autorelease];
        
        Person *p2 = [[Person alloc] init];
        p2.dog = d2;
        [d2 release];
        
        @autoreleasepool
        {
            Person *p1 = [[[Person alloc] init] autorelease];
            p1.dog = d1;
            [d1 release];
        } //d1, p1 被销毁
        
        p2.dog = d3; // d2 被销毁
        
        [p2 release];//p2 被销毁
    } // d3 被销毁
    return 0;
}