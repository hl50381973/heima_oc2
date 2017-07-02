//
//  main.m
//  05-多文件开发
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
  士兵
  类名： CZSoldier
  属性： life
  行为： 开枪射击
 
  枪
  类名   CZGun
  属性   子弹个数，射程，型号
  行为   发射子弹
 
  子弹
  类名   CZBullet
  属性   杀伤力
  行为   飞向敌人
 
 
 */

//定义类

//创建子弹



@class CZSoldier;
//告诉编译器，这是一个类，但是类中有什么样的东西，@class 是不能告诉编译器的

//子弹声明
@interface CZBullet : NSObject
{
    @public
    int _power;//杀伤力
}


- (void) flyTo:(CZSoldier *) enemy;

@end

//枪声明
@interface CZGun : NSObject
{
@public
    int _bulletCount;//子弹个数
    double _shootRange;//射程
}

- (void) shootTo:(CZSoldier *)enemy usingBullet:(CZBullet *) bullet;

@end


//士兵声明
@interface CZSoldier : NSObject
{
    
@public
    NSString * _name;
    int _life;
}

-(void) shootTo:(CZSoldier *) other usingGun:(CZGun *) gun andBullet:(CZBullet *) bullet;

@end



//子弹的实现
@implementation CZBullet

- (void) flyTo:(CZSoldier *) enemy
{
    
    if (enemy->_life >= 10) {
         enemy->_life -= 10;
    }else{
        enemy->_life = 0;
    }
    
    NSLog(@"敌人被打了一枪");
    if (enemy->_life == 0 ) {
        NSLog(@"%@ 被干死了",enemy->_name);
    }
    

}

@end




@implementation CZGun

- (void) shootTo:(CZSoldier *)enemy usingBullet:(CZBullet *) bullet
{
    
    NSLog(@"开枪射击 %@",enemy->_name);
    [bullet flyTo:enemy];
}
@end


@implementation CZSoldier

-(void) shootTo:(CZSoldier *) other usingGun:(CZGun *) gun andBullet:(CZBullet *) bullet
{
    NSLog(@"%@ 使用枪射击 %@",_name,other->_name);
    [gun shootTo: other  usingBullet:bullet];
}

@end

/*
   在iOS开发中，一个类的声明就是一个头文件(.h)，一个类实现是一个实现文件(.m)
 */
int main(int argc, const char * argv[]) {
 
    CZSoldier * soldier1 = [CZSoldier new];
    soldier1->_name = @"大饼";
    soldier1->_life = 100;
    
    CZSoldier * enemy = [CZSoldier new];
    enemy->_name = @"油条";
    enemy->_life = 20;
    
    CZGun * gun = [CZGun new];
    gun->_bulletCount = 10;
    gun->_shootRange = 100;
    
    CZBullet * bullet = [CZBullet new];
    bullet->_power = 10;
    
    
    [soldier1 shootTo:enemy usingGun:gun andBullet:bullet];
    [soldier1 shootTo:enemy usingGun:gun andBullet:bullet];
    
    return 0;
}
