第1题：对象的操作、对象作为函数参数
#import <Foundation/Foundation.h>
@interface Person : NSObject
{
    @public
    int age;//60
    double height;//1.9
}
- (void)print;
@end

void test1(int newAge, double newHeight);
void test2(Person *newP);
void test3(Person *newP);
void test4(Person *newP);

int main()
{
    Person *p = [Person new];
    p->age = 10;
    p->height = 1.5f;
    
    test1(p->age, p->height);
    [p print];// 10, 1.5
    
    test2(p);
    [p print];//20, 1.7
    
    test3(p);
    [p print];//20, 1.7
    
    test4(p);
    [p print];//60, 1.9
    
    return 0;
}

@implementation Person
- (void)print
{
    NSLog(@"年龄=%d，身高=%f", age, height);
}
@end

void test1(int newAge, double newHeight)
{
    newAge = 10;
    newHeight = 1.6;
}

void test2(Person *newP)// Person *newP = p
{
    newP->age = 20;
    newP->height = 1.7;
}

void test3(Person *newP)// Person *newP = p
{
    Person *p2 = [Person new];
    p2->age = 40;
    p2->height = 1.8;
    newP = p2;
    
    newP->age = 30;
}

void test4(Person *newP)// Person *newP = p
{
    Person *p2 = newP;// p2 = newp = p
    p2->age = 50;
    p2->height = 1.9;
    newP->age = 60;
}

第2题：匿名对象
#import <Foundation/Foundation.h>
@interface Person : NSObject
{
    @public
    int age;
    double height;
}
- (void)print;
@end

@implementation Person
- (void)print
{
    NSLog(@"年龄=%d，身高=%f", age, height);
}
@end

int main()
{
//  每一个new出来对象都是新对象，与另外的对象没有半毛钱关系
    [Person new]->age = 10;
    [Person new]->height = 1.8;
    [[Person new] print];
    return 0;
}
