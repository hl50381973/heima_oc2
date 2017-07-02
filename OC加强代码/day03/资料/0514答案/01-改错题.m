1.计数器的基本操作
// 假设有狗这个类
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

int main()
{
    Person *p = [[Person alloc] init];
    [p release];
    // 1. p 指向的内存已经被释放了，不能进行retain操作
   // [p retain];
    
    Person *p2 = [[Person alloc] init];
    // 2.dealloc 属于系统自动调用的方法
   // [p2 dealloc];
    [p2 release];
    
    Person *p3 = [[Person alloc] init];
    
    Dog *d = [[Dog alloc] init];
    
    p3.dog = d;
    
    // d的release要放到后面
    [d release];
    
    [p3 release];
    return 0;
}

2.@property
// 假设有Dog类、Car类
// 请找出不合理或者错误的地方
@interface Person : NSObject
// 1.把assign 该为retain
@property (nonatomic, retain) Car *car;
// 2.把retain 改为assign, 去掉atomic
@property (nonatomic, assign) int age;
// readonly 和readwrite 属于同一类属性 ，应去掉一个
@property (nonatomic, readwrite) int height;
// setter必须加个冒号:
@property (nonatomic, retain, setter=setMyDog:) Dog *dog;
@end

@implementation Person
- (void)dealloc
{
    [_car release];
    // 3._age 和 _height 不用release
//    [_age release];
//    [_height release];
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
        // 1. 把release 改为autorelease 
        Person *p = [[[Person alloc] init] autorelease];
        
        Person *p1 = [[[Person alloc] init] autorelease];
        
        // 2.重复 release 
        //[p1 release];
        
        // 3. release 过度了，去掉一个
        Person *p2 = [[[Person alloc] init] autorelease];
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
        } // 从这行开始， p 指向的内存已被释放
        
       // [p setAge:10];
    }
    return 0;
}