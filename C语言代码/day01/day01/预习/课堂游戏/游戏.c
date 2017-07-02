
一、变量
    1、积木游戏
    将下面的代码碎片，放到合适为位置上，让它可以运行并输出 10；
    #include <stdio.h>
    {

    }
    int

    main

    a = 10;

    a

    int;

    printf("%d",a);

    return 0;

    2、连线游戏
                用于存放经常变化的值

    变量         从来都都不改变，也不可改变的值

                存储在常量区，在代码中多次次使用，使用的都是同一个

    常量         存储于栈中，它代表了一块存储空间，
                如果把内存比作大厦的话，它就是大厦中的一个小房间。



    3、代码解读
    int main(){
        //______________________
        int num;
        //______________________
        num = 10;
        printf("%d\n",num);
        return 0;
    }

   4、说出下面的代码的执行结果，并解释为什么？
    int main(){
        int harry = 10;
        printf("%d\n",harry);
        {
            int harry = 20;
            harry = 30;
            printf("%d\n",harry);
        }
        printf("%d\n",harry);
        {
            harry = 50;
            printf("%dn",harry)
            int harry = 10;
            harry = 60;
            printf("%dn",harry)
        }
         printf("%dn",harry)
    }


最后、这里没有蠢问题：
1、什么是变量？
2、为什么要学习变量
3、变量怎么用于？
4、变量用在什么地方

5、C语言中为什么要有变量？
6、变量为什么要有作用域 ？
7、变量为什么要区分类型 ？
8、有一样东西从生到死一直陪伴着变量从来都没有改变过，你知道这个东西是什么吗？


                              

                              


