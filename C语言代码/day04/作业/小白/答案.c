一、改错题
1.
#include <stdio.h>
int main()
{
    
    int a = 10;
    
    switch (a)
    {
            /*
             case 0:
             int b = 20 + a;
             break;
             */
            // 如果在case中定义了新的变量，必须用大括号{}包住
        case 0:
        {
            int b = 20 + a;
            break;
        }
            
        case 2:
            
            break;
    }
    
    return 0;
}
// 1处错误

二、分析题：
1.	判断输出结果
int x = 2,y=3;
switch(x)
{
    case 2:
        y++;// y = 3
    case 3:
        y+=2;//y = 5
    case 4:
        y+=3;//y = 8
    default:
        y = 0;//y = 0
        break;
}
printf("y=%d\n", y);//输出结果为 0
//此题主要是考查，只有遇到break或与遇到switch语句的 “}”，switch才会退出


2.	判断输出结果
int x = 1,y = 1;
if(x++==2 || ++y==2) {
    x =7;
}
printf("x=%d, y=%d\n", x, y);
/*
 由于比较运算符的优先级高于逻辑运算符的优先级
 所以 x++==2 || ++y==2 等价于  （x++==2） || （++y==2）
 整体上他是一个||运算，由于逻辑运算符的结合性是从左到右的
 所以先计算 x++ == 2
 ++在后先参与其他运算然后自身+1，
 那么就是  x++ == 2 就是 1 == 2，
 它的运算结果为假，它会计算后面的表达式
 ++y,++在前先自身+1，然后参与其他运算
 所以++y == 2 就是 2 == 2，它为真
 所以整个x++==2 || ++y==2 为真
 条件为真if会执行{ 和 } 中的语句
 所以 x = 7 , y = 2
 
 */

3．以下程序的运行结果是（）。
#include <stdio.h>
int main()
{ int a=1;
    if (a++>1)  // 1 > 1 ?  a = 2
        printf(”%d\n”, a);
    else
        printf(”%d\n”, a--);//输出 2 , a = 1
    return 0;
}

4．以下程序的输出结果是（）。
#include <stdio.h>
int main()
{
    int a=5, b=4, c=6, d;
    printf(”%d\n”, d=a>b? a>c?a:c :b);
    
    return 0;
}
/*
 此题考察条件运算符嵌套，条件运算符也是从左向右计算的，
 首先 5 > 4 ? 为真则执行 ? 后面 :b前面的表达式
 5 > 6 ? 5 : 6, 5 < 6为假，则返回 6 所以d = 6
 又因为赋值运算符也有返回值，它的返回值就是变量中存放的值
 所以此题会输出 6
 
 
*/



5．若a、b、c1、c2、x、y均为整型变量，正确的switch 语句是（）。
A．switch (a+b); /*多了一个分号*/                   B．switch a 少了一个括号
{
case 1: y=a+b; break;                       {  case c1: y=a-b; break;
case 0: y=a-b;                                  case c2: x=a*d; break;
    break;                                      default: x=a+b;
}                                           }
C．switch (a*a+b*b) /*case中有相同的值*/        D．switch(a-b)//defaul可以放在任意位置
{ case 3:                                   {   default: y=a*b;
                                                break;//default放到前面必须使用break。
case 1: y=a+b; break;                           case 3: x=a+b; break;
case 3: y=b-a; break;                           case 10: case 11: y=a-b; break;
}
                                             }

11．以下程序的运行结果是（）。
#include <stdio.h>
main()
{
    int a=2,b= -1,c=2;
    if (a<b)
        if (b<0)
            c=0;
        else c++;
    printf(”%d\n”,c);
}
//谨记：
//1、省略{和}的if只对第一句有效
//2、if  与  else 是一个整体
//对于省略{和}的if首先要给他加上{ 和 }
//首先自上而下的去找else,找到else就去向上找if,找到的第一个if则与这个else配对
//所以上面的代码为
#include <stdio.h>
main()
{
    int a=2,b= -1,c=2;
    if (a<b){// 2 < -1 ? 为假
        if (b<0){
            c=0;
        }else{
            c++;
        }
    }
    printf(”%d\n”,c);// 输出 2
}

三、编程题

1.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    //    提示输入信息
    printf("输入一个整数\n");
    //    接收输入信息
    int value;
    scanf("%d", &value);
    //    判断是否能被2整除
    if (value%2 == 0) {
        //    输出偶数
        printf("%d 是偶数！\n", value);
    }
    return 0;
}

2.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    //    提示输入信息
    printf("输入四科成绩用逗号隔开\n");
    //    接收输入信息
    int s1, s2, s3, s4;
    scanf("%d,%d,%d,%d", &s1, &s2, &s3, &s4);
    //    定义最大值最小值，并默认第一门成绩为最值
    int min,max;
    min = max = u;
    //    求出最大值
    //如果s2 > max 就将s2中的值赋值给max,那么max就是 s1,s,2中较大的
    if(s2 > max){
        max = s2;
    }
    if (s3 > max) {
        max = s3;
    }
    //求出最小值
    if(s2 < min){
        min = s2;
    }
    if (s3 < min) {
        min = s3;
    }
    
    //    输出结果
    printf("min = %d, max = %d", min, max);
    
    return 0;
}

3.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    float salary = 500;
    //    提示输入
    printf("请输入员工本月销售额");
    //    接受输入
    int profit;
    scanf("%d",&profit);
    
    //    计算销售系数
    int k;
    if (profit % 1000 == 0) {
        k = profit/1000;
    }else{
        k = profit/1000 + 1;
    }
    
    switch (k) {
            //            没有提成
        case 0:
        case 1:
        case 2:
            break;
            //            提成8%
        case 3:
        case 4:
        case 5:
            salary += profit * 0.08;
            break;
            //            提成10%
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            salary += profit * 0.1;
            break;
            //            提成12%
        default:
            salary += profit * 0.12;
            break;
    }
    //    输出总金
    printf("员工这个月的工资为%.3f", salary);
    return 0;
}

