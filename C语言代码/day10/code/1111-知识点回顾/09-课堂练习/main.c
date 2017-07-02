//
//  main.c
//  09-课堂练习
//
//  Created by Apple on 14/11/11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

/*
 int s[4][5] = {1,2,3,4,5,6}, (*ps)[5];
 ps=s;
 
 //    *ps -> s[4];
 
 printf("%p\n",s);
 //  0x7fff5fbff720 + 3C = 4d
 
 
 
 int  *num = *(ps+3);
 printf("%p\n",num);
 
 
 int a = 10;
 int b = 20;
 
 */

void printNumByte(int num)
{
    char *cp = &num;
    
    for (int i = 0; i < sizeof(num); i++) {
//        printf("%d\n",*(cp + i));
        printf("%d\n",*cp++);
    }
    
    
}
/*
   int nums[] = {1,2,3,4,5};
 
 
   nums = {5,4,3,2,1};
 
 */

void reverseArray(int array[],int len)
{
//  记录需要交换的前面的数的下标
    int i = 0;
//  记录需要交换的后面的数的下标
    int j = len - 1;
    
    while (i < j) {
//      交换 array[i] 与 array[j]
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
//      调整角标，进入下一个元素的交换
        i++;
        j--;
    }
}
//使用指针进行数组翻转
void reverseArray2(int *array,int len)
{
    int *start = array;
    int *end = array + len - 1;
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
}


void printArray(int array[],int len)
{
    printf("[");
    for (int i = 0; i < len; i++) {
        printf("%d",array[i]);
        if (i != len -1) {
            printf(",");
        }
    }
    printf("]\n");
}

int main(int argc, const char * argv[]) {
   
    int nums[] = {1,2,3,4,5};
    
    int len = sizeof(nums) / sizeof(int);
//    reverseArray(nums, len);
    reverseArray2(nums, len);
    printArray(nums, len);
  
    
    
    return 0;
}
