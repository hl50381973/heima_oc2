//
//  main.c
//  09-字符串练习
//
//  Created by Apple on 14/11/9.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#include <stdio.h>
//4、编写一个函数检查字符串中是否包含某个字符，如果包含返回该字符的索引，如果不包含返回-1

/**
      检查字符串中是否包含某个字符，如果包含返回该字符的索引，如果不包含返回-1
 */
int indexOfCharInString(char string[],char key)
{
//  定义一个变量记录当前所查找索引
    int index = 0;
//  如果字符串没有结束就接着找
    while (string[index] != '\0') {
//        如果找到了就返回
        if (string[index] == key) {
            return index;
        }
        index++;
    }
//  如果没有找到就返回-1
    return -1;
}






int main(int argc, const char * argv[]) {
    
    
   int index = indexOfCharInString("abc", 'b');
   
    printf("%d\n",index);
    
    return 0;
}
