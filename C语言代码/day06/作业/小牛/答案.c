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


二、分析题
1. 42

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

4.
int age(int n)
{
    int f;
    if(n = 1) //当n等于1时，f等于10
        f = 10;
    else
        f = age(n-1)+2;//递归调用age函数
    return f;
}

5.

/*
 
 C语言算法竞赛题目：捕鱼和分鱼
 
 A、B、C、D、E五个人在某天夜里合伙去捕鱼，到第二天凌晨时都疲惫不堪，于是各自找地方睡觉。日上三杆，A第一个醒来，他将鱼分为五份，把多余的一条鱼扔掉，拿走自己的一份。B第二个醒来，也将鱼分为五份，把多余的一条鱼扔掉，保持走自己的一份。C、D、E依次醒来，也按同样的方法拿走鱼。问他们合伙至少捕了多少条鱼？
 
 根据题意，总计将所有的鱼进行了五次平均分配，每次分配时的策略是相同的，即扔掉一条鱼后剩下的鱼正好分成五份，然后拿走自己的一份，余下其它的四份。
 
 假定鱼的总数为X，则X可以按照题目的要求进行五次分配：X-1后可被5整除，余下的鱼为4*(X-1)/5。若X满足上述要求，则X就是题目的解。
 
 1.分配的方式相同，即扔掉一条鱼后剩下的鱼正好分成五份，鱼的总数 -1 一定能被5整除
 2.我们不知道鱼的总数是多少，那么就假定它是 x 条
 3.一共对鱼进行了几次分配 一共5个人,每个人分配1次 一共分配了5次 for循环
 4.至少捕了多少条鱼？ 只要我们找出一个合理的数字比如所 6 条开始 一点一点增加鱼的数量
 我们就要试探 for循环
 
 x
 x = ((x - 1) / 5) * 4
 x = ((x - 1) / 5) * 4
 x = ((x - 1) / 5) * 4
 x = ((x - 1) / 5) * 4
 
 
 */

int leastFishNum(){
    
    int totalFishNum = 0; //我们要试探进行所以需要一个变量假定捕鱼的总数量数量
    //从6条鱼开始试探,
    for (totalFishNum = 6; 1; totalFishNum++) {
        int flag = 1;  //我们还需要一个标记，如果我们试探出了一个合理的数字,用它来结束循环
        //5个人一共分配了5次
        //我们把试探的值赋值给鱼的总量totalFishNum
        int leftFishNum = totalFishNum; //定义一个变量记录每次分鱼后剩下的条数，第一次分为捕鱼的数量
        for (int i = 1; i <= 5; i++) {
            
            //如果鱼的总数量减去1一定能被5整除
            if ((leftFishNum - 1) % 5 == 0)//满足if条件说明第一次分配完成
            {
                //经过了第一次分配,A拿走了它的那份
                //后面每一次分配都是，拿走第一份剩余四份
                //那么剩余的鱼 总数应该是
                leftFishNum = 4 * (leftFishNum - 1) / 5; //我们通过假设x的值  (x-1)/5 * 4
                // printf("total = %d\n", leftFishNum);
            }else
            {
                flag = 0; //如果不能被整除，就让我们的标记为0
                break; //结束当前循环
            }
            
        }
        
        //我们的flag 只有在找到了能够瞒住我们分配条件的第一个数出现的时候
        //也就是找到了最少要有多少鱼的时候才会为1
        if(flag)
        {
            break;
        }
    }
    
    //printf("Total = %d\n",totalFishNum);     /*输出结果*/
    return totalFishNum;
    
}




6.亲，这么简单你好意思看答案么？

