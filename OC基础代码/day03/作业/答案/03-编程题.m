1.设计2个类，类之间的关系自拟（比如继承、组合）
1> 车
(1)属性
* 轮子数
* 速度

(2)方法
* 属性相应的set和get方法

2> 客车
(1)属性
* 轮子数
* 速度
* 座位数

(2)方法
* 属性相应的set和get方法



//车
@interface CZVehicle : NSObject
{
    int _wheels;//轮子数
    int _speed;//速度
}

- (void) setWheels:(int) wheels;

- (int) wheels;

- (void) setSpeed:(int) speed;

- (int) speed;

@end

@implementation CZVehicle

- (void) setWheels:(int) wheels
{
    _wheels = wheels;
}

- (int) wheels
{
    return _wheels;
}

- (void) setSpeed:(int) speed
{
    _speed = speed;
}

- (int) speed
{
    return _speed;
}

@end

//客车 继承 车
@interface CZBus : CZVehicle
{
    int  _seats;//座位数
}

- (void) setSeats:(int) seats;

- (int) seats;

@end

@implementation CZBus

- (void) setSeats:(int) seats
{
    _seats = seats;
}

- (int) seats
{
    return _seats;
}

@end


/*----------------------------------------*/

2.设计3个类，类之间的关系自拟（比如继承、关联）
1> 人
(1)属性
* 姓名
* 年龄

(2)方法
* 属性相应的set和get方法
* 设计一个对象方法同时设置姓名和年龄

2> 书
(1)属性
* 书名
* 出版社名称
* 作者（包含姓名和年龄）

(2)方法
* 属性相应的set和get方法

3> 学生
* 姓名
* 年龄
* 学号
* 书（随身带着一本书）

2> 方法
* 属性相应的set和get方法
* 设计一个对象方法-study：输出书名

//人
@interface CZPerson : NSObject
{
    NSString * _name;//姓名
    int _age;//年龄
}

- (void) setName:(NSString *) name;

- (NSString *) name;

/**
 *  设置姓名和年龄
 */
- (void) setName:(NSString *)name andAge:(int) age;

@end

@implementation CZPerson

- (void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

/**
 *  设置姓名和年龄
 */
- (void) setName:(NSString *)name andAge:(int) age
{
    _name = name;
    _age = age;
}

@end


//书
@interface CZBook : NSObject
{
    NSString * _name;//书名
    NSString * _publishingHouse;//出版社名称
    NSString * _author;//作者
}

- (void) setName:(NSString *) name;

- (NSString *) name;

- (void) setPublishingHouse:(NSString *) publishingHouse;

- (NSString *) publishingHouse;

- (void) setAuthor:(NSString *) author;

- (NSString *) author;


@end

@implementation CZBook

- (void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

- (void) setPublishingHouse:(NSString *) publishingHouse
{
    _publishingHouse = publishingHouse;
}

- (NSString *) publishingHouse
{
    return  _publishingHouse;
}

- (void) setAuthor:(NSString *) author
{
    _author = author;
}

- (NSString *) author
{
    return _author;
}

@end


@interface CZStudent: CZPerson
{
    NSString * _no;
    CZBook * _book;
}

- (void) setNo:(NSString *) no;

- (NSString *) no;

- (void) setBook:(CZBook *) book;

- (CZBook *) book;

@end

@implementation CZStudent

- (void) setNo:(NSString *) no
{
    _no = no;
}

- (NSString *) no
{
    return _no;
}

- (void) setBook:(CZBook *) book
{
    _book = book;
}

- (CZBook *) book
{
    return _book;
}

@end

/*----------------------------------------*/

3.设计Car类
1> 属性
* 速度

2> 方法
* 属性相应的set和get方法
* 一个对象方法跟其他车子比较车速，返回速度差
* 一个类方法比较两辆车的车速，返回速度差

@interface CZCar : NSObject
{
    int _speed;//速度
}

- (void) setSpeed:(int) speed;

- (int) speed;
/**一个对象方法跟其他车子比较车速，返回速度差*/
- (int) compareSpeedWithOther:(CZCar *) car;
/**一个类方法比较两辆车的车速，返回速度差*/
+ (int) compareSpeedOfCar:(CZCar *) one withOther:(CZCar *) other;

@end


@implementation CZCar


- (void) setSpeed:(int) speed
{
    _speed = speed;
}

- (int) speed
{
    return _speed;
}
/**一个对象方法跟其他车子比较车速，返回速度差*/
- (int) compareSpeedWithOther:(CZCar *) car
{
    return _speed - [car speed];
}
/**一个类方法比较两辆车的车速，返回速度差*/
+ (int) compareSpeedOfCar:(CZCar *) one withOther:(CZCar *) other
{
    return [one speed] - [other speed];
}
@end
/*----------------------------------------*/

5.设计一个类Point2D，用来表示二维平面中某个点
1> 属性
* double x
* double y

2> 方法
* 属性相应的set和get方法
* 设计一个对象方法同时设置x和y
* 设计一个对象方法计算跟其他点的距离
* 设计一个类方法计算两个点之间的距离

3> 提示
* C语言的math.h中有个函数：double pow(double n, double m); 计算n的m次方
* C语言的math.h中有个函数：double sqrt(double n); 计算根号n的值（对n进行开根）

//Point2D类
@interface CZPoint2D : NSObject
{
    double _x;
    double _y;
}

- (void) setX:(int) x;

- (int) x;

- (void) setY:(int) y;

- (int) y;
/**同时设置x和y*/
- (void) setX:(int)x andY:(int) Y;
/**对象方法计算跟其他点的距离*/
- (double) distanceWithOther:(CZPoint2D *) other;
/**类方法计算两个点之间的距离*/
+ (double) distanceOfOnePoint:(CZPoint2D *) one andOther:(CZPoint2D *) other;


@end


@implementation CZPoint2D

- (void) setX:(int) x
{
    _x = x;
}

- (int) x
{
    return _x;
}

- (void) setY:(int) y
{
    _y = y;
}

- (int) y
{
    return _y;
}
/**同时设置x和y*/
- (void) setX:(int)x andY:(int) y
{
    _x = x;
    _y = y;
}
/**对象方法计算跟其他点的距离*/
- (double) distanceWithOther:(CZPoint2D *) other
{
    int distanceX = _x - [other x];
    int distanceY = _y - [other y];
    
    return sqrt(distanceX * distanceX + distanceY * distanceY);
}
/**类方法计算两个点之间的距离*/
+ (double) distanceOfOnePoint:(CZPoint2D *) one andOther:(CZPoint2D *) other
{
    return  [one distanceWithOther:other];
}

@end


/*----------------------------------------*/

5.设计一个类Circle，用来表示二维平面中的圆
1> 属性
* double _radius （半径）
* Point2D *_point （圆心）

2> 方法
* 属性相应的set和get方法
* 设计一个对象判断跟其他圆是否重叠（重叠返回YES，否则返回NO）
* 设计一个类方法判断两个圆是否重叠（重叠返回YES，否则返回NO）

@interface CZCircle : NSObject
{
    double _radius;//半径
    CZPoint2D *_point;//圆心
}

- (void) setRadius:(double) radius;

- (double) radius;

- (void) setPoint:(CZPoint2D *) point;

- (CZPoint2D *) point;
/**判断跟其他圆是否重叠（重叠返回YES，否则返回NO）*/
- (BOOL) isOverlapWithOther:(CZCircle *) other;
/**类方法判断两个圆是否重叠（重叠返回YES，否则返回NO）*/
+ (BOOL) isOverlapOneCircle:(CZCircle *) one withOther:(CZCircle *) other;


@end

@implementation CZCircle

- (void) setRadius:(double) radius
{
    _radius = radius;
}

- (double) radius
{
    return _radius;
}

- (void) setPoint:(CZPoint2D *) point
{
    _point = point;
}

- (CZPoint2D *) point
{
    return _point;
}
/**判断跟其他圆是否重叠（重叠返回YES，否则返回NO）*/
- (BOOL) isOverlapWithOther:(CZCircle *) other
{
    double distance = [_point distanceWithOther:[other point]];
    return distance < _radius + [other radius];
}
/**类方法判断两个圆是否重叠（重叠返回YES，否则返回NO）*/
+ (BOOL) isOverlapOneCircle:(CZCircle *) one withOther:(CZCircle *) other
{
    return [one isOverlapWithOther:other];
}
@end





