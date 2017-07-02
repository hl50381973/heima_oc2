//
//  main.c
//  06-字符串
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>

void test()
{
    
    //  定义了一个字符数组
    char name[] = {'c','g','x','\n'};
    
    for (int i = 0; i < 4; i++ ) {
        printf("%c",name[i]);
    }
    
    
    //    for (int i = 0; i < 5; i++) {
    //        printf("cgx\n");
    //    }
    
    //
    //    printf("beauty\n");
    //    printf("beauty\n");
    //    printf("beauty\n");
    
}
void test2()
{
    // 字符串有一个结尾的标示 '\0'
    // 字符串与字符数组的区别就在于字符串是以\0结尾的，而字符数组任意字符结尾
    
    char name[] = "cgx\n";
    int length  = sizeof(name);
    printf("%d\n",length);
    /*
     %s：它是根据\0来判断字符串有多长
     
     */
    
    
    
    printf("%s",name);
    
}


void test3()
{
    
    char name[] = "tom\n";
    
    char words[] = {'c','o','o','l'};
    
    printf("%s",words);
}

/*
   打印字符串：
 
   如果有些参数你能够在本函数确定就不要外界传人
 
 */
void printString(char str[],int length)
{
    
    for (int i = 0; i < length; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
}


void printString2(char str[])
{
//  循环控制变量
    int i = 0;
    
    while (str[i] != '\0') {
        printf("%c",str[i++]);
//        i++;
    }
    printf("\n");
}

void test4()
{
    
    /*
     总结： \0 的ASCII码就是 0
     1、字符串是一个以\0结尾字符数组
     2、%s输出内容仅会检查是否遇到 \0
     3、字符数组如果部分初始化那么没有初始化的元素就被初始化为0,\0的ASCII码就是0
     4、所以当你通过字符初始化一个字符数组，如果你的字符没有把字符数组空间填满那么这个字符数组就是字符串
     
     */
    
    char words[] = "good wife";
    
    char name[5] = {'m','y','l'};
    
    //    printf("%s",name);
    //    int len = strlen(name);
    
    //    printString(name,len);
    printString2(words);
}


#include <string.h>
/*
   当scanf中使用%s,不能接收带有空格字符串，因为%s遇到空格就结束了
  
    gets() 它可以读取空格，但是它不会检查数组长度，有可能导致数组越界
 
    fgets(name,sizeof(name), stdin);//比较安全
 */
int main(int argc, const char * argv[]) {

    
    char name[20];
    
//    scanf("%9s",name);
//    gets(name);
   
    fgets(name,sizeof(name), stdin);
    
    printString2(name);
    
    return 0;
}
