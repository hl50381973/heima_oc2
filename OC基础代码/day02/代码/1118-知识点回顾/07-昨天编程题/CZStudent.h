//
//  CZStudent.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZTools.h"

@interface CZStudent : NSObject
{
@public
    NSString *_name;//姓名
    CZDate _birthday;//生日
    int _age;
    float _height;
    float _weight;
    CZSex _sex;
    float _cScore;
    float _ocScore;
    float _iosScore;
}
/**跑步*/
- (void) run;
/**吃饭*/
- (void) eat;
/**学习*/
- (void) study;
/**睡觉*/
- (void) sleep;
/**比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareCScoreWithOther:(CZStudent *) other;
/**比较OC成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareOCScoreWithOther:(CZStudent *) other;
/**比较iOS成绩：跟另外一个学生比较iOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareiOSScoreWithOther:(CZStudent *) other;
/**计算总分：算出3科成绩的总分*/
- (float) totalScore;
/**计算平均分：算出3科成绩的平均分*/
- (float) averageScore;
@end
