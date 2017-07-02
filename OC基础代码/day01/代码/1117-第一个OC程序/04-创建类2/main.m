//
//  main.m
//  04-创建类2
//
//  Created by Apple on 14/11/17.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 类名：Zombies
 属性：life,颜色,位置,形状
 行为：走,咬,死，loseLife
 
 炮弹
 类名：Cannonball
 属性：大小，威力，飞行距离，速度
 行为：飞，爆炸
 
 车
 类名：Car
 属性：载员，速度，牌照
 行为：跑，停
 
 学生
 类名：Student
 属性：姓名、学号，性别
 行为：学习，逃学
 
 手机：
 类名：Phone
 属性：大小，尺寸，颜色，_cup,内存
 行为：打电话，发短信
 */
//在OC中没有命名空间，也不支持包名
//在OC定义类、枚举、结构体的时候需要给它们加上前缀

//Zombies
//声明
typedef enum _CZColor{
    CZColorWhite,
    CZColorBlack,
    CZColorYellow
} CZColor;


typedef struct _CZPoint{
    int x;
    int y;
} CZPoint;


@interface CZZombies : NSObject
{
@public
    int _life;//生命值
    CZColor _color;//颜色
    CZPoint _position;//位置
}

/**
 *  走到那个位置
 *
 *  @param position 走到位置
 */
- (void) walkTo:(CZPoint) position;

- (void) bite;

@end


@implementation CZZombies

/**
 *  走到那个位置
 *
 *  @param position 走到位置
 */
- (void) walkTo:(CZPoint) position
{
    _position = position;

    NSLog(@"走到了(%d,%d)的位置",_position.x,_position.y);
}

- (void) bite
{
    NSLog(@"咬");
}




@end

void test()
{
    //  创建对象
    //  同一个类创建出来的多个对象之间没有什么关系，成员变量都是自己拥有的，与其他的对象没有任何关系
    CZZombies  *zombie   =  [CZZombies new];
    
    CZPoint position = {10,10};
    
    [zombie walkTo:position];
    
    
    
    CZZombies *zom = [CZZombies new];
    
    NSLog(@"zom 位置(%d,%d)",zom->_position.x,zom->_position.y);
}


/*
 手机：
 类名：IPhone
 属性：大小，颜色,型号
 行为：aboutPhone
      打电话，
      callTo:(char *) phoneNum
      发短信
      sendMessage:(NSString *) content to:(NSString *) phoneNum
 
 */

//定义一个大小的结构体

typedef struct _CZSize {
    double width;//宽
    double height;//高
} CZSize;

//为了防止与前面的冲突去掉前缀
typedef enum _Color{
    ColorWhite,
    ColorBlack,
    ColorYellow
} Color;

//定义手机类

//声明

@interface CZIPhone : NSObject
{
@public
    CZSize _size;//尺寸
    Color _color; // 颜色
    NSString * _model;//型号
}
/**
 *  关于手机
 */
- (void) aboutPhone;

/**
 *  打电话
 *
 *  @param phoneNum 手机号码
 */
- (void) callTo:(NSString *) phoneNum;

/**
 *  发送短信
 *
 *  @param content  短信内容
 *  @param phoneNum 手机号码
 */
- (void) sendMessage:(NSString *)content to:(NSString *) phoneNum;

@end


@implementation CZIPhone

/**
 *  关于手机
 */
- (void) aboutPhone
{
    NSLog(@"这一部%@ 颜色为%d,尺寸width = %.2lf,height = %.2lf",_model,_color,_size.width,_size.height);
}

/**
 *  打电话
 *
 *  @param phoneNum 手机号码
 */
- (void) callTo:(NSString *) phoneNum
{
    NSLog(@"给 %@ 打电话",phoneNum);
}

/**
 *  发送短信
 *
 *  @param content  短信内容
 *  @param phoneNum 手机号码
 */
- (void) sendMessage:(NSString *)content to:(NSString *) phoneNum
{
    NSLog(@"给 %@ 发送内容为 %@ 的短信",phoneNum,content);
}

@end


int main(int argc, const char * argv[]) {
   

//   创建对象
    CZIPhone *myPhone  = [CZIPhone new];
    
    myPhone->_color = ColorWhite;
    
    myPhone->_size = (CZSize){320,480};
    
    myPhone->_model = @"iPhone4s";
    
    [myPhone aboutPhone];
    
    [myPhone callTo:@"10086"];
    
    [myPhone sendMessage:@"老婆不回家吃饭了" to:@"110"];
    
    
    return 0;
}
