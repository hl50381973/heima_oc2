一、改错题
1.
void test();

int main()
{
    struct Date
    {
        int year;
        int month;
        int day;
    };
    
    test();
    return 0;
}

void test()
{
    struct Date date = {2011, 9, 10};
}

2.
int main()
{
    struct Date
    {
        int year;
        int month;
        int day;
    } d1 = {2011, 9, 10};
    
    struct Date
    {
        int year;
        int month;
        int day;
    } d2 = {2010, 10, 11};
    return 0;
}

3.
#include <stdio.h>

int main()
{
    struct Student
    {
        int age;
        char *name;
    };
    
    Student stu;
    
    printf("请输入年龄：\n");
    scanf("%d", stu.age);
    printf("请输入姓名：\n");
    scanf("%s", &stu.name);
    return 0;
}


二、编程题

/*
1.某班有5个学生，三门课。分别编写3个函数实现以下要求：
（1） 求各门课的平均分；
（2） 找出有两门以上不及格的学生，并输出其学号和不及格课程的成绩；
（3） 找出三门课平均成绩在85-90分的学生，并输出其学号和姓名
*/

最后：这里没有蠢问题
     1、什么是结构体
     2、怎么定义一个结构体变量
     3、怎么初始化一个结构体变量
     4、结构体是作为函数参数传递是什么传递？
     5、怎么定义一个结构题数组
     6、怎么对结构体数组进行初始化
     7、怎么遍历结构体数组
     8、怎么定义一个结构体指针
     9、通过结构体指针怎么获取结构体成员的值
     10、结构体怎么进行嵌套定义？
     11、结构体自己可以嵌套自己吗？
     12、什么是枚举？
     13、怎么定义枚举？
     14、怎么初始化一个枚举变量？
     15、枚举的使用场景是什么？





