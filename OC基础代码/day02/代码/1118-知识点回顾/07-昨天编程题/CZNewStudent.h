//
//  CZNewStudent.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZScore.h"

@interface CZNewStudent : NSObject
{
@public
    NSString * _name;
    NSString * _no;
    CZScore *_score;
}


/**比较C语言成绩：跟另外一个学生比较C语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareCScoreWithOther:(CZNewStudent *) other;
/**比较OC成绩：跟另外一个学生比较OC语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareOCScoreWithOther:(CZNewStudent *) other;
/**比较iOS成绩：跟另外一个学生比较iOS语言成绩，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareiOSScoreWithOther:(CZNewStudent *) other;
/**比较总分：跟另外一个学生比较总分，返回成绩差（自己的成绩 - 其他人的成绩*/
- (float) compareTotalScoreWithOther:(CZNewStudent *) other;
/**比较平均分：跟另外一个学生比较平均分，返回成绩差（自己的成绩 - 其他人的成绩）*/
- (float) compareAverageScoreWithOther:(CZNewStudent *) other;

@end
