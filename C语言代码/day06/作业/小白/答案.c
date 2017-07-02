一、改错题
1.
#include <stdio.h>

int main()
{
    for (int i = 0; i<5; i++)
    {
        // 不加上大括号{}的话，变量a的作用域混乱\不明确
        int a = 20;
    }
    
    return 0;
}

// 1处错误

2.
// 应该将test函数进行提前声明，或者在main函数前面定义
void test();

int main()
{
    test();
    return 0;
}

void test()
{
}

// 1处错误

3.
void test1()
{
    // void表示没有返回值，因此不应该return一个整数
    return; // 省略return也可用
    //return 0;
}

int test2()
{
    // 返回值是int类型，因此return后面应该跟上一个整数
    return 0; // 这个0仅仅是随便写的，具体返回什么值，应该根据业务逻辑
    // return;
}

int main()
{
    // test2不接收任何参数
    test2();
    // test2(10);
    return 0;
}
// 3处错误

4.
void test()
{
}

int main()
{
    // 函数不能嵌套定义
    /*
     void test()
     {
     }*/
    
    test();
    return 0;
}
// 1处错误

5.
// 不允许有函数同名，这里将前面的test改为了test2
void test2()
{
}

void test(int n)
{
}

int main()
{
    // test函数只接收1个参数
    test(10);
    // test(10, 20);
    return 0;
}
// 2处错误

6.
void test1()
{
}

void test2(int n)
{
}

int main()
{
    // test2接收的是int类型的参数，而test1没有返回值
    // 因此test1()不能作为test2的参数
    test2(10);
    //test2( test1() );
    return 0;
}
// 1处错误


二、分析题(可以把代码拷贝到Xcode中去验证)
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
    //main函数中传过来的n的值为21
    //在pritf输出之前会调用two方法，把21作为实参传人
    //two函数的执行结果为 21 * 2 = 42
    printf("%d\n", two(n));
}

int main()
{
    test( sum(10, 11) );
    //首先会执行 sum(10, 11) 它的执行结果为 21
    //然后执行 test(21)代码进入test函数
    //
    
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
    f(); // 3
    f(); // 3
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
    //基本数据类型作为参数传递为值传递
    fun(x , y);// x,y 不会有任何变化
    printf("%d,%d", x, y);
    return 0;
}


三、编程题
1.
#include <stdio.h>

// 声明函数
int pieAdd(int n);

int main()
{
    int result = pieAdd(3);
    
    printf("%d\n", result);
    return 0;
}

// 定义函数
int pieAdd(int n)
{
    /*
     解题思路：先计算出每个数字的阶乘，再把所有的阶乘加起来
     */
    
    // 1.如果传入的n值不合理，直接返回0
    if (n<1) return 0;
    
    // 2.定义一个变量，用来记录每次阶乘相加的结果
    int sum = 0;
    
    for (int i = 1; i<=n; i++) { // 一共有多少个数字
        
        // 3.定义一个变量，记录当前数字对应的阶乘
        int multi = 1;
        for (int j=1; j<=i; j++) {
            multi *= j;
        }
        
        // 4.累加每次的阶乘
        sum += multi;
    }
    
    return sum;
}


/*
 2.  有5个人坐在一起，问第5个人多少岁？他说比第4个人大两岁，问第4个人岁数，他说比第3个人大两岁，问第3个人岁数，他又说比第2个人大两岁，问第2个人岁数，他说比第1个人大两岁，最后问第1个人他说10岁。编写程序，当输入第几个人时求出其对应的年龄。
     
 分析：该题可以通过循环也可以通过递归函数来解
      使用递归函数解题方法
      1、首先找出规律，找出第n个人与第n-1一个人身高之间关系,f(n)表示第n个人身高
         f(5) = f(4) + 2;
         f(4) = f(3) + 2;
         f(3) = f(2) + 2;
         f(2) = f(1) + 2;
      我们可以推出 
         f(n) = f(n-1) + 2;
     2、确定结束条件
        由于第一个人的年龄是确定，所以我们可以当 n＝ 1的时候返回 10
*/
int age(int n)
{
    if(n = 1){ //第一个人的年龄为10，所以我们当 n = 1的时候返回 10;
      return 10;
    }
    return age(n-1)+2;//递归调用age函数
}


/*
3.输入学生数并逐个输入学生的身高，然后输出身高的平局值

*/
void threePersonAverageHeight()
{
    //定义三个变量，用于接收用户输入的三个人的身高
    double firstPersonHeight = -1;
    double secondPersonHeight = -1;
    double thirdPersonHeight = -1;
    //提示用户输入三个人的身高
    printf("请分别输入三个人的身高以逗号分割\n");
    //使用scanf接收用户的输入
    scanf("%lf,%lf,%lf",&firstPersonHeight,&secondPersonHeight,&thirdPersonHeight);
    //判断用户输入的第一个人的身高是否合法
    if (firstPersonHeight < 0) {
        printf("第一个人的身高输入有误\n");
        return;//使用return结束函数
    }
    //判断用户输入的第二个人的身高是否合法
    if (secondPersonHeight < 0) {
        printf("第二个人的身高输入有误\n");
        return;//使用return结束函数
    }
    //判断用户输入的第三个人的身高是否合法
    if (secondPersonHeight < 0) {
        printf("第三个人的身高输入有误\n");
        return;//使用return结束函数
    }
    //计算三个人身高的平均值
    double averageHeight = (firstPersonHeight + secondPersonHeight + thirdPersonHeight) / 3;
    //输出三个人的平均身高
    printf("三个人的平均身高为：%.2lf\n",averageHeight);
    
}

