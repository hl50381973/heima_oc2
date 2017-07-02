一、改错题
1.
#include <stdio.h>
int main()
{
    for(int i = 0; i<5; i++) //少大括号
        int a = 20;
    
    return 0;
}

2.
int main()//没有放在main函数前边
{
    test();
    return 0;
}

void test()
{
}

3.
void test1()//没有被接收的参数
{
    return 0;
}

int test2()
{
    return;
}

int main()
{
    test2(10);
    return 0;
}

4.
int main()
{
    void test()
    {
    }
    
    test();
    return 0;
}

5.
void test()
{
}

void test(int n)
{
}

int main()
{
    test(10, 20);
    return 0;
}

6.
void test1()
{
}

void test2(int n)
{
}

int main()
{
    test2( test1() );
    return 0;
}


二、分析题
1. 打印结果
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int two(int n)
{
    return n * 2;
}

void test(int n)
{
    printf("%d\n", two(n));
}

int main()
{
    test( sum(10, 11) );
    return 0;
}

2.
f()
{
    in x = 1;
    x = x +2;
    printf("%d", x);
}
int main()
{
    f();
    f();
    return 0;
}

3.
void fun(int m,int n)
{
    m = n;
    n = m;
}
int main()
{
    int x = 5, y = 7;
    fun(x , y);
    printf("%d,%d", x, y);
    return 0;
}

4.
void fun(int *m,int *n)
{
    *m = *n;
    *n = *m;
}
int main()
{
    int x = 5, y = 7;
    fun(x , y);
    printf("%d,%d", x, y);
    return 0;
}

5.
void f(int *s)
{
    s = "hello whorld";
}
int main()
{
    char s[] = "hello c!";
    f(s);
    printf("%s", s);
    return 0;
}

6.
void f(int a[])
{
    int s = 0;
    for (int i = 0; i < 5; i++) {
        s = s + a[i];
        printf("%d", s);
    }
}
int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    return 0;
}

7.
void f(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int x = 3, y = 4;
    f(x, y);
    printf("%d,%d", x, y);
    return 0;
}

8.
void f(int a[])
{
    int s = 1;
    for (int i = 0; i　< 5; i++) {
        s = s * a[i];
        printf("%d", s);
    }
}
int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    f(x);
    return 0;
}


三、编程题
1.
/*
 题目：
 编写一个函数int pieAdd(int n)，计算1!+2!+3!+……+n!的值（n>=1）。
 比如pieAdd(3)的返回值是1! + 2! + 3! = 1 + 1*2 + 1*2*3 = 9
 */
2.
/*
1.公司里面假设有2个开发人员：张三、李四

2.李四负责编写一些两个整数之间的算术运算函数，包含了：加法、减法、乘法、除法

3.张三负责编写main函数，并且要用到李四编写的算术运算函数

根据上面的情景，合理设计一套程序
1> 文件个数不限
2> 文件名自拟
 
 4.有5个人坐在一起，问第5个人多少岁？他说比第4个人大两岁，问第4个人岁数，他说比第3个人大两岁，问第3个人岁数，他又说比第2个人大两岁，问第2个人岁数，他说比第1个人大两岁，最后问第1个人他说10岁。编写程序，当输入第几个人时求出其对应的年龄。
 
 5.A/B/C/D/E 5个人在某天夜里合伙去捕鱼，到凌晨时都疲惫不堪，于是各自找地方睡觉，第二天，A第一个醒来，他将鱼分成5份，把多余的一条鱼扔掉，拿走自己的一份。B第二个醒来，也将鱼分成5份，把多余的一条鱼扔掉，拿走自己的一份。C/D/E依次醒来，按同样的方法拿鱼。问他们合伙至少捕了多少条鱼？
 
 6.输入学生数并逐个输入学生的身高，然后输出身高的平局值

 
*/