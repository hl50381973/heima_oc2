//
//  main.c
//  10-结构体与函数
//
//  Created by Apple on 14/11/14.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 1、结构体变量作为函数参数
 */

struct Person{
    char *name;
    int age;
    float height;
};

//写一个函数打印结构体 Person

void printPerson(struct Person person)
{
    printf("name = %s,age = %d,height = %.2f\n",person.name,person.age,person.height);
}

//结构体作为函数参数传递是值传递
void changePerson(struct Person person)
{
    person.age = 30;
}

//结构体指针作为函数参数是地址传递
void changePerson2(struct Person *personPointer)
{
    personPointer->age = 30;
}

//结构体数组作为函数参数是地址传递
void changePersons(struct Person persons[])
{
    persons[1].age = 10;
}
// 写一个函数遍历结构体数组

void printPersons(struct Person *persons,int length)
{
    for (int i = 0; i < length; i++) {
        printf("name = %s,age = %d,height = %.2f\n",persons[i].name,persons[i].age,persons[i].height);
    }
}

void test()
{
    
    struct Person p = {"晋三",1,0.2};
    
    
    printPerson(p);
    
    //    changePerson(p);
    //    changePerson2(&p);
    
    printPerson(p);
    
    
    struct Person ps[3] = {{"小泉",2,0.3}, {"晋三",1,0.2}};
    changePersons(ps);
    //    printPerson(ps[1]);
    
    int len = sizeof(ps) / sizeof(struct Person);
    
    printPersons(ps,len);
    
}

/*
 1.某班有5个学生，三门课。分别编写3个函数实现以下要求：
 （1） 求各门课的平均分；
 （2） 找出有两门以上不及格的学生，并输出其学号和不及格课程的成绩；
 （3） 找出三门课平均成绩在85-90分的学生，并输出其学号和姓名
 */
//定义一个课程的结构体类型
struct Course{
    char *name;
    double score;
};
//定义一个学生结构体类型
struct Student{
    int no;
    char *name;
    struct Course courses[3];
};

void couresAverageScore(struct Student students[],int length)
{
//  定义三个变量用来保存三门功课总成绩
    double sumOfiOS = 0;
    double sumOfC = 0;
    double sumOfOC = 0;
    int len = sizeof(students[0].courses) / sizeof(struct Course);
//    double scores[len];
//  计算各门功课总成绩
    
    for(int i = 0 ; i < length;i++)
    {
        sumOfiOS = sumOfiOS + students[i].courses[0].score;
        sumOfC += students[i].courses[1].score;
        sumOfOC += students[i].courses[2].score;
    }
    
    double aviOS = sumOfiOS / length;
    double avC = sumOfC / length;
    double avOC = sumOfOC / length;
    
    printf("iOS平均成绩 = %.2lf,C平均成绩 = %.2lf,OC平均成绩 = %.2lf\n",aviOS,avC,avOC);
    
    
    
}
// （2） 找出有两门以上不及格的学生，并输出其学号和不及格课程的成绩；
void printLowStudent(struct Student students[],int length)
{
      int len = sizeof(students[0].courses) / sizeof(struct Course);
//  外层循环遍历学生
    for (int i = 0; i < length; i++) {
//      内层循环遍历成绩
//      记录不及格的门数
        int lowCount = 0;
        struct Course lowCourse[len];
        for (int j = 0; j < len; j++) {
            if (students[i].courses[j].score < 60) {
                lowCourse[lowCount] = students[i].courses[j];
                lowCount++;
            }
        }
        
//      如果不及格超过两门
        if(lowCount >= 2){
            printf("学号 = %d ",students[i].no);
            for (int i = 0; i < lowCount; i++) {
                printf("课程 = %s,成绩 = %.2lf ",lowCourse[i].name,lowCourse[i].score);
            }
            printf("\n");
        }
    }
}



//（3） 找出三门课平均成绩在85-90分的学生，并输出其学号和姓名

void printXueBa(struct Student students[],int length)
{
//  遍历数组
    int lenOfCourse = sizeof(students[0].courses) / sizeof(struct Course);
    for (int i = 0; i < length; i++) {
        int sumOfCourse = 0;
        for (int j = 0; j < lenOfCourse; j++) {
            sumOfCourse += students[i].courses[j].score;
        }
        
        double avOfCourse = sumOfCourse / lenOfCourse;
        
        if (avOfCourse >= 85 && avOfCourse <= 90) {
            printf("学号 = %d,姓名 = %s\n",students[i].no,students[i].name);
        }
    }
}

int main(int argc, const char * argv[]) {

    struct Student students[5] = {
        {1,"小明",{{"ios",50},{"C语言",20},{"OC",80}}},
        {2,"小红",{{"ios",80},{"C语言",90},{"OC",90}}},
        {3,"小黄",{{"ios",30},{"C语言",20},{"OC",90}}},
        {4,"小花",{{"ios",85},{"C语言",100},{"OC",95}}},
        {5,"大木",{{"ios",59},{"C语言",59},{"OC",59}}}
    };
    
    int len = sizeof(students) / sizeof(struct Student);
    
    couresAverageScore(students, len);
    printLowStudent(students, len);
    
    printXueBa(students, len);
    
    return 0;
}
