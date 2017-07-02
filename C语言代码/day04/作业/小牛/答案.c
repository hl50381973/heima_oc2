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
1.
y=0

2.
x=2, y=1

3.
x=7, y=2

4. 2
5.  2
6.  x= -1,y= -1,z= 1
7.  6
8.d
9. 3、4
10. 0.500000 
11. 2
12. 1
13.58、58、 58
14.2    0     0
解析：参看如下的注释语句。
if (c>0) s=a+b; /* c=3>0为真，所以执行s=a+b语句；即：s=2*/
if (a<=0)   /*由于a= -1, 故a<=0为真，所以执行其后的大括号内的语句*/
{ if (b>0)     /*由于b=3, 故b>0为真，可以继续下面的语句*/
    if (c<=0) w=a-b;      /*由于c=3，c<=0为假，其后w=a-b不会执行*/
        }
else if (c>0) w=a-b;/*这一对if-else因a<=0为真，所以没有机会执行到*/
else t=c;

15.100
16.
    6   250
    5	1
    0	0

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
    min = max = s1;
    //    求出最值
    if (s2 < min) {
        min = s2;
    }else if (s2 > max)
    {
        max = s2;
    }
    
    if (s3 < min)
    {
        min = s3;
    }else if (s3 > max)
    {
        max = s3;
    }
    
    if (s4 < min) {
        min = s4;
    }else if (s4 > max)
    {
        max = s4;
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


4.
#include <stdio.h>

int main()
{
    // 1. 提示用户选择计算类型
    printf("请输入相应数字选择需要执行的运算：\n");
    printf("1 加法\n");
    printf("2 减法\n");
    
    // 2. 定义变量存储用户选择的计算类型
    int type = 0;
    
    // 3. 让用户输入计算类型
    scanf("%d", &type);
    
    if (type!=1 && type!=2)
    {
        // type值输入不合理，就直接退出程序
        printf("非法选择\n");
        return 0;
    }
    
    // 4.提示用户输入两个计算的数值
    printf("请连续输入两个需要进行运算的整数，并且以空格隔开\n");
    
    // 5.定义2个变量存储数值
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    // 6.计算
    int result;
    if (type == 1) {
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
    } else if (type == 2) {
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
    }
    return 0;
}


5.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int height = 0;
    printf("请输入行李重量：\n");
    scanf("%d", &height);
    float total_price = 0.0;
    if (height > 50) {
        total_price = 50*0.15 + (height - 50)*0.1;
    }
    else
    {
        total_price = height*0.15;
    }
    
    printf("总运费：%.2f", total_price);
	return 0;
}

6.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a = 0, b = 0, c = 0;
    printf("请输入三个整数：\n");
    scanf("%d%d%d", &a, &b, &c);
    //------第一种实现方法---------//
    int max = a;
    if (b > a) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    //------第二种实现方法---------//
    /*
     int max1 = a>b?a:b;
     int max2 = b>c?b:c;
     int max = max1>max2?max1:max2;
     
     */
    
    printf("三个数的最大值：%d\n", max);
	return 0;
}

7.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x = 0;
    int y = 0;
    printf("请输入x的值:\n");
    scanf("%d", &x);
    
    if (x<1) {
        y = x;
    }
    else if(x >= 1 && x < 10)
    {
        y = 2*x - 1;
    }
    else
    {
        y = 3*x - 11;
    }
    
    printf("y的值是：%d\n", y);
    
    return 0;
}

8.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int score = 0;
    printf("请输入成绩\n");
    scanf("%d", &score);
    
    if (score >= 90) {
        printf("成绩等级：A");
    }
    else if(score >= 80 && score <= 89)
    {
        printf("成绩等级：B");
    }
    else if(score >= 70 && score <= 79)
    {
        printf("成绩等级：C");
    }
    else if(score >= 60 && score <= 69)
    {
        printf("成绩等级：D");
    }
    else
    {
        printf("成绩等级：E");
    }
    
    return 0;
}


9.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    //    x 千克数  m1价格 m2折扣
    float x, m1, m2, m;
    char y , z;//汽油种类， 服务等级
    //    输入选择油的千克，种类，服务
    printf("请输入汽油的千克数，种类，服务；并用逗号隔开\n");
    scanf("%f, %c, %c", &x, &y, &z);
    //    选择汽油种类
    switch (y) {
        case 'a':
            m1 = 6.97;
            break;
        case 'b':
            m1 = 7.37;
            break;
        case 'c':
            m1 = 7.64;
            break;
    }
    
    //    选择服务种类
    switch (z) {
            //            自动加
        case 'f':
            m2 = 0;
            break;
            //            自己加
        case 'm':
            m2 = 0.05;
            break;
            //            协助加
        case 'e':
            m2 = 0.1;
            break;
    }
    //    计算应该支付金额  总金 ＝ 实际 - 优惠
    m = (x * m1) - (x * m1 * m2);
    printf("汽油的种类是：%c\n", y);
    printf("服务等级是：%c\n", z);
    printf("用于应付金额是：%.3f\n", m);
    return 0;
}