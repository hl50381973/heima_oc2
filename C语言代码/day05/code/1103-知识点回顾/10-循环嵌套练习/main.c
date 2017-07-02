//
//  main.c
//  10-循环嵌套练习
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
   要求打印好友列表
 
 
   好友列表1
       好友1
       好友2
       ...
   好友列表2
       好友1
       好友2
       ..
   .....
 
 */
int test()
{
    
    for (int i = 1; i < 3; i++) {
        
        printf("好友列表%d\n",i);
        
        //        printf("   好友%d\n",1);
        //        printf("   好友%d\n",2);
        //        printf("   好友%d\n",3);
        //        printf("   好友%d\n",4);
        for (int j = 1; j < 10; j++) {
            printf("   好友%d\n",j);
        }
    }
    
    return 0;
}
/*
 
   用户录入一个整数n,要求打印如下图形，如用户录入3
   
   ***
   ***
   ***
  
   ****
   ****
   ****
   ****
   
但凡遇到行与列的问题就循环嵌套：
外层循环控制行
内层循环控制列
 
 
 */

int test2()
{
    int n = 2;//假设用户输入的数字为3
    
    for(int i = 0 ; i < n;i++){
        
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
        //        printf("***\n");
    }
   
//  测试列的
    //    printf("_______________________\n");
    //    for (int j = 0; j < n; j++) {
    //        printf("*");
    //    }
    
    return 0;
}
/*
 
 用户录入一个整数n,要求打印如下图形，如用户录入3
 
 ***
 **
 *
 
 ****
 ***
 **
 *
 
 总结：尖尖先下，外层循环控制行，内层循环控制列，内层循环的初始化表达式的值随着外层层循环控制变量的改变而改变
 
 */

int test3()
{
    
    // 定义n,n就代表用户录入的值
    int n = 5;
    
    //  每一行的列数
    //    int num = n;
    
    //   外层循环控制行
    
    /*
     i = 0;
     num = n
     
     i = 1
     num = n -1
     
     i = 2
     num = n - 2
     
     ....
     
     num = n - i
     
     */
    
    for (int i = 0; i < n; i++) {
        //      内层循环控制列
        //        for (int j = 0; j < num; j ++) {
        //            printf("*");
        //        }
        //        num--;
//      打印每一行打印*个数   n - i - j
//      假设  n = 3  j = 0  i = 0;
//      一次         j = 1
//      二次         j = 2
//      三次         j = 3   n - j - i
//     0 1 2  3 4
        
        
        for (int j = i; j <  n; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    
    
    
    return 0;
}

/*
 
 用户录入一个整数n,要求打印如下图形，如用户录入3
 
 *
 **
 ***
 
 *
 **
 ***
 ****
 
 总结：尖尖向上，外层循环控制行，内层循环控制列；内层的循环的条件表达式随着外层循环控制变量的变化而变化
 
 */


int test4()
{
    int n = 4;
    
    //  定义变量记录每次打印的个数
    int num = 1;
    
    for (int i = 0; i < n ; i++) {
        
        //      内层循环控制列，注意这里是小于等于
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        //        num++;
        printf("\n");
    }
    return 0;
}


/*
 
 用户录入一个整数n,要求打印如下图形，如用户录入3
 
 1
 22
 333
 
 1
 22
 333
 4444
 
 总结：尖尖向上，外层循环控制行，内层循环控制列；内层的循环的条件表达式随着外层循环控制变量的变化而变化
 
 */

int test5()
{
    
    //  假设 n = 3
    int n = 3;
    
    for(int i = 0; i < n ; i++){
        
        for (int j = 0; j <= i; j++) {
            printf("%d",i + 1);
        }
        printf("\n");
    }
    return 0;
}

/*
 
 用户录入一个整数n,要求打印如下图形，如用户录入3
 
 1
 12
 123
 
 1
 12
 123
 1234
 
 总结：尖尖向上，外层循环控制行，内层循环控制列；内层的循环的条件表达式随着外层循环控制变量的变化而变化
 
 */

int main(int argc, const char * argv[]) {
    
    int n = 4;
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j <= i; j++) {
            printf("%d",j + 1);
        }
        printf("\n");
    }
    
    
    return 0;
}
