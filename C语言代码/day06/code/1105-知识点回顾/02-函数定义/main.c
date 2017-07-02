//
//  main.c
//  02-函数定义
//
//  Created by Apple on 14/11/5.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
  函数定义的格式
                      形参列表
  返回类型 函数名称(参数类型 参数名称,参数类型 参数名称,...)
  {
       语句;
       ....
    
       return xxx;
  }
 
 
 如何去定义一个函数：
 1、根据函数的功能给函数起一个有意义名字
 2、确定需不需要传人一些补助的值
 3、确定需要返回什么类型的数据给函数调用者
 4、完成函数功能
 
  void 当函数没有返回值的时候，就将将函数的返回值类型声明为 void
 
  当函数的返回值类型为void的时候，return 语句可以省略
 
什么时候需要形式参数：当我们完成某个功能，有写数据我们不能确定，那么这时候就需要外界告诉我们
 
 */
//定义一个 无形参无返回值

void printOneRose()
{
    printf(" {@} \n");
    printf(" \\|/ \n");
    printf("  | \n");
    printf("  | \n");
}

//定义了一个 有形参无返回值
//打印多朵玫瑰花
void printManyRose(int num)
{
    for (int i = 0; i < num; i++) {
        printOneRose();
    }
}

//定义一个有形参有返回值函数
//计算两个数的和的函数
// 返回值类型：就是函数执行完毕之后返回什么样类型的值给函数调用者
int sum(int num1,int num2)
{
   return  num1 + num2;
}


//定义一个有返回值无形参的函数

double pi(){
    
    return 3.1415926;
}





int main(int argc, const char * argv[]) {
 
    
    double rs = pi();
    printf("rs = %lf\n",rs);
    
//    int s = 10 + 2;
    
    int a = 20;
    int b = 40;
//     int result = sum(2,10);
    int result = sum(a,b);
    
    printf("result = %d\n",result);
//    printManyRose(1);
   
//    for(int i = 0 ; i < 4;i++){
//        printOneRose();
//    }
    
  
    
    return 0;
}
