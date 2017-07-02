
一、猜一猜这些代码片段分别会做什么。
1、 int card_count = 11;
    if (card_count > 10)
        printf("这副牌赢面很大,我要加注!");


2、char suit = 'H';
   switch(suit) {
       case 'C':
        printf("梅花(Clubs)");
        break;
    case 'D':
        printf("方块(Diamonds)");
        break;
    case 'H':
        printf("红心(Hearts)");
        break;
    default:
        printf("黑桃(Spades)");
   
   }

二、变身编译器(改错题（包括逻辑错误和语法错误）)
题目背景，BlackJack(21点游戏),
牌面大且不超过21点的为赢(10,J,Q、K均表示10点，
A既可以表示11点也可以表示1点,如果你牌面里有A或J，
会比相同点数，手里没有A或J大,
如果牌面超过21为爆牌，你就输了);
玩法：首先去掉大小王,每人先发两张牌，你可以试手中牌的点数决定是否要牌

在21点游戏中A为王牌，2~7为小牌
1、
    #include <stdio.h>
    int main() {
        int card = 1;
        if (card > 1)
        card = card - 1;
        if (card < 7)
            printf("小牌");
        else {
            printf("王牌!");
        }
        return 0;
    }

2、
#include <stdio.h>
int main() {
    int card = 1;
    if (card > 1) {
        card = card - 1;
        if (card < 7)
            printf("小牌");
        else {
            printf("王牌!");
        }
    }
    return 0;
}

3、
#include <stdio.h>
int main() {
    int card = 1;
    if (card > 1) {
        card = card - 1;
        if (card < 2)
            printf("小牌");
      
    }  else {
        printf("王牌!");
    }
    return 0;
}

4、
#include <stdio.h>
int main() {
    int card = 1;
    if (card > 1) {
        card = card - 1;
        if (card < 7)
            printf("小牌");
    else
        printf("王牌!");
    
    return 0;
}
    

    
三、编程实战
1、根据用户输入1~7的值，输出对应的星期几
2、根据用户输入1~12的值，输出对应的季节
   其中12,1,2 冬季，3,4,5为春季，6,7,8为夏季
   9，10，11为秋季
3、从键盘输入一个整数，判读是否是偶数，如果是偶数就是输出偶数，否则输出奇数
4、从键盘输出两个整数判断大小后，输出最大数

5、根据用户输入1~7的值，输出对应的星期几，使用switch
6、根据用户输入1~12的值，输出对应的季节，使用switch


最后、这里没有蠢问题：

1、什么是分支结构 ？
// 1、分支结构就相当于岔路口，代码可以根据情况来执行不同路径
2、请简要的描述if分支
// 如果if后面的条件成立那么就执行if后面的语句
// 如果if后面的条件不成了就执行else后面的语句
3、请简述switch分支
// 当switch后面小括号中的表达式与case后面的值相等，则执行这个case后面的语句
4、什么时候使用switch代替if
// 当变量或表达式只有几个固定的取值的时候，就是用switch来代替if,这样代码看起来更加简洁
5、使用switch的好处是什么
// 是用switch就是代码比较简洁，易于理解
6、我可以使用switch来检查字符串的值吗？
//   不可以，switch只能用来检查整形数

                              


