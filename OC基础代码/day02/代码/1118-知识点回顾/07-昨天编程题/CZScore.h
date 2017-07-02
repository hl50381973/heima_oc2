//
//  CZScore.h
//  1118-知识点回顾
//
//  Created by Apple on 14/11/18.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CZScore : NSObject
{
@public
    float _cScore; //C语言成绩
    float _ocScore; //OC成绩
    float _iosScore;//iOS成绩
}

/**比较C语言成绩：跟另外一个成绩对象比较C语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareCScoreWithOther:(CZScore *) other;
/**比较OC语言成绩：跟另外一个成绩对象比较OC语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareOCScoreWithOther:(CZScore *) other;
/**比较iOS语言成绩：跟另外一个成绩对象比较iOS语言成绩，返回成绩差（自己 - 其他成绩）*/
- (float) compareiOSScoreWithOther:(CZScore *) other;

/**计算总分：算出3科成绩的总分*/
- (float) totalScore;
/**计算平均分：算出3科成绩的平均分*/
- (float) averageScore;

@end
