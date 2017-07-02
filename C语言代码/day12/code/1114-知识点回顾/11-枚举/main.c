//
//  main.c
//  11-枚举
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  枚举：一个一个列举出来
  枚举作用：消除魔法数字
  使用场景：当某个东西只有那么几个取值时候就是用枚举
  定义枚举格式
     enum 枚举类型的名称{
     元素,//逗号
     ...
     };
 */
//定义性别枚举类型
enum Sex{
     Man,
     Woman,
     Other
};
/*
   注意点：
   1、枚举类型定义中，所有元素都是整形常量
   2、枚举类型的本质就是整形
   3、
 
 */

//int Man = 10;//枚举定义之后，后面不可定义与成员相同变量
void test()
{
    //  在代码中出现的这种表示特殊含义数字，我们魔法数字
    //    int sex = 0;
    
    enum Sex sex;
    printf("%d\n",Man);
    int Man = 10;
    printf("%d\n",Man);
    
    //    sex = 1;// 这里不能把要给数字赋值给一个枚举类型的变量，这样枚举存在的意义就没有了
    //    Man = 1;
    
}
// 可以指定枚举中每一个元素值
enum Season{
   Spring = 2,
   Summer,
   Autumn,
   Winter,
   SOther = 9
};

void PrintSeason(enum Season season)
{
    switch (season) {
        case Spring: //Case后面的值务必与枚举中成员一致，不要出现魔法数字
            printf("春季\n");
            break;
        case Summer:
            printf("夏季\n");
            break;
        case Autumn:
            printf("秋季\n");
            break;
        case Winter:
            printf("冬季\n");
            break;
        case SOther:
            printf("不是地球上季节\n");
            break;
        default:
            
            break;
    }
}



int main(int argc, const char * argv[]) {

    printf("%d,%d,%d\n",Man,Woman,Other);
    printf("%d,%d,%d,%d\n",Spring,Summer,Autumn,Winter);
    
    
    enum Season season = Summer;
    
    PrintSeason(season);
    
    return 0;
}
