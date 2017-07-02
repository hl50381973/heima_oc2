//
//  main.m
//  07-昨天编程题
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZDog.h"
/*
  编译 command + B
  运行 command + R
 
 */


void test1()
{
    CZDog *dog = [CZDog new];
    dog->_color = CZColorBlack;
    dog->_sex = CZSexMan;
    dog->_speed = 10;
    dog->_weight = 30;
    
    CZDog *other = [CZDog new];
    other->_color = CZColorYellow;
    other->_sex = CZSexOther;
    other->_speed = 5;
    other->_weight = 30;
    
    [dog eat];
    [dog bark];
    [dog run];
    
    BOOL isSame  = [dog compareColorWithOtherDog:other];
    
    if (isSame) {
        NSLog(@"颜色一样！");
    }else{
        NSLog(@"颜色不一样！");
    }
    
    int rs = [dog compareSpeedWithOtherDog:other];
    NSLog(@"速度差为 %d",rs);
    
}



#import "CZPerson.h"

void test2()
{
    CZPerson * person = [CZPerson new];
    person->_name = @"大木";
    
    CZDog *dog = [CZDog new];
    dog->_color = CZColorBlack;
    dog->_sex = CZSexMan;
    dog->_speed = 10;
    dog->_weight = 30;
    
    person->_dog = dog;
    
    [person feedDog];
    [person walkDog];
}

#import "CZStudent.h"
void test3()
{
    CZStudent *stu1 = [CZStudent new];
    stu1->_age = 10;
    stu1->_name = @"张三";
    stu1->_birthday = (CZDate){2004,11,18};
    stu1->_sex = CZSexMan;
    stu1->_height = 1.5;
    stu1->_weight = 40;
    stu1->_cScore = 88;
    stu1->_ocScore = 89;
    stu1->_iosScore = 90;
    
    float aver = [stu1 averageScore];
    NSLog(@"%.2f",aver);
    
    [stu1 run];
    [stu1 eat];
    [stu1 study];
    [stu1 sleep];
    
    CZStudent *stu2 = [CZStudent new];
    stu2->_age = 10;
    stu2->_name = @"李四";
    stu2->_birthday = (CZDate){2004,11,18};
    stu2->_sex = CZSexMan;
    stu2->_height = 1.5;
    stu2->_weight = 40;
    stu2->_cScore = 80;
    stu2->_ocScore = 100;
    stu2->_iosScore = 100;
    
    
    float cMimus =  [stu1  compareCScoreWithOther:stu2];
    float ocMimus =  [stu1  compareOCScoreWithOther:stu2];
    float iosMimus =  [stu1  compareiOSScoreWithOther:stu2];
    
    NSLog(@"c：%.2f,oc：%.2f,iOS：%.2f",cMimus,ocMimus,iosMimus);
    
}

//测试4、5

#import "CZScore.h"
#import "CZNewStudent.h"
int main(int argc, const char * argv[]) {
   
//  创建学生
    
    CZNewStudent *stu1 = [CZNewStudent new];
    stu1->_name = @"小白";
    stu1->_no = @"001";
    
//   创建成绩对象
    CZScore *score1 = [CZScore new];
    score1->_cScore = 59;
    score1->_ocScore = 80;
    score1->_iosScore = 100;
//  此处必须给它一个对象
    stu1->_score = score1;
    

    //  创建学生
    
    CZNewStudent *stu2 = [CZNewStudent new];
    stu2->_name = @"小牛";
    stu2->_no = @"002";
    
    //   创建成绩对象
    CZScore *score2 = [CZScore new];
    score2->_cScore = 100;
    score2->_ocScore = 80;
    score2->_iosScore = 59;
    //  此处必须给它一个对象
    stu2->_score = score2;
    
    float cMinus = [stu2 compareCScoreWithOther:stu1];
    
    float ocMinus = [stu2 compareOCScoreWithOther:stu1];
    
    float iosMinus = [stu2 compareiOSScoreWithOther:stu1];
    
    float totalMinus = [stu2 compareTotalScoreWithOther:stu1];
    
    float averageMinus = [stu2 compareAverageScoreWithOther:stu1];
    
    NSLog(@"C的差值%.2f,OC的差值%.2f,iOS的差值%.2f,totalScore的差值%.2f,averageScore的差值%.2f,",
          cMinus,ocMinus,iosMinus,totalMinus,averageMinus);
    
    
    return 0;
}
