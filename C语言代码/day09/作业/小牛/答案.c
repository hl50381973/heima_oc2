一、选择题
1. C
2. B
3. D
4. C
5. A
6. C
7. D
8. A
9. A
10. B
11. A
12. C
13. C
14. A
15. B
16. D
17. C
18. C
19. C
20. D
21. C
22. D
23. C
24. A
25. C
26. A
27. C
28. A
29. A
30. B
31. D
32. A

二、填空题

1.  s1=15  ,s2=45
2.  c[i][j]=a[i][j]+b[i][j]
解析: 使用两个二维数组a和b存放两个3*4阶矩阵的元素值，然后用两重for循环进行相加求值产生二维数组c，最后显示c的各元素值。
3. 0   1   2       0   1   2        0   1   2
4. -850，2,0
5. a=1234 b=5 A或a=1234b=5
6. Hello
7. EnglishGood
8.  【1】 int  i,flag      【2】 str[i]=getchar( )      【3】 str1[i]!=str[i]
9. 【1】 j+=2            【2】 a[i]>a[j]
解析: 外层for循环控制i步长为2,内层for循环控制j步长为2.当i=0时,j=2,a[0]>a[2],交换c和a;j=4,a[0]<a[4]不交换字符;j=6,a[0]=a[6], 不交换字符;j=8,a[0]<a[8] 不交换字符; 当i=2时,j=4,a[2]<a[4], 不交换字符;j=6,a[2]>a[6], 交换a和c字符;j=8,a[2]<a[8] ,不交换字符; 当i=4时,j=6,a[4]>a[6], 交换c和g字符;j=8,a[4]<a[8] ,不交换字符; 当i=6时,j=8,a[6]>a[8], 交换e和g字符;输出”alancuegg”。
10. 【1】 gets(temp)        【2】 strcpy(temp,str)
11. 【1】 '\0'或0           【2】 strl[i]-str2[i]
12. QuickC
13.  【1】 (c=getchar())  注意，外层括号不得遗漏         【2】  +65  或  +'A'
24. 【1】 '\0'             【2】 '\0'                 【3】 x[i++]
15. 【1】 count=0          【2】!str2[k+1]
16. 【1】 gets(s)          【2】 word=0               【3】 num++
17. 【1】 buffer[k]=n%10   【2】 buffer[i]!=buffer[k-1-i]


三、编程题

1.
int main(int argc, const char * argv[])
{
    const char sentence[] = "Tomorrow will be better";
    printf("%s\n",sentence);
    int maxWordLength = 0,currentWordLength = 0,maxWordStartIndex = 0;
    unsigned long str_len = strlen(sentence);
    for (int i = 0; i < str_len + 1; i++) {
        char character = sentence[i];
        if (character != ' ' && character != '\0') {
            currentWordLength ++ ;
        }else{
            if(maxWordLength < currentWordLength){
                maxWordLength = currentWordLength;
                maxWordStartIndex = i - currentWordLength;
            }
            currentWordLength = 0;
        }
    }
    printf("startIndex = %d; maxLength = %d ",maxWordStartIndex,maxWordLength);
    for (int i = maxWordStartIndex; i < maxWordLength + maxWordStartIndex; i++) {
        printf("%c",sentence[i]);
    }
    return 0;
}



2.
int main(void)
{
    char string[6][100] = {0};
    printf("please input 6 strings:\n");//遇到 空格 或者 回车 都会认为1个字符串输入结束了。
    for(int i = 0; i < 6; i++) {
        scanf("%s",string[i]);
    }
    //排序
    for(int i = 0; i < 6 - 1;i++){
        for (int j = 0; j < 6 - 1 - i; j++) {
            if (strcmp(string[j], string[j+1]) > 0) {
                char temp[100] = {0};
                strcpy(temp, string[j]);
                strcpy(string[j], string[j+1]);
                strcpy(string[j+1], temp);
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        printf("%s\t\t",string[i]);
    }
	return 0;
}

3.
#include <stdlib.h>
int main(void)
{
    int number[3][3][4] = {0};//假定使用一个3x3x4的三维数组
    float average[3][4] = {0};//存放深度平均值的数组
    for (int i = 0; i < 3; i++) {
        printf("---------第%d层---------\n",i+1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                number[i][j][k] = arc4random()%50;
                printf("%d \t\t",number[i][j][k]);
            }
            printf("\n");
        }
    }
    
    printf("----------平均值----------\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int n = 0; n < 3; n++) {
                average[i][j] += number[n][i][j];
            }
            average[i][j]/=3;
            printf("%.2f \t\t",average[i][j]);
        }
        printf("\n");
    }
	return 0;
}

4.
int main(void)
{
    int number[3][4] = {0};//假定产生一个3x4的数组
    for (int i = 0; i < 3; i ++) {//产生12个元素放到3x4的数组中，并且输出。
        for (int j = 0; j < 4; j++) {
            number[i][j] = arc4random()%100;
            printf("%d\t",number[i][j]);
        }
        printf("\n");
    }
    
    
    int count  = 0;//鞍点个数
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            int max = number[i][j];//让max先等于当前数字
            int isMax = 1,isMin = 1;
            for (int column = 0; column < 4; column++) {//让max和本行的每个数字比较，如果max<本行的其他数字说明这个数number[i][j]不是鞍点
                if (max < number[i][column]) {
                    isMax = 0;
                    break;
                }
            }
            if(isMax == 0){
                continue;
            }
            int min = number[i][j];
            for (int row = 0; row < 3; row ++) {//让min和本行的每个数字比较，如果min>本行的其他数字说明这个数number[i][j]不是鞍点
                if (min > number[row][j]) {
                    isMin = 0;
                    break;
                }
            }
            if (isMin == 0) {
                continue;
            }
            
            if (max == min) {
                count ++;
                printf("Saddlepoint number[%d][%d] = %d\n",i,j,number[i][j]);
            }
        }
    }
    
    if (count == 0) {
        printf("没有鞍点");
    }
    
	return 0;
}
}