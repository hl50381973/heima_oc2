i一、改错题
二、分析题
1.  20
2.  101091
3.  a
4.  0
5.  x=5,y=4,a=1
6.  20
7.  c
8.  d
9.  12457810
10.
i=0
i=2
i=4
i=6
11.
i=0, j=0
i=0, j=1
i=1, j=0
i=1, j=1
i=2, j=0
i=2, j=1


三、编程题
1.
int main(int argc, const char * argv[])
{
    for (int i = 1; i < 100; i++) {
        
        if ((i % 7 == 0) || (i%10 == 7) || (i / 10 == 7)) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

2.
int main(int argc, const char * argv[])
{
    int num1 = 0;
    int num2 = 0;
    int gcd = 0; //最大公约数
    int lcm = 0; //最小公倍数
    printf("请输入两个数：\n");
    scanf("%d%d", &num1, &num2);
    int product = num1*num2;
    
    if (num1 > num2)//始终让num1是最小数。
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    for (int i = num1; i > 0; i--) {
        if (num1%i == 0 && num2%i == 0) {
            gcd = i;
            break;
        }
    }
    lcm = product/gcd;
    printf("gcd = %d\n", gcd);
    printf("lcm = %d\n", lcm);
    return 0;
}
3.
int main(int argc, const char * argv[])
{
    int unit = 0;    //个位
    int decade = 0;  //十位
    int hundred = 0; //百位
    int count = 0;   //总个数
    for (int i = 100; i < 1000; i++) {
        unit = i%10;
        decade = (i%100)/10;
        hundred = i/100;
        if (i == (hundred*hundred*hundred + decade*decade*decade + unit*unit*unit)) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("count = %d\n", count);
    return 0;
}

4.
#include <stdio.h>

int main()
{
    // 1.定义变量存储用户输入的整数
    int n = 0;
    
    // 2.判断n是否为正整数
    while (n <= 0) {
        // 2.1 提示输入
        printf("输入一个正整数：\n");
        
        // 2.2 让用户输入
        scanf("%d", &n);
    }
    
    // 3.计算阶乘
    int sum = 0; // 存储计算结果
    int current = 0; // 当前要累加的数值
    while (current < n) {
        current++;
        
        // 如果是偶数，就减
        if (current % 2 == 0) {
            sum -= current;
        } else { // 如果是奇数，就加
            sum += current;
        }
    }
    
    // 4.输出结果
    printf("%d\n", sum);
    
    return 0;
}

5.
#include <stdio.h>

int main()
{
    // 1.定义变量存储用户输入的整数
    int n = 0;
    
    // 2.判断n是否为正整数
    while (n <= 0) {
        // 2.1 提示输入
        printf("输入一个正整数：\n");
        
        // 2.2 让用户输入
        scanf("%d", &n);
    }
    
    // 3.计算阶乘
    int result = 1; // 存储计算结果
    int current = 1; // 当前的乘数
    while (current <= n) {
        result *= current; // 累乘每次的乘数
        current++; // 乘完一次就++
    }
    
    // 4.输出阶乘结果
    printf("%d! = %d\n", n, result);
    
    return 0;
}

6.
#include <stdio.h>

int main()
{
    // 1.定义变量存储用户输入的整数
    int n = 0;
    
    // 2.判断n是否为正整数
    while (n <= 0) {
        // 2.1 提示输入
        printf("输入一个正整数：\n");
        
        // 2.2 让用户输入
        scanf("%d", &n);
    }
    
    // 3.输出一条分隔线（跟用户的输入隔开）
    printf("-----------------\n");
    
    // 4.输出*
    for (int row = 1; row<=n; row++) { // 有多少行
        for (int col = 1; col<=row; col++) { // 每行多少个(每行的个数跟行号一样)
            printf("*");
        }
        // 输完一行后换行
        printf("\n");
    }
    return 0;
}

7.
#include <stdio.h>

int main()
{
    // 1.定义变量存储用户输入的整数
    int n = 0;
    
    // 2.判断n是否为1~9的正整数
    while (n <= 0 || n>=10) {
        // 2.1 提示输入
        printf("输入一个1~9的正整数：\n");
        
        // 2.2 让用户输入
        scanf("%d", &n);
    }
    
    // 3.输出一条分隔线（跟用户的输入隔开）
    printf("-----------------\n");
    
    // 4.输出
    for (int row = 1; row<=n; row++) { // 有多少行
        for (int col = 1; col<=row; col++) { // 每行多少个
            printf("%d", row); // 输出行号
        }
        printf("\n");
    }
    return 0;
}

8.
#include <stdio.h>

int main()
{
    // 1.定义变量存储用户输入的整数
    int n = 0;
    
    // 2.判断n是否为1~9的正整数
    while (n <= 0 || n>=10) {
        // 2.1 提示输入
        printf("输入一个1~9的正整数：\n");
        
        // 2.2 让用户输入
        scanf("%d", &n);
    }
    
    // 3.输出一条分隔线（跟用户的输入隔开）
    printf("-----------------\n");
    
    // 4.输出
    for (int row = 1; row <= n; row++) { // 有多少行
        for (int col = n; col >= row; col--) { // 每行多少个
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}

9.
int main(int argc, const char * argv[])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 2-i; j > 0; j--) {
            printf(" ");
        }
        for (int k = i*2+1; k>0; k--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main(int argc, const char * argv[])
{
    int num = 5;
    for (int i = 0; i < num; i++) {
        for (int j = i; j < num - 1; j++) {
            printf("-");
        }
        
        for (int z = 0; z <= i * 2; z++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
10.
int main(int argc, const char * argv[])
{
    int  a = 0, n = 0, temp = 1, k = 0, sum = 0;
    printf("请输入a和n的值：\n");
    scanf("%d%d", &a, &n);
    
    for (int i = 0; i<n; i++) {
        k = a;
        temp = 1;
        for (int j = 0; j < i; j++) {
            temp *= 10;
            k += temp*a;
            
        }
        printf("k = %d\n", k);
        sum += k;
    }
    printf("sum = %d\n", sum);
    return 0;
}

11.
int main(int argc, const char * argv[])
{
    int peach_num = 1;//第十天桃子数量
    int day = 10;
    for (; day>1; day--) {
        printf("第%d天，peach_num = %d\n", day,peach_num);
        peach_num = (peach_num + 1) * 2;
        
    }
    printf("第%d天，peach_num = %d\n", day,peach_num);
    return 0;
}

12.
/*
 原理就是取出（1角、2角、5角）所有能取的值相加，如果和等于10就代表可以兑换
 */
//定义三个变量表示1角，2角，5角
int i, j, k;
//    当1角时取值范围 0～10
for (i = 0; i <= 10; i++) {
    //        当2角时取值范围 0～5
    for (j = 0; j <= 5; j++) {
        //            当5角时取值范围0～2
        for (k = 0; k <= 2; k++) {
            //                判断3种钱数相加是否等于10
            if (i + (j * 2) + (k * 5) == 10) {
                //                    输出结果
                printf("一角 %d, 两角 %d, 五角 %d\n",i , j, k);
            }
        }
    }
}

13.
#include <stdio.h>

int main(int argc, const char * argv[])
{
    //    外循环控制行数
    for (int i = 1; i <=3; i++) {
        //        内循环控制列数
        for (int j = 1; j <= i; j++) {
            //            输出结果
            printf("%d * %d = %d\t", i, j, i*j);
        }
        //        换行
        printf("\n");
    }
    return 0;
}

14.
int main(int argc, const char * argv[])
{
    //    瓜的总数
    int count = 1020;
    //    天数
    int day = 0;
    //    计算天数
    while (count) {
        //        每天卖剩下的瓜
        int temp = count/2 - 2;
        count = temp;
        day++;
    }
    printf("day = %d\n", day);
    
    return 0;
}

15.
int main(int argc, const char * argv[])
{
    //    总金
    float total = 0;
    for (int i = 0; i < 5; i++) {
        //        倒推第5年年初存款，用1000/
        total = (total + 1000)/(1 + 0.025);
    }
    //    输出结果
    printf("total = %.3f\n", total);
    return 0;
}

16.

int main(int argc, const char * argv[])
{
    
    int score , count = 0;
    //    循环录入学生成绩
    for (int i = 1; i <= 20; i++) {
        printf("请输入 %d 个学生的成绩\n",i);
        scanf("%d" , &score);
        
        //        判断学生成绩是否及格
        if (score < 60) {
            count++;
        }
    }
    
    printf("不及格人数 %d 个", count);
    return 0;
}
