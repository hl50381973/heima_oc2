//
//  main.c
//  09-printf函数细节
//
//  Created by Apple on 14/10/30.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

int test()
{
    printf("%d ",10);
    
    printf("%f ",1.2f);
    
    printf("%c ",'A');
    
    printf("%lf\n",10.45);
    
    printf("%.2f\n",1.33);
    return 0;
}

/*
   在%与d之间,0N,N表示输出的数字的宽度，如果不够就用0补齐左边(重点)
   在%与d之间 N,N表示输出的数字的宽度，如果不够就用空格补齐左边
   在%与d之间 -N,N表示输出的数字的宽度，如果不够就用空格补齐右边
   在%与f之间，可以有M.N,M表示输出数字所占的宽度，M表示小数点后面的位数，如果不够会用空格补齐左边
 
 
 
 
 */

int test2()
{
    //  00 01 02 03
    
    int i = 1;
    printf("%-2d\n",i);
    
    float f = 1.2f;
    
    printf("%5.2f\n",f);
    printf("%-5.2f\n",f);
    return 0;
}


int main(int argc, const char * argv[]) {
    
    int i = 10;
    float f = 1.34f;
    double d = 3.14;
    char c = 'N';
    
    printf("%d,%.2f,%.4lf,%c\n",i,f,d,c);
    
    return 0;
}
