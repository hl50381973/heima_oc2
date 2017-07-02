//
//  CZStudent.m
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZStudent.h"

@implementation CZStudent
/**跑步*/
- (void) run
{
    _height += 0.01;
    _weight -= 0.5;
    NSLog(@"身高 %.2f m,体重 %.2f kg",_height,_weight);
}
/**吃饭*/
- (void) eat
{
    _height += 0.01;
    _weight += 0.5;
    NSLog(@"身高 %.2f m,体重 %.2f kg",_height,_weight);
}

/**学习*/
- (void) study
{
    _cScore += 1;
    _ocScore += 1;
    _iosScore += 1;
    
    NSLog(@"c语言成绩 %.2f,OC语言成绩 %.2f,iOS语言成绩 %.2f",_cScore,_ocScore,_iosScore);
}
/**睡觉*/
- (void) sleep
{
        NSString  * birthday  = [CZTools convertDateToString:_birthday];
        NSLog(@"姓名 %@,生日 %@,年龄 %d, 身高 %.2f m,体重 %.2f kg,c语言成绩 %.2f,OC语言成绩 %.2f,iOS语言成绩 %.2f",
              _name,birthday,_age,_height,_weight,_cScore,_ocScore,_iosScore);
}
/**比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareCScoreWithOther:(CZStudent *) other
{
    return _cScore - other->_cScore;
}
/**比较OC成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareOCScoreWithOther:(CZStudent *) other
{
     return _ocScore - other->_ocScore;
}
/**比较iOS成绩：跟另外一个学生比较iOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareiOSScoreWithOther:(CZStudent *) other
{
         return _iosScore - other->_iosScore;
}
/**计算总分：算出3科成绩的总分*/
- (float) totalScore
{
    return _cScore + _ocScore + _iosScore;
}
/**计算平均分：算出3科成绩的平均分*/
- (float) averageScore
{
//  在类中(ˇˍˇ） 想 调用自己的方法就是使用self
//  谁调用这个方法self就是是谁
    return  [self totalScore] / 3;
}

@end
