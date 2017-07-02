一、改错题
1.
#include <stdio.h>

int main()
{
    
    int a = 10;
    
    switch (a)
    {
        case 0:
            int b = 20 + a;
            break;
            
        case 2:
            //int b= 20+a;
            break;
    }
    
    return 0;
}

二、分析题
1.	判断输出结果
int x = 2,y=3;
switch(x)
{
    case 2:
        y++;//3
    case 3:
        y+=2;//4+2=6
    case 4:
        y+=3;//6+3=9
    default:
        y = 0;
        break;
}
printf("y=%d\n", y);//0


2.	判断输出结果
int x = 1,y = 1;
if(x++==2 || ++y==2) {
    x =7;
}
printf("x=%d, y=%d\n", x, y);

3．以下程序的运行结果是（）。
#include <stdio.h>
int main()
{
    int a=1;
    if (a++>1)
        printf(”%d\n”, a);
    else
        printf(”%d\n”, a--);//2
    return 0;
}

4．以下程序的输出结果是（）。
#include ”stdio.h”
main()
{
    int a=5, b=4, c=6, d;
    printf(”%d\n”, d=a>b? a>c?a:c :b);//6
}

5．若a、b、c1、c2、x、y均为整型变量，正确的switch 语句是（）。//b
A．switch (a+b);                    B．switch a
{
case 1: y=a+b; break;               {  case c1: y=a-b; break;
case 0: y=a-b;                        case c2: x=a*d; break;
    break;                       default: x=a+b;
}                                 }
C．switch (a*a+b*b)                 D．switch(a-b)
{ case 3:                          {  default: y=a*b; break;
case 1: y=a+b; break;                 case 3: x=a+b; break;
case 3: y=b-a; break;                 case 10: case 11: y=a-b; break;
}
}


11．以下程序的运行结果是（）。
#include ”stdio.h”
main()
{
    int a=2,b= -1,c=2;
    if (a<b)
    if (b<0)
        c=0;
    else c++;
    printf(”%d\n”,c);//0
}


三、编程题
1.
/*
 利用简单分支选择语句判断输入的一个整数是否是偶数
 */

2.
/*
 编写一个程序，要求从键盘上输入某哥学生的四科成绩，求出该学生的最高分和最低分
 */

3.
/*
 已知某公司员工的工资底薪为500，员工销售的软件金额与提成方式如下：
 销售额 ≤2000            没有提成
 2000 < 销售额 ≤ 5000    提成8%
 5000 < 销售额 ≤ 10000   提成10%
 销售额 ≥ 10000          提成12%
 利用switch
 */


