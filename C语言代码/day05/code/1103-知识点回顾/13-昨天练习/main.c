//
//  main.c
//  13-昨天练习
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*
 5．当a=1,b=2,c=4,d=3时，执行完下面一段程序后x的值是（2）。
 if (a<b)
 if (c<d) x=1;
 else
 if (a<c)
 if (b<d) x=2;
 else x=3;
 else x=4;
 else x=5;
 
 1、从上往下找else
 2、从下往上找if，第一个找到的没有匹配的if就是与这个else配对if
 */
//int main(int argc, const char * argv[]) {
//  
//    if (a<b){
//        if (c<d){
//            x=1;
//        }else{
//            if (a<c){
//                if (b<d){
//                    x=2;
//                }else{
//                   x=3;
//                }
//            }else{
//                x=4;
//            }
//        }
//    }else{
//       x=5;
//    }
//    
//    
//    return 0;
//}

//
//int main()
//{
//    int a,b,c,d,e;
//    a=c=1;
//    b=20;
//    d=100;
//    
//    if (!a){
//        d=d++;
//    }else if (!b){
//        if (d){
//            d= --d;
//        }else{
//            d= d--;
//        }
//    }
//    printf("%d\n\n", d);
//    
//    return 0;
//}

/*
 已知某公司员工的工资底薪为500，员工销售的软件金额与提成方式如下：
 销售额 ≤ 2000            没有提成
 2000 < 销售额 ≤ 5000    提成8%
 5000 < 销售额 ≤ 10000   提成10%
 销售额 ≥ 10000          提成12%
 利用switch
  
 int salary = 500;//底薪
 int xiShu = sales / 1000;

 方案1：
xiShu = sales == 2000 ? 1 : xiShu;
xiShu = sales == 5000 ? 4 : xiShu;
xiShu = sales == 10000 ? 9 : xiShu;

方案2
 xiShu = (sales - 1) / 1000;
 
 */
int test()
{
    //  1、提示用户录入员工的销售额
    printf("请输入员工销售额\n");
    //  2、接收用户的录入
    int sales;
    scanf("%d",&sales);
    //  计算
    
    //  计算系数
    int xiShu = (sales - 1) / 1000;
    
    //  定义变量记录提成
    double tiCheng = 0;
    
    switch (xiShu) {
        case 0:
        case 1:
            break;
        case 2:
        case 3:
        case 4:
            tiCheng = 0.08;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            tiCheng = 0.1;
            break;
        default:
            tiCheng = 0.12;
            break;
    }
    //  定义员工工资
    double salary = 500;
    salary = salary + sales * tiCheng;
    
    printf("该员工工资是%lf\n",salary);
    return 0;
}


int main()
{

    int a;
    char c;
    
    scanf("%d",&a);
    scanf(" %c",&c);//在scanf中Tab 空格 回车是一样的
    printf("%d,%c\n",a,c);
    
    return 0;
}


