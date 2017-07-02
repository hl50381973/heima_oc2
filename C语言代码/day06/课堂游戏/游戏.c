
一、找出下面程序的错误
    1、

        int sum(int a,int b){
            return a + b;
        }
        int sum(int a,int b,int c){
            return a + b + c;
        }

    2、
        void myFunc(){
            return 0;
        }
    3、
        int sum(int a,int b){

            return a + b;
        }
        int main()
        {
           double s = sum(10.2,4)
           printf("s = %d",s);
        }
    4、
        void change(int a,int b){
            int temp = a;
            a = b;
            b = temp;

        }

        int main()
        {
            int num1 = 10;
            int num2 = 15;
            change(num1,num2);
            printf("num1 = %d,num2 = %d\n",num1,num2);
        }

二、编程实战

    1、定义一个打印横线的功能

    2、定义一个打印多条横线的功能

    3、定义一个函数计算两个变量的差

    4、定义一个函数比较两个变量的大小后返回最大值

最后：这里没有蠢问题
     1、什么是函数
     2、为什么需要函数
     3、怎么定义一个函数
     4、什么是函数声明
     5、函数声明的作用是什么？
     6、#include的作用是什么？
     7、mac的常见命令有那些，分别是干嘛的