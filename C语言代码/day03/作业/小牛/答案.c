一.改错
1. 有2处错误
#include <stdio.h>

int main()
{
    // 10是常量，不能进行++运算
    // 因为10++相当于10 = 10 + 1
    int a = 10;
    //int a = 10++;
    
    // %两侧必须是整数
    int b = 10 % 2;
    //int b = 10.0 % 2;
    return 0;
}

二、分析题
1. 1 //注意该表达式是关系表达式的双等号，所以其结果只能为1或0。
2. 4
3. 1
4. 2/3/2/3/0
5. 3/2/1/1/0/0
6. 20/0
7. 1/0/0
8. 1
9.  2
10. d
11. c
12. c
13. c
14. c
15. c
16. a
17. c
18. b
19. c
20. d
21. a
22. b
23. d
24. a

三、编程题
1.在控制台输出 % 
int main(int argc, const char * argv[])
{
    printf("%%");//printf函数打印 % 字符要用 %% 才能打印
}

2.输入两个数，打印（printf）这两个数的和、差、积、商、以及余数。
int main(int argc, const char * argv[])
{
    int a = 0;
    int b = 0;
    
    printf("请输入两个整数：\n");
    scanf("%d%d", &a, &b);//此处整形变量前面一定要加 & 运算符
    
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a %% b = %d\n", a%b);//printf函数打印 % 字符要用 %% 才能打印
}
