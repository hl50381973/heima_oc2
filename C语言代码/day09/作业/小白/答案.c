一、选择题
1. C
解析：访问数组元素只能使用中括号
2. C
解析：定义同时初始化数组，数组中没有显示初始化的元素会自动被初始化为0
3. D
解析：定义数组的时候必须指定一维数组的元素个数
4. C
解析:A 数组下标越界，一维数组的元素个数为4，最大下标为3
    B 数组下标越界，二维数组的元素个数是5，最大下标是4
    D 访问数组方式错误，二维数组只能通过两个中括号访问
5. A
解析：使用一个大括号对数组进行初始化，它是把第一个一维数组数组放满后放第二个一维数组，以此类推，所以结果是 m[0][0] = 1,m[0][1] = 2 m[0][2] = 3 m[1][0] = 4
6. C
解析：此类体的解题方式是，若二维数组的一维数组的个数是N,一维数组的元素格式是M，那么二维数组的第 X 个元素那么它的第一个下标 i = (X - 1) / (M + 1),第二个下标是j = (X-1) % M,所以此题的 i = (10-1) / 6  = 1 ,j = (10 - 1) % 6 = 3
7. D
解析：解题方法使用特殊值代入法
8. A
9. A
解析：x[2][2] = 0 所以结果为 0
10. B
解析：此题是把第二列的元素累加即 2 + 6 + 9 + 2 = 19
11. A
解析：提示：没有显示初始的元素，被初始化为 0
12. C
解析：提示：1、使用一个大括号对数组进行初始化，它是把第一个一维数组数组放满后放第二个一维数组，以此类推
          2、把二维数组搞成行与列该循序输出的是，从右上角到左下角中线上的元素
13. C
解析：数组只有定义的时候才可以进行整体赋值
14. A
解析：B 访问一维数组的时候，超过下边是数组越界
     C 数组按照元素顺序都是都是连续的
     D 数组下标是从0开始的
15. B
解析：数组只能定义的同时，进行整体赋值
16. D
解析：A、C使用int数组保存字符串，B、整体赋值数组下标越界，只有D是正确的
17. C
解析：C下标越界
18. C
解析：字符串是以\0结尾的,所有字符串比字符数组的长度大1
19. C
解析：5个字符+1个\0
20. D
解析：字符数组必须定义的同时进行整体初始化；所以编译不通过
21. C
解析：此题考察字符的实质是整数，所以可以进行加减运算，另外考察for语句当条件不满足就结束了。
22. D
解析：%c可以获取任意一个字符
     %s会忽略它前面输入的空格、回车、Tab,%s匹配字符时遇到空格、回车、换行就结束了。
23. C
24. A
25. C
26. A
27. C
解析：\012表示的是8进制的ASCII码值对应的字符,
     \000 - \177表示的八进制的ASCII码值对应的字符
28. A
解析：\012表示的是8进制的ASCII码值对应的字符,
     \000 - \177表示的八进制的ASCII码值对应的字符
29. A
30. B
31. D
32. A
解析：数组名是数组的的首地址，所以you\0会放到arr[0]中，
me\0会放到arr[1]中，arr[0][3] = '&' 会替换掉原来位置上的\0;

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
//  定义一个变量记录最长单词的长度
    int maxWordLength = 0,
//  定义一个变量用于计算当前单词的长度
    currentWordLength = 0,
//  定义一个变量记录最长单词的索引
    maxWordStartIndex = 0;
//  计算整个字符串的长度
    unsigned long str_len = strlen(sentence);
//  使用循环来遍历字符串，由于要包含最后一个字符所以要<=
    for (int i = 0; i <= str_len; i++) {
//      定义一个变量记录当前的字符
        char character = sentence[i];
//      如果当前的字符不是空格说明当前的单词还没有结束，所以将单词的长度+1
        if (character != ' ' && character != '\0') {
            currentWordLength ++ ;
        }else{
//          如果遇到了空格或'\0',并且最大字符串长度小于，当前的字符串长度，那么当前的字符串为目前为止最长的单词，
//  所有要当前的单词长度设置为最长单词，把当前的字符的开始为止设置为最长单词的索引
            if(maxWordLength < currentWordLength){
                maxWordLength = currentWordLength;
                maxWordStartIndex = i - currentWordLength;
            }
//          下一步需要开始计算下个单词的长度，所以要将当前单词的长度设置为0
            currentWordLength = 0;
        }
    }
//  打印最长单词的索引与长度
    printf("startIndex = %d; maxLength = %d ",maxWordStartIndex,maxWordLength);
//  打印最长单词
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
    //排序(冒泡排序)
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
    /*
       我们可以把三维数组想象为一个三维坐标系，第一个维度表示是z坐标，第二个维度表示x坐标，第三个维度表示y坐标，所谓的求平均深度就是计算每一个z坐标上所有数的平均值
     
     
     */
    int number[3][3][4] = {0};//假定使用一个3x3x4的三维数组
    float average[3][4] = {0};//存放深度平均值的数组
//  随机产生一个三维数组
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
//  计算每一个z坐标上的平均值
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