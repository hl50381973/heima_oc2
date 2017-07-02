要求：
* 类名、属性名、属性类型、方法名、方法参数、方法返回值自拟
* 自己写main函数测试设计是否合理

1.设计一个”狗“类
1> 属性
* 颜色
* 速度（单位是m/s）
* 性别
* 体重（单位是kg）

2> 行为
* 吃：每吃一次，体重增加0.5kg，输出吃完后的体重
* 吠（叫）：输出所有的属性
* 跑：每吃一次，体重减少0.5kg，输出速度和跑完后的体重
* 比较颜色：跟别的狗比较颜色，如果一样，返回YES，不一样，返回NO
* 比较速度：跟别的狗比较速度，返回速度差（自己的速度 - 其他狗的速度）

2.结合前面的“狗”类，设计一个“人”类
1> 属性
* 姓名
* 狗（养了一条狗）

2> 行为
* 喂狗：每喂一次，狗就会执行“吃”这个行为
* 遛狗：每溜一次，狗就会执行“跑”这个行为

#pragma mark - 狗类
typedef enum
{
    kIColorBlack,
    kIColorGreen,
    kIColorBlue
}IColor;

typedef enum
{
    kSexMale,
    kSexFeMale,
    KSexYao
}Sex;

@interface Dog : NSObject
{
@public
    IColor _color;// 颜色
    int _speed;// 速度
    Sex _sex;// 性别
    float _weight;// 体重
    
}

// 吃
- (void)eat;
// 咆哮
- (void)bar
// 跑
- (void)run;
/**
 *  比较颜色
 *
 *  @param other 其它狗
 *
 *  @return 颜色是否相等
 */
- (BOOL)isSameColorWithOther:(Dog *)other;

//比较速度
- (int)compareSpeedWithOther:(Dog *)other;

@end

@implementation Dog

- (void)eat
{
    _weight += 0.5;
    NSLog(@"current weight = %f", _weight);
}

- (void)bark
{
    NSLog(@"color = %d, speed = %d, sex = %d, weight = %f", _color, _speed, _sex, _weight);
}

- (void)run
{
    _weight -= 0.5;
    NSLog(@"current weight = %f", _weight);
}

- (BOOL)isSameColorWithOther:(Dog *)other// other == d2
{
    //    _color 拿到当前对象的颜色
    //    other->_color 拿到其它狗的颜色
    return _color == other->_color;
}

- (int)compareSpeedWithOther:(Dog *)other
{
    return _speed - other->_speed;
}
@end

#pragma mark - 人类
@interface Person : NSObject
{
@public
    NSString *_name;// 名称
    Dog *_dog;// 狗 0fcc1
}

// 喂狗
- (void)feedDog;
// 遛狗
- (void)liuDog;

@end

@implementation Person

- (void)feedDog
{
    //    调用狗的吃东西方法
    [_dog eat];
}

- (void)liuDog
{
    [_dog run];
}
@end


#pragma mark - 主函数
int main(int argc, const char * argv[])
{
    
    //    1.创建人对象
    Person *p = [Person new];
    p->_name = @"jack";
    
    //    2.创建一条狗
    Dog *d = [Dog new];
    d->_color = kIColorBlack;
    d->_sex = KSexYao;
    
    //    把狗给人
    p->_dog = d;//0fcc1
    
    [p feedDog];
    [p liuDog];
    return 0;
}

void testDog()
{
    Dog *d = [Dog new];
    d->_color = kIColorGreen;
    d->_sex = KSexYao;
    d->_speed = 250;
    d->_weight = 60;
    
    //    [d eat];
    //    [d bark];
    //    [d run];
    
    Dog *d2 = [Dog new];
    d2->_color = kIColorBlue;
    d2->_sex = KSexYao;
    d2->_speed = 150;
    d2->_weight = 60;
    
    //    调用d这条狗的比较方法比较自己和其它狗的颜色是否相等
    BOOL isSame = [d isSameColorWithOther:d2];
    NSLog(@"%d", isSame);
    
    int minus = [d compareSpeedWithOther:d2];
    NSLog(@"minus = %d", minus);
}




3.设计一个”学生“类
1> 属性
* 姓名
* 生日
* 年龄
* 身高（单位是m）
* 体重（单位是kg）
* 性别
* C语言成绩
* OC成绩
* iOS成绩

2> 行为
* 跑步：每跑步一次，身高增加1cm，体重减小0.5kg，输出跑完后的体重
* 吃饭：每吃一次，身高增加1cm，体重增加0.5kg，输出吃完后的体重
* 学习：每学习一次，3可成绩各加1分，输出学习完后的3科成绩
* 睡觉：输出所有的属性
* 比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）
* 比较OC成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）
* 比较iOS成绩：跟另外一个学生比较iOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）
* 计算总分：算出3科成绩的总分
* 计算平均分：算出3科成绩的平均分

//定义性别的枚举
typedef enum {
    SexMan,
    SexWoman
} Sex;

/**
 声明一个学生类
 */
@interface Student : NSObject
{
@public
    //姓名
    NSString * _name;
    //   生日：格式 1999-01-15
    NSString * _birthDay;
    //  年龄
    int _age;
    //  身高 (单位 m)
    float _height;
    //  体重
    float _weight;
    //  性别
    Sex _sex;
    //  C语言成绩
    float _cScore;
    //  OC成绩
    float _ocScore;
    //  ios成绩
    float _iosScore;
    
}

/** 跑步：每跑步一次，身高增加1cm，体重减小0.5kg，输出跑完后的体重*/
- (void) run;

/**吃饭：每吃一次，身高增加1cm，体重增加0.5kg，输出吃完后的体重 */
- (void) eat;
/** 学习：每学习一次，3可成绩各加1分，输出学习完后的3科成绩*/
- (void) learning;
/**  睡觉：输出所有的属性*/
- (void) sleep;

/** 比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareCScoreWithOther:(Student *) other;


/** 比较OC语言成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareOCScoreWithOther:(Student *) other;

/** 比较IOS语言成绩：跟另外一个学生比较IOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareIOSScoreWithOther:(Student *) other;

/** 计算总分：算出3科成绩的总分 */
- (float) totalScroe;
/** 计算平均分：算出3科成绩的平均分 */
- (float) averageScore;

@end


@implementation Student

/** 跑步：每跑步一次，身高增加1cm，体重减小0.5kg，输出跑完后的体重*/
- (void) run
{
    _height += 1;
    _weight -= 0.5;
    NSLog(@"跑完步的体重是:%.2f",_weight);
    
}

/**吃饭：每吃一次，身高增加1cm，体重增加0.5kg，输出吃完后的体重 */
- (void) eat
{
    _height += 1;
    _weight += 0.5;
    NSLog(@"吃完饭的体重是:%.2f",_weight);
}
/** 学习：每学习一次，3可成绩各加1分，输出学习完后的3科成绩*/
- (void) learning
{
    _cScore += 1;
    _ocScore += 1;
    _iosScore += 1;
    NSLog(@"c语言成绩为：%.2f,OC成绩%.2f,IOS成绩%.2f",_cScore,_ocScore,_iosScore);
}
/**  睡觉：输出所有的属性*/
- (void) sleep
{
    NSLog(@"_name = %@,_birthday = %@, _age = %d,_height = %.2f,_weight = %.2f,_Sex = %d,_cScore=%.2f,_ocScore=%.2f,_iosScore=%.2f",_name,_birthDay,_age,_height,_weight,_sex,_cScore,_ocScore,_iosScore);
}

/** 比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareCScoreWithOther:(Student *) other
{
    return _cScore - other->_cScore;
}


/** 比较OC语言成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareOCScoreWithOther:(Student *) other
{
    return _ocScore - other->_ocScore;
}

/** 比较IOS语言成绩：跟另外一个学生比较IOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareIOSScoreWithOther:(Student *) other
{
    return _iosScore - other->_iosScore;
}
/** 计算总分：算出3科成绩的总分 */
- (float) totalScroe
{
    return _cScore + _ocScore + _iosScore;
}
/** 计算平均分：算出3科成绩的平均分 */
- (float) averageScore
{
    return  [self totalScroe] / 3;
}


@end


int main(int argc, const char * argv[])
{
    
    //  定义一个student 对象
    Student *student = [Student new];
    //  为对象的属性赋值
    student->_name = @"张三";
    student->_birthDay = @"1999-1-10";
    student->_age = 15;
    student->_height = 1.5f;
    student->_weight = 30;
    student->_sex = SexWoman;
    student->_cScore = 80;
    student->_ocScore = 90;
    student->_iosScore = 100;
    
    [student run];
    [student eat];
    [student learning];
    [student sleep];
    
    
    Student *other = [Student new];
    
    other->_name = @"李四";
    other->_birthDay = @"1999-1-10";
    other->_age = 15;
    other->_height = 1.5f;
    other->_weight = 30;
    other->_sex = SexWoman;
    other->_cScore = 100;
    other->_ocScore = 80;
    other->_iosScore = 90;
    
    
    float cMinus = [student compareCScoreWithOther:other];
    NSLog(@"%@ 与 %@ c语言分数差为：%.2f",student->_name,other->_name ,cMinus);
    float ocMinus = [student compareOCScoreWithOther:other];
    NSLog(@"%@ 与 %@ oc语言分数差为：%.2f",student->_name,other->_name ,ocMinus);
    float iosMinus = [student compareIOSScoreWithOther:other];
    NSLog(@"%@ 与 %@ ios语言分数差为：%.2f",student->_name,other->_name ,iosMinus);
    
    float totalScore = [student totalScroe];
    
    NSLog(@"%@ 的总成绩为：%.2f",student->_name,totalScore);
    
    NSLog(@"%@ 的平均分为：%.2f",student->_name,[student averageScore]);
    
    return 0;
    
}


4.设计一个成绩类
1> 属性
* C语言成绩
* OC成绩
* iOS成绩

2> 行为
* 比较C语言成绩：跟另外一个成绩对象比较C语言成绩，返回成绩差（自己 - 其他成绩）
* 比较OC成绩：跟另外一个成绩对象比较OC语言成绩，返回成绩差（自己 - 其他成绩）
* 比较iOS成绩：跟另外一个成绩对象比较iOS语言成绩，返回成绩差（自己 - 其他成绩）
* 计算总分：算出3科成绩的总分
* 计算平均分：算出3科成绩的平均分
//定义一个成绩类

@interface Score : NSObject
{
    @public
    float _cScore;//c语言成绩
    float _ocScore;//oc成绩
    float _iosScore;//ios成绩
}
/**比较C语言成绩：跟另外一个成绩对象比较C语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareCScoreWithOther:(Score *) other;
/**比较OC成绩：跟另外一个成绩对象比较OC语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareOCScoreWithOther:(Score *) other;
/**比较iOS成绩：跟另外一个成绩对象比较iOS语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareIOSScoreWithOther:(Score *) other;
/**  计算总分：算出3科成绩的总分*/
- (float) totalScore;

/** 计算平均分：算出3科成绩的平均分 */
- (float) averageScore;
@end


@implementation Score

/**比较C语言成绩：跟另外一个成绩对象比较C语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareCScoreWithOther:(Score *) other
{
    return _cScore - other->_cScore;
}
/**比较OC成绩：跟另外一个成绩对象比较OC语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareOCScoreWithOther:(Score *) other
{
    return _ocScore - other->_ocScore;
}
/**比较iOS成绩：跟另外一个成绩对象比较iOS语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareIOSScoreWithOther:(Score *) other
{
    return _iosScore - other->_iosScore;
}
/**  计算总分：算出3科成绩的总分*/
- (float) totalScore
{
    return _cScore + _ocScore + _iosScore;
}

/** 计算平均分：算出3科成绩的平均分 */
- (float) averageScore
{
    return [self totalScore] / 3;
}

@end


5.利用前面的成绩类，重新设计一个学生类
1> 属性
* 姓名
* 学号
* 成绩（包括3科成绩）

2> 行为
* 比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）
* 比较OC成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）
* 比较iOS成绩：跟另外一个学生比较iOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）
* 比较总分：跟另外一个学生比较总分，返回成绩差（自己的成绩 - 其他人的成绩）
* 比较平均分：跟另外一个学生比较平均分，返回成绩差（自己的成绩 - 其他人的成绩）


/**学生类*/
@interface Student : NSObject
{
@public
    //  姓名
    NSString * _name;
    //   学号
    int _no;
    //   成绩
    Score * _score;
}
/**比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareCScoreWithOther:(Student *) other;

/**比较OC成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareOCScoreWithOther:(Student *) other;

/**比较iOS成绩：跟另外一个学生比较iOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareIOSScoreWithOther:(Student *) other;

/**比较总分：跟另外一个学生比较总分，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareTotalScoreWithOther:(Student *) other;

/**比较平均分：跟另外一个学生比较平均分，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareAverageScoreWithOther:(Student *) other;
@end


@implementation Student

/**比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareCScoreWithOther:(Student *) other
{
    return _score->_cScore - other->_score->_cScore;
}

/**比较OC成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareOCScoreWithOther:(Student *) other
{
    return _score->_ocScore - other->_score->_ocScore;
}

/**比较iOS成绩：跟另外一个学生比较iOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareIOSScoreWithOther:(Student *) other
{
    return _score->_iosScore - other->_score->_iosScore;
}

/**比较总分：跟另外一个学生比较总分，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareTotalScoreWithOther:(Student *) other
{
    return [_score totalScore] - [other->_score totalScore];
}
/**比较平均分：跟另外一个学生比较平均分，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareAverageScoreWithOther:(Student *) other;
{
    return [_score averageScore] - [other->_score averageScore];
}
@end





