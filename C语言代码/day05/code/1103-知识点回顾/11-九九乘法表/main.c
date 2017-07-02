//
//  main.c
//  11-九九乘法表
//
//  Created by Apple on 14/11/3.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
/*

 1 * 1 = 1
 2 * 1 = 2 2 * 2 = 4
 3 * 1 = 3 3 * 2 = 6  3 * 3 = 9
 ......
 
 */
int main(int argc, const char * argv[]) {
   
    int n = 9;
    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d * %d = %2d  ",i,j,i * j);
        }
        printf("\n");
    }
    
    return 0;
}
