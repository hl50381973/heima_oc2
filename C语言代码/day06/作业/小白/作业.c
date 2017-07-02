一、改错题
1.
#include <stdio.h>
int main()
{
    for(int i = 0; i<5; i++)
        int a = 20;
    
        return 0;// 无定义
}

2.
int main()
{
    test();
    
    return 0;
}

void test()
{
}  //void 要一道什么

3.
void test1() //void  无取值
{
    return 0;
}

int test2()
{
    return;／／要取0
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
    test( sum(10, 11) );／／21*2
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
    f();／／3
    f();／／5
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
    printf("%d,%d", x, y);／／5，7
    return 0;
}



三、编程题        int pieAdd(int N)
1.             {       n = n +1;
/*                  pieadd=n+
 题目：
 编写一个函数int pieAdd(int n)，计算1!+2!+3!+……+n!的值（n>=1）。
 比如pieAdd(3)的返回值是1! + 2! + 3! = 1 + 1*2 + 1*2*3 = 9
 */
2.
/*
  有5个人坐在一起，问第5个人多少岁？他说比第4个人大两岁，问第4个人岁数，他说比第3个人大两岁，问第3个人岁数，他又说比第2个人大两岁，问第2个人岁数，他说比第1个人大两岁，最后问第1个人他说10岁。编写程序，当输入第几个人时求出其对应的年龄。
 f(1)=10 f(2)=10+2 f(3)=12+2 f(4)=14+2 f(5)=16+2    f(n+1)=f(n)+2  f(n)=f(n+1)-2
*/
/*
 3.输入学生数并逐个输入学生的身高，然后输出身高的平局值
*/
