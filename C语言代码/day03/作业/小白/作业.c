
一、改错题
1.
#include <stdio.h>

int main()
{
    int a = 10++;    //int a= 10
    
    int b = 10.0 % 2;  // int b=10%2
    return 0;
}


二.	分析题

1、请写出下面代码的执行结果

#include <stdio.h>

int main()
{
    int a = 20;
    int score = a + 100;
    printf("%d\n", score);   //120
    
    {
        int score = 50;
        {
            score = 10;
            printf("%d\n", score);//10
        }
        a = 10;
    }
    
    {
        score = a + 250;
        int score = 30;
        printf("%d", score);//30
    }
    
    printf("%d\n", score);//110
    return 0;
}
三、填空题

1． 设int x=9,y=8; 表达式x == y + 1的结果是  ____1____。
2． 定义int x, y; 执行y =(x = 1, ++x, x + 2);后, y的值是_4_______。
3． 定义int x = 10, y, z; 执行y = z = x; x = y == z; 后， x的结果是__1______。
4． 设int a=2,b=3,c,d,e,f; 执行
c=(a++>= --b);1
d=(a==++b);0
e=(a--!=b4);1
f=(++a>b--4);0
请问a,b,c,d,e,f的结果是：3_2_1 1 0_0_____。

三、选择题
1． 能正确表示“当x的取值在[-58,-40]并且[40,58]范围内为真，否则为假”的表达式是（c）。
A．(x>= -58) && (x<= -40) && (x>=40) && (x<=58)
B．(x>= -58) || (x<= -40) || (x>=40) || (x<=58)
C．(x>= -58) && (x<= -40) || (x>=40) && (x<=58)
D．(x>= -58) | |(x<= -40) && (x>=40) || (x<=58)


2．执行以下语句后，y 的值为（a）。
int x,y,z;
x=y=z=0;
++x1 || ++y1 && 1++z;
A．0              B．1             C．2             D．不确定值

三.编程题
1.输入两个数，打印（printf）这两个数的和、差、积、商、以及余数。
