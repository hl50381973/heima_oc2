//
//  CZScore.m
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "CZScore.h"

@implementation CZScore

/**比较C语言成绩：跟另外一个成绩对象比较C语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareCScoreWithOther:(CZScore *) other
{
    return _cScore - other->_cScore;
}
/**比较OC语言成绩：跟另外一个成绩对象比较OC语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareOCScoreWithOther:(CZScore *) other
{
    return _ocScore - other->_ocScore;
}
/**比较iOS语言成绩：跟另外一个成绩对象比较iOS语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareiOSScoreWithOther:(CZScore *) other
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
    return [self totalScore] / 3;
}


@end
